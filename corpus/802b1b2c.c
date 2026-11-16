#include "tc_rt.h"

void fn_802b1b2c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = param_4;
    r31 = param_6;
    if ((param_1 == 0u || param_2 < 0x6cu) || (param_5 > 0xcu || param_3 > 3u)) {
        if ((u32)rd8(0x80545c50u) >= 1u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0xa0000u;
            a.r[1] = 0x803978d0u;
            a.r[2] = param_1;
            a.r[3] = param_2;
            a.r[4] = param_3;
            a.r[5] = param_5;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028ccb4u, &a);
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = param_2;
        (void)tc_call(0x8000443cu, &a);
        r5 = param_2 - 0x6cu;
        wr32(param_1, r5);
        r4 = 0u;
        wr32(param_1 + 4u, r5);
        wr32(param_1 + 8u, 0u);
        wr32(param_1 + 0x68u, param_1 + 0x6cu);
        if (param_3 != 0u) {
            r3 = param_3 + 0xfff8u;
            if (param_3 > 8u) {
                r3 = r3 & 0xffffu;
                ctr = ((r3 + 7u) >> 3u) & 0x1fffffffu;
                if (r3 > 0u) {
                    do {
                        r3 = (r4 & 0xffffu) * 0x14u;
                        r0 = rd32(r29 + 4u);
                        r4 = r4 + 8u;
                        r3 = param_1 + r3;
                        wr32(r3 + 0x10u, rd32(r29));
                        wr32(r3 + 0x14u, r0);
                        r0 = rd32(r29 + 0xcu);
                        wr32(r3 + 0x18u, rd32(r29 + 8u));
                        wr32(r3 + 0x1cu, r0);
                        wr32(r3 + 0x20u, rd32(r29 + 0x10u));
                        r0 = rd32(r29 + 0x18u);
                        wr32(r3 + 0x24u, rd32(r29 + 0x14u));
                        wr32(r3 + 0x28u, r0);
                        r0 = rd32(r29 + 0x20u);
                        wr32(r3 + 0x2cu, rd32(r29 + 0x1cu));
                        wr32(r3 + 0x30u, r0);
                        wr32(r3 + 0x34u, rd32(r29 + 0x24u));
                        r0 = rd32(r29 + 0x2cu);
                        wr32(r3 + 0x38u, rd32(r29 + 0x28u));
                        wr32(r3 + 0x3cu, r0);
                        r0 = rd32(r29 + 0x34u);
                        wr32(r3 + 0x40u, rd32(r29 + 0x30u));
                        wr32(r3 + 0x44u, r0);
                        wr32(r3 + 0x48u, rd32(r29 + 0x38u));
                        r0 = rd32(r29 + 0x40u);
                        wr32(r3 + 0x4cu, rd32(r29 + 0x3cu));
                        wr32(r3 + 0x50u, r0);
                        r0 = rd32(r29 + 0x48u);
                        wr32(r3 + 0x54u, rd32(r29 + 0x44u));
                        wr32(r3 + 0x58u, r0);
                        wr32(r3 + 0x5cu, rd32(r29 + 0x4cu));
                        r0 = rd32(r29 + 0x54u);
                        wr32(r3 + 0x60u, rd32(r29 + 0x50u));
                        wr32(r3 + 0x64u, r0);
                        r0 = rd32(r29 + 0x5cu);
                        wr32(r3 + 0x68u, rd32(r29 + 0x58u));
                        wr32(r3 + 0x6cu, r0);
                        wr32(r3 + 0x70u, rd32(r29 + 0x60u));
                        r0 = rd32(r29 + 0x68u);
                        wr32(r3 + 0x74u, rd32(r29 + 0x64u));
                        wr32(r3 + 0x78u, r0);
                        r0 = rd32(r29 + 0x70u);
                        wr32(r3 + 0x7cu, rd32(r29 + 0x6cu));
                        wr32(r3 + 0x80u, r0);
                        wr32(r3 + 0x84u, rd32(r29 + 0x74u));
                        r0 = rd32(r29 + 0x7cu);
                        wr32(r3 + 0x88u, rd32(r29 + 0x78u));
                        wr32(r3 + 0x8cu, r0);
                        r0 = rd32(r29 + 0x84u);
                        wr32(r3 + 0x90u, rd32(r29 + 0x80u));
                        wr32(r3 + 0x94u, r0);
                        wr32(r3 + 0x98u, rd32(r29 + 0x88u));
                        r0 = rd32(r29 + 0x90u);
                        wr32(r3 + 0x9cu, rd32(r29 + 0x8cu));
                        wr32(r3 + 0xa0u, r0);
                        r0 = rd32(r29 + 0x98u);
                        wr32(r3 + 0xa4u, rd32(r29 + 0x94u));
                        wr32(r3 + 0xa8u, r0);
                        r0 = rd32(r29 + 0x9cu);
                        r29 = r29 + 0xa0u;
                        wr32(r3 + 0xacu, r0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r3 = r4 & 0xffffu;
            ctr = param_3 - r3;
            if (r3 < param_3) {
                do {
                    r5 = (r4 & 0xffffu) * 0x14u;
                    r0 = rd32(r29 + 4u);
                    r4 = r4 + 1u;
                    r5 = param_1 + r5;
                    wr32(r5 + 0x10u, rd32(r29));
                    wr32(r5 + 0x14u, r0);
                    r0 = rd32(r29 + 0xcu);
                    wr32(r5 + 0x18u, rd32(r29 + 8u));
                    wr32(r5 + 0x1cu, r0);
                    r0 = rd32(r29 + 0x10u);
                    r29 = r29 + 0x14u;
                    wr32(r5 + 0x20u, r0);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        wr16(param_1 + 0xcu, (u16)param_3);
        r5 = 0u;
        if (param_5 != 0u) {
            r3 = param_5 + 0xfff8u;
            if (param_5 > 8u) {
                r3 = r3 & 0xffffu;
                ctr = ((r3 + 7u) >> 3u) & 0x1fffffffu;
                if (r3 > 0u) {
                    do {
                        r3 = param_1 + ((r5 << 1u) & 0x1fffeu);
                        r5 = r5 + 8u;
                        wr16(r3 + 0x4eu, rd16(r31));
                        wr16(r3 + 0x50u, rd16(r31 + 2u));
                        wr16(r3 + 0x52u, rd16(r31 + 4u));
                        wr16(r3 + 0x54u, rd16(r31 + 6u));
                        wr16(r3 + 0x56u, rd16(r31 + 8u));
                        wr16(r3 + 0x58u, rd16(r31 + 0xau));
                        wr16(r3 + 0x5au, rd16(r31 + 0xcu));
                        r0 = (u32)rd16(r31 + 0xeu);
                        r31 = r31 + 0x10u;
                        wr16(r3 + 0x5cu, (u16)r0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            r3 = r5 & 0xffffu;
            ctr = param_5 - r3;
            if (r3 < param_5) {
                do {
                    r3 = param_1 + ((r5 << 1u) & 0x1fffeu);
                    r5 = r5 + 1u;
                    wr16(r3 + 0x4eu, rd16(r31));
                    r31 = r31 + 2u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        a.r[0] = param_5;
        a.r[1] = param_1;
        (void)tc_call(0x802b7144u, &a);
        wr16(param_1 + 0x4cu, (u16)param_5);
    }
    return;
}
