#include "tc_rt.h"

void fn_80241d70(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r28 = rd32(0x80570b44u);
    r3 = rd32(0x8057178cu);
    r29 = ((r28 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r28 & 0x1fu));
    wr32(0x8057178cu, r3 & ~r29);
    r7 = r3 & r29;
    r3 = 1u;
    if ((param_2 & 0xfu) == 0u) {
        r8 = param_2 & 0xffffff00u;
        r6 = (r28 << 2u) & 0xfffffffcu;
        wr32(r6 - 0x7fb19d00u, r8);
        if (((param_2 & 0x18000000u) - 0x8000000u) != 0u || (r8 & 0x1000000u) == 0u) {
            r7 = rd32(0x80571790u);
            r5 = ppc_cntlzw(r7);
            wr32(0x80570b44u, r5);
            if (r5 != 0x20u) {
                wr32(0x80571790u, r7 & ~(((r5 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r5 & 0x1fu))));
                a.r[0] = (r5 * 0xcu) - 0x7fb19d30u;
                a.r[1] = 0u;
                a.r[2] = 0xcu;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = rd32(0x80570b44u);
                a.r[1] = 0x80241d70u;
                (void)tc_call(0x80265fc8u, &a);
            }
        } else if (rd32(0x80570b50u) >= 2u) {
            if ((r8 & 0x80000000u) == 0u || (r8 & 0x4000000u) != 0u) {
                if (r7 == 0u) {
                    r3 = rd32(0x80570b44u);
                    a.r[0] = r3;
                    a.r[1] = 0x80570b58u;
                    a.r[2] = 1u;
                    a.r[3] = (r3 * 0xcu) - 0x7fb19d30u;
                    a.r[4] = 0xau;
                    a.r[5] = 0x80241bdcu;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802659f8u, &a);
                } else {
                    r3 = rd32(0x80570b44u);
                    a.r[0] = r3;
                    a.r[1] = 0x80570b5cu;
                    a.r[2] = 3u;
                    a.r[3] = (r3 * 0xcu) - 0x7fb19d30u;
                    a.r[4] = 0xau;
                    a.r[5] = 0x80241bdcu;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802659f8u, &a);
                }
            } else if ((r8 & 0x100000u) != 0u && (r8 & 0x80000u) == 0u && (r8 & 0x40000u) == 0u) {
                if ((r8 & 0x40000000u) == 0u) {
                    a.r[0] = r28;
                    a.r[1] = r6 - 0x7fb19cf0u;
                    a.r[2] = 3u;
                    a.r[3] = (r28 * 0xcu) - 0x7fb19d30u;
                    a.r[4] = 8u;
                    a.r[5] = 0x80241c9cu;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802659f8u, &a);
                } else {
                    a.r[0] = r28;
                    a.r[1] = 0x80570b58u;
                    a.r[2] = 1u;
                    a.r[3] = (r28 * 0xcu) - 0x7fb19d30u;
                    a.r[4] = 0xau;
                    a.r[5] = 0x80241bdcu;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802659f8u, &a);
                }
            }
            if (r3 == 0u) {
                r7 = rd32(0x80571790u);
                r5 = ppc_cntlzw(r7);
                r0 = rd32(0x80571780u) | r29;
                wr32(0x80570b44u, r5);
                wr32(0x80571780u, r0);
                if (r5 != 0x20u) {
                    wr32(0x80571790u, r7 & ~(((r5 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r5 & 0x1fu))));
                    a.r[0] = (r5 * 0xcu) - 0x7fb19d30u;
                    a.r[1] = 0u;
                    a.r[2] = 0xcu;
                    (void)tc_call(0x8000443cu, &a);
                    a.r[0] = rd32(0x80570b44u);
                    a.r[1] = 0x80241d70u;
                    (void)tc_call(0x80265fc8u, &a);
                }
            }
        } else {
            wr32(0x80571794u, rd32(0x80571794u) | r29);
            a.r[0] = r28;
            a.r[1] = 0x817fdfe8u;
            (void)tc_call(0x80265848u, &a);
            a.r[0] = r28;
            a.r[1] = rd32(0x80570b4cu) | 0x400000u;
            (void)tc_call(0x802656e4u, &a);
            a.r[0] = rd32(0x80571794u);
            (void)tc_call(0x80265754u, &a);
            r5 = rd32(0x80571790u);
            r3 = ppc_cntlzw(r5);
            wr32(0x80570b44u, r3);
            if (r3 != 0x20u) {
                r4 = r5 & ~(((r3 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r3 & 0x1fu)));
                r3 = r3 * 0xcu;
                wr32(0x80571790u, r4);
                r3 = r3 - 0x7fb19d30u;
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0xcu;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = rd32(0x80570b44u);
                a.r[1] = 0x80241d70u;
                (void)tc_call(0x80265fc8u, &a);
            }
        }
    } else {
        r5 = rd32(0x80571790u);
        r3 = ppc_cntlzw(r5);
        wr32(0x80570b44u, r3);
        if (r3 != 0x20u) {
            r4 = r5 & ~(((r3 & 0x20u) != 0u) ? 0u : (0x80000000u >> (r3 & 0x1fu)));
            r3 = r3 * 0xcu;
            wr32(0x80571790u, r4);
            r3 = r3 - 0x7fb19d30u;
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0xcu;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = rd32(0x80570b44u);
            a.r[1] = 0x80241d70u;
            (void)tc_call(0x80265fc8u, &a);
        }
    }
    return;
}
