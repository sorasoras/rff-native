#include "tc_rt.h"

void fn_8022c740(u32 param_1, s32 param_2)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    (void)param_1;
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        wr32(r1 + 0x18u, r30);
        r30 = (u32)param_2;
        wr32(r1 + 0x14u, r29);
        r31 = rd32(0xcc003000u);
        r0 = rd32(0xcc003004u);
        r31 = r31 & 0xfffeffffu;
        if (r31 == 0u) {
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x80228008u, &a);
            f1 = tc_lastf();
        } else {
            r0 = r31 & r0;
            if (r0 == 0u) {
                a.r[0] = (u32)param_2;
                r3 = tc_call(0x80228008u, &a);
                f1 = tc_lastf();
            }
        }
        r0 = 0u;
        if ((r31 & 0x80u) != 0u) {
            r4 = (u32)rd16(0xcc00401eu);
            if ((r4 & 1u) != 0u) {
                r0 = 0x80000000u;
            }
            if ((r4 & 2u) != 0u) {
                r0 = r0 | 0x40000000u;
            }
            if ((r4 & 4u) != 0u) {
                r0 = r0 | 0x20000000u;
            }
            if ((r4 & 8u) != 0u) {
                r0 = r0 | 0x10000000u;
            }
            if ((r4 & 0x10u) != 0u) {
                r0 = r0 | 0x8000000u;
            }
        }
        if ((r31 & 0x40u) != 0u) {
            r4 = (u32)rd16(0xcc00500au);
            if ((r4 & 8u) != 0u) {
                r0 = r0 | 0x4000000u;
            }
            if ((r4 & 0x20u) != 0u) {
                r0 = r0 | 0x2000000u;
            }
            if ((r4 & 0x80u) != 0u) {
                r0 = r0 | 0x1000000u;
            }
        }
        if ((r31 & 0x20u) != 0u && (rd32(0xcd006c00u) & 8u) != 0u) {
            r0 = r0 | 0x800000u;
        }
        if ((r31 & 0x10u) != 0u) {
            r4 = rd32(0xcd006800u);
            if ((r4 & 2u) != 0u) {
                r0 = r0 | 0x400000u;
            }
            if ((r4 & 8u) != 0u) {
                r0 = r0 | 0x200000u;
            }
            if ((r4 & 0x800u) != 0u) {
                r0 = r0 | 0x100000u;
            }
            r4 = rd32(0xcd006814u);
            if ((r4 & 2u) != 0u) {
                r0 = r0 | 0x80000u;
            }
            if ((r4 & 8u) != 0u) {
                r0 = r0 | 0x40000u;
            }
            if ((r4 & 0x800u) != 0u) {
                r0 = r0 | 0x20000u;
            }
            r4 = rd32(0xcd006828u);
            if ((r4 & 2u) != 0u) {
                r0 = r0 | 0x10000u;
            }
            if ((r4 & 8u) != 0u) {
                r0 = r0 | 0x8000u;
            }
        }
        if ((r31 & 0x2000u) != 0u) {
            r0 = r0 | 0x20u;
        }
        if ((r31 & 0x1000u) != 0u) {
            r0 = r0 | 0x40u;
        }
        if ((r31 & 0x400u) != 0u) {
            r0 = r0 | 0x1000u;
        }
        if ((r31 & 0x200u) != 0u) {
            r0 = r0 | 0x2000u;
        }
        if ((r31 & 0x100u) != 0u) {
            r0 = r0 | 0x80u;
        }
        if ((r31 & 8u) != 0u) {
            r0 = r0 | 0x800u;
        }
        if ((r31 & 4u) != 0u) {
            r0 = r0 | 0x400u;
        }
        if ((r31 & 2u) != 0u) {
            r0 = r0 | 0x200u;
        }
        if ((r31 & 0x800u) != 0u) {
            r0 = r0 | 0x4000u;
        }
        if ((r31 & 1u) != 0u) {
            r0 = r0 | 0x100u;
        }
        if ((r31 & 0x4000u) != 0u) {
            r0 = r0 | 0x10u;
        }
        r4 = rd32(0x800000c4u);
        r3 = r0 & ~(r4 | rd32(0x800000c8u));
        if (r3 == 0u) break;
        r4 = 0x8037a818u;
        for (;;) {
            r0 = r3 & rd32(r4);
            if (r0 != 0u) break;
            r4 = r4 + 4u;
        }
        r0 = ppc_cntlzw(r0);
        r29 = (u32)(s16)r0;
        r3 = rd32(0x805714e8u);
        r31 = rd32(r3 + ((r29 << 2u) & 0xfffffffcu));
        if (r31 == 0u) break;
        if ((s32)r29 > 4) {
            wr16(0x805714dcu, (u16)r29);
            r3 = tc_call(0x8023029cu, &a);
            f1 = tc_lastf();
            wr32(0x805714e4u, tc_lastr4());
            wr32(0x805714e0u, r3);
            wr32(0x805714d8u, rd32((u32)param_2 + 0x198u));
        }
        f1 = tc_callf(0x8022eff0u, &a);
        r3 = tc_lastr();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        lr = 0x8022c9b0u;
        if (r31 != 0x8022c740u) {
            a.r[0] = r29;
            a.r[1] = (u32)param_2;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r31, &a);
            f1 = tc_lastf();
            r3 = tc_call(0x8022f02cu, &a);
            f1 = tc_lastf();
            r3 = tc_call(0x8022f538u, &a);
            f1 = tc_lastf();
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x80228008u, &a);
            f1 = tc_lastf();
            break;
        }
    }
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x80228008u, &a);
    f1 = tc_lastf();
    r0 = rd32(r1 + 0x24u);
    r31 = rd32(r1 + 0x1cu);
    r30 = rd32(r1 + 0x18u);
    r29 = rd32(r1 + 0x14u);
    return;
}
