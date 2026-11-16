"""Extract a Wii disc partition to a flat image, the way a boot loader sees it.

Verified against Dolphin's DiscIO (VolumeWii.cpp):

  * the partition table at 0x40000 holds four (count, table_offset_words) pairs; each group's
    entries are (partition_offset_words, type) with type 1 = the game partition;
  * the ticket at the partition start carries the encrypted title key at 0x1BF and the title id
    at 0x1DC; title_key = AES_ECB_decrypt(common_key, enc_title_key) XOR (title_id || 0^8);
  * a cluster is 0x8000 bytes: a 0x400 hash header followed by 0x7C00 of AES-CBC data, and the
    IV for that data is the last 16 bytes of the header (VolumeWii::DecryptBlockData uses
    &in[0x3d0] as the IV).

Usage:  python wii_extract.py <disc.iso> <out.img> [max_mb]
"""
import struct, sys
from Crypto.Cipher import AES

COMMON_KEY = bytes.fromhex('ebe42a225e8593e448d9c5457381aaf7')
BLOCK_HEADER, BLOCK_DATA, BLOCK_TOTAL = 0x400, 0x7C00, 0x8000


def be32(b, o):
    return struct.unpack('>I', b[o:o + 4])[0]


def game_partition(f):
    f.seek(0x40000)
    tab = f.read(0x20)
    for g in range(4):
        cnt, toff = be32(tab, g * 8), be32(tab, g * 8 + 4) * 4
        if not cnt:
            continue
        f.seek(toff)
        ent = f.read(cnt * 8)
        for i in range(cnt):
            poff, ptype = be32(ent, i * 8) * 4, be32(ent, i * 8 + 4)
            # The entry's second word is the partition type: 0 is the game, 1 the update
            # partition (whose files are the system menu's HTML pages), 2 a channel.
            if ptype == 0:
                return poff
    raise SystemExit('no game partition (type 0)')


def title_key(f, part):
    f.seek(part)
    t = f.read(0x2A4)
    enc, tid = t[0x1BF:0x1CF], t[0x1DC:0x1E4]
    dec = AES.new(COMMON_KEY, AES.MODE_ECB).decrypt(enc)
    return bytes(a ^ b for a, b in zip(dec, tid + b'\0' * 8)), tid


def extract(iso, out_path, max_bytes=None):
    f = open(iso, 'rb')
    part = game_partition(f)
    tk, tid = title_key(f, part)
    f.seek(part + 0x2B8)
    data_off = part + be32(f.read(4), 0) * 4
    f.seek(part + 0x2BC)
    data_size = be32(f.read(4), 0) * 4
    print('partition  0x%x  data 0x%x  size 0x%x' % (part, data_off, data_size))
    print('title id   %s' % tid.hex())
    print('title key  %s' % tk.hex())
    if max_bytes:
        data_size = min(data_size, max_bytes)
    out = open(out_path, 'wb')
    off, written = data_off, 0
    while written < data_size:
        f.seek(off)
        cl = f.read(BLOCK_TOTAL)
        if len(cl) < BLOCK_TOTAL:
            break
        iv = cl[0x3D0:0x3E0]
        out.write(AES.new(tk, AES.MODE_CBC, iv).decrypt(cl[BLOCK_HEADER:BLOCK_TOTAL]))
        written += BLOCK_DATA
        off += BLOCK_TOTAL
    out.close()
    print('wrote %d bytes to %s' % (written, out_path))
    d = open(out_path, 'rb').read(0x40)
    print('game id    %r' % d[:6])
    print('wii magic  %s' % d[0x18:0x1C].hex())
    print('title      %r' % d[0x20:0x60].split(b'\0')[0])
    return tk, tid


if __name__ == '__main__':
    a = sys.argv[1:]
    if len(a) < 2:
        sys.exit(__doc__)
    lim = int(a[2]) * 1024 * 1024 if len(a) > 2 else None
    extract(a[0], a[1], lim)
