#include "tc_rt.h"

s32 fn_80268fb4(void)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r27 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = rd32(0x805027c4u);
    if (((r27 != 0xd1u && r27 != 0xd0u) && (r27 != 0xd2u && r27 != 0xd3u)) && r27 != 0xd4u) {
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 4u;
        (void)tc_call(0x802662d4u, &a);
        a.r[0] = 0x817fdfd0u;
        (void)tc_call(0x802662ecu, &a);
        r3 = 0u;
        return (s32)r3;
    }
    if (r27 == 0xd2u) {
        a.r[0] = rd32(0x805027c8u);
        a.r[1] = rd32(0x805027ccu) & 0xffu;
        a.r[2] = rd32(0x805027d0u);
        a.r[3] = 0x817fdfccu;
        r3 = tc_call(0x80268518u, &a);
        r30 = r3;
        if (rd32(0x817fdfccu) == 0u && r3 != 0u) {
            wr32(0x817fdfccu, 1u);
        }
        wr32(0x805027c4u, rd32(0x817fdfccu));
    } else {
        if (r27 == 0xd3u) {
            a.r[0] = rd32(0x805027c8u);
            a.r[1] = 0x817fdfccu;
            r3 = tc_call(0x80268430u, &a);
            r30 = r3;
            if (rd32(0x817fdfccu) == 0u && r3 != 0u) {
                wr32(0x817fdfccu, 1u);
            }
            wr32(0x805027c4u, rd32(0x817fdfccu));
        } else {
            if (r27 == 0xd4u) {
                r3 = rd32(0x805027c8u);
                r5 = rd32(0x805027d0u) & 0xffu;
                wr32(0x817fdfc8u, rd32(rd32(0x805027ccu)));
                a.r[0] = r3;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = r5;
                a.r[3] = 0x817fdfccu;
                r3 = tc_call(0x80268320u, &a);
                r30 = r3;
                if (rd32(0x817fdfccu) == 0u && r3 != 0u) {
                    wr32(0x817fdfccu, 1u);
                }
                r0 = rd32(0x817fdfc8u);
                wr32(0x805027c4u, rd32(0x817fdfccu));
                wr32(rd32(0x805027ccu), r0);
            } else {
                r28 = rd32(0x805027ccu);
                a.r[0] = rd32(0x805027c8u);
                a.r[1] = rd32(0x805027d0u);
                a.r[2] = r28;
                a.r[3] = 0x817fdfccu;
                a.r[4] = 1u;
                a.r[5] = (ppc_cntlzw(0xd1u - r27) >> 5u) & 0x7ffffffu;
                r3 = tc_call(0x802687b4u, &a);
                r30 = r3;
                if (rd32(0x817fdfccu) == 0u && r3 != 0u) {
                    wr32(0x817fdfccu, 1u);
                }
                wr32(0x805027c4u, rd32(0x817fdfccu));
                if (r27 == 0xd1u) {
                    a.r[0] = rd32(0x805027d0u);
                    a.r[1] = rd32(r28);
                    (void)tc_call(0x80268a84u, &a);
                }
            }
        }
    }
    r3 = r30;
    wr32(0x80502838u, rd32(0x80502838u) + 4u);
    return (s32)r3;
}
