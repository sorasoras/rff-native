#include "tc_rt.h"

void fn_80243a68(void)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r7 = rd32(0x805717f8u);
    r9 = rd32(0x805717f4u);
    r3 = r7 * 0x600u;
    c0eq = rd32(0x80571828u) == 0u;
    r4 = r3 - 0x7fb19b80u;
    r3 = r3 - 0x7fb18980u;
    wr32(0x80571810u, r4);
    r8 = r9 * 0x600u;
    wr32(0x80571808u, r3);
    wr32(0x8057180cu, r8 - 0x7fb19b80u);
    wr32(0x80571804u, r8 - 0x7fb18980u);
    wr32(0x80571800u, (r7 * 0x480u) - 0x7fb17780u);
    wr32(0x805717fcu, (r9 * 0x480u) - 0x7fb17780u);
    if (c0eq) {
        r3 = rd32(0x805717f0u);
        if ((u32)rd8(r3 - 0x7fa8e7ccu) != 0u) {
            r29 = (r3 * 0x600u) - 0x7fb19b80u;
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0x600u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = r29;
            a.r[1] = 0x600u;
            (void)tc_call(0x80227738u, &a);
            wr8(rd32(0x805717f0u) - 0x7fa8e7ccu, 0u);
        }
    } else if (rd32(0x80571848u) != 2u) {
        r3 = (rd32(0x805717f0u) * 0x600u) - 0x7fb19b80u;
        wr32(0x817fdfd0u, r3);
        wr32(0x817fdfd4u, r3 + 0x180u);
        wr32(0x817fdfd8u, r3 + 0x300u);
        a.r[0] = r3;
        a.r[1] = 0x480u;
        f1 = tc_callf(0x8022770cu, &a);
        a.r[0] = 0x817fdfd0u;
        a.r[1] = rd32(0x8057181cu);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x80571828u), &a);
        a.r[0] = rd32(0x817fdfd0u);
        a.r[1] = 0x480u;
        (void)tc_call(0x80227798u, &a);
    } else {
        r3 = (rd32(0x805717f0u) * 0x600u) - 0x7fb19b80u;
        wr32(0x817fdfe0u, r3);
        wr32(0x817fdfe4u, r3 + 0x180u);
        wr32(0x817fdfe8u, r3 + 0x300u);
        wr32(0x817fdfecu, r3 + 0x480u);
        a.r[0] = r3;
        a.r[1] = 0x600u;
        f1 = tc_callf(0x8022770cu, &a);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = rd32(0x8057181cu);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x80571828u), &a);
        a.r[0] = rd32(0x817fdfe0u);
        a.r[1] = 0x600u;
        (void)tc_call(0x80227798u, &a);
    }
    if (rd32(0x80571824u) == 0u) {
        r3 = rd32(0x805717f0u);
        if ((u32)rd8(r3 - 0x7fa8e7d0u) != 0u) {
            r3 = r3 * 0x600u;
            r29 = r3 - 0x7fb18980u;
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0x600u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = r29;
            a.r[1] = 0x600u;
            (void)tc_call(0x80227738u, &a);
            wr8(rd32(0x805717f0u) - 0x7fa8e7d0u, 0u);
        }
    } else if (rd32(0x80571848u) != 2u) {
        r3 = (rd32(0x805717f0u) * 0x600u) - 0x7fb18980u;
        wr32(0x817fdfb4u, r3);
        wr32(0x817fdfb8u, r3 + 0x180u);
        wr32(0x817fdfbcu, r3 + 0x300u);
        a.r[0] = r3;
        a.r[1] = 0x480u;
        f1 = tc_callf(0x8022770cu, &a);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = rd32(0x80571818u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x80571824u), &a);
        a.r[0] = rd32(0x817fdfb4u);
        a.r[1] = 0x480u;
        (void)tc_call(0x80227798u, &a);
    } else {
        r3 = (rd32(0x805717f0u) * 0x600u) - 0x7fb18980u;
        wr32(0x817fdfc0u, r3);
        wr32(0x817fdfc4u, r3 + 0x180u);
        wr32(0x817fdfc8u, r3 + 0x300u);
        wr32(0x817fdfccu, r3 + 0x480u);
        a.r[0] = r3;
        a.r[1] = 0x600u;
        f1 = tc_callf(0x8022770cu, &a);
        a.r[0] = 0x817fdfc0u;
        a.r[1] = rd32(0x80571818u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x80571824u), &a);
        a.r[0] = rd32(0x817fdfc0u);
        a.r[1] = 0x600u;
        (void)tc_call(0x80227798u, &a);
    }
    if (rd32(0x80571820u) == 0u || rd32(0x80571848u) == 2u) {
        if (rd32(0x80571820u) == 0u) {
            r3 = rd32(0x805717f0u);
            if ((u32)rd8(r3 - 0x7fa8e7d4u) != 0u) {
                r3 = r3 * 0x480u;
                r29 = r3 - 0x7fb17780u;
                a.r[0] = r29;
                a.r[1] = 0u;
                a.r[2] = 0x480u;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = r29;
                a.r[1] = 0x480u;
                (void)tc_call(0x80227738u, &a);
                wr8(rd32(0x805717f0u) - 0x7fa8e7d4u, 0u);
            }
        }
    } else {
        r3 = (rd32(0x805717f0u) * 0x480u) - 0x7fb17780u;
        wr32(0x817fdfa8u, r3);
        wr32(0x817fdfacu, r3 + 0x180u);
        wr32(0x817fdfb0u, r3 + 0x300u);
        a.r[0] = r3;
        a.r[1] = 0x480u;
        f1 = tc_callf(0x8022770cu, &a);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = rd32(0x80571814u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x80571820u), &a);
        a.r[0] = rd32(0x817fdfa8u);
        a.r[1] = 0x480u;
        (void)tc_call(0x80227798u, &a);
    }
    r7 = rd32(0x805717f8u) + 1u;
    r3 = rd32(0x805717f0u) + 1u;
    r5 = rd32(0x805717f4u) + 1u;
    wr32(0x805717f8u, r7 - (((ppc_mulhwu(0xaaaaaaabu, r7) >> 1u) & 0x7fffffffu) * 3u));
    wr32(0x805717f4u, r5 - (((ppc_mulhwu(0xaaaaaaabu, r5) >> 1u) & 0x7fffffffu) * 3u));
    wr32(0x805717f0u, r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u));
    return;
}
