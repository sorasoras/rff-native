#include "tc_rt.h"

void fn_802fc788(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_r3 + 8u) == 4u) {
        r30 = 1u;
        if ((u32)rd8(param_r3 + 2u) == 0u) {
            r5 = 1u;
        } else {
            r6 = param_r4;
            r5 = 1u;
            r4 = 0u;
            ctr = 2u;
            for (;;) {
                if (rd32(r6) != 0u) {
                    r5 = 0u;
                    fl_ = 1u;
                    break;
                }
                if (rd32(r6 + 4u) != 0u) {
                    fl_ = 10u;
                    break;
                }
                if (rd32(r6 + 8u) != 0u) {
                    fl_ = 9u;
                    break;
                }
                if (rd32(r6 + 0xcu) != 0u) {
                    fl_ = 8u;
                    break;
                }
                if (rd32(r6 + 0x10u) != 0u) {
                    fl_ = 7u;
                    break;
                }
                if (rd32(r6 + 0x14u) != 0u) {
                    fl_ = 6u;
                    break;
                }
                if (rd32(r6 + 0x18u) != 0u) {
                    fl_ = 5u;
                    break;
                }
                if (rd32(r6 + 0x1cu) != 0u) {
                    fl_ = 4u;
                    break;
                }
                if (rd32(r6 + 0x20u) != 0u) {
                    fl_ = 3u;
                    break;
                }
                if (rd32(r6 + 0x24u) != 0u) {
                    r5 = 0u;
                    fl_ = 1u;
                    break;
                }
                r6 = r6 + 0x28u;
                r4 = r4 + 9u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    fl_ = 2u;
                    break;
                }
            }
            if (fl_ == 10u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 9u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 8u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 7u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 6u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 5u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 4u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 3u) {
                fl_ = 0u;
                r5 = 0u;
            } else if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
            }
        }
        if (r5 != 0u) {
            r30 = 0u;
        }
        r0 = (u32)rd8(param_r3 + 1u);
        r26 = 0u;
        if (r0 == 0u && r30 != 0u) {
            r26 = 1u;
        }
        r31 = 0u;
        if (r0 != 0u && r30 == 0u) {
            r31 = 1u;
        }
        if (r30 != 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r28 = r3;
            a.r[0] = rd32(param_r3 + 0x34u);
            r3 = tc_call(0x8027c884u, &a);
            if (r3 == 0u) {
                a.r[0] = r28;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            r0 = ppc_cntlzw((u32)rd8(param_r3 + 3u));
            wr8(param_r3 + 3u, 0u);
            a.r[0] = param_r3 + 0x14u;
            a.r[1] = (r0 >> 5u) & 0x7ffffffu;
            a.r[2] = param_r4;
            a.r[3] = 0x28u;
            a.r[4] = 0x817fdfc8u;
            (void)tc_call(0x8027569cu, &a);
            a.r[0] = rd32(param_r3 + 0x34u);
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x14u;
            r3 = tc_call(0x8027c908u, &a);
            if (r3 != 0u) {
                wr32(param_r3 + 8u, 0u);
                wr32(param_r3 + 0x10u, 1u);
                wr8(param_r3 + 1u, 0u);
                wr8(param_r3 + 2u, 0u);
                a.r[0] = param_r3 + 0x40u;
                (void)tc_call(0x80226a70u, &a);
                wr8(param_r3 + 6u, 0u);
                a.r[0] = param_r3 + 0x70u;
                (void)tc_call(0x80226a70u, &a);
                wr8(param_r3 + 7u, 0u);
                wr8(param_r3 + 6u, 0u);
                wr8(param_r3 + 1u, 0u);
                wr8(param_r3 + 2u, 1u);
                wr8(param_r3 + 7u, 0u);
                a.r[0] = r28;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
            a.r[0] = r28;
            (void)tc_call(0x8022c2d8u, &a);
        }
        if (r26 != 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r28 = r3;
            if ((u32)rd8(param_r3 + 6u) == 0u) {
                r6 = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                r0 = ppc_mulhwu(r6, 0x1e0u);
                r6 = r6 * 0x1e0u;
                a.r[0] = param_r3 + 0x40u;
                a.r[1] = 0u;
                a.r[2] = r0;
                a.r[3] = r6;
                a.r[4] = 0x802fcd68u;
                (void)tc_call(0x8022697cu, &a);
                r3 = tc_call(0x8023029cu, &a);
                wr32(param_r3 + 0xa4u, tc_lastr4());
                wr32(param_r3 + 0xa0u, r3);
                wr8(param_r3 + 6u, 1u);
            }
            a.r[0] = param_r3 + 0x70u;
            (void)tc_call(0x80226a70u, &a);
            wr8(param_r3 + 7u, 0u);
            a.r[0] = r28;
            (void)tc_call(0x8022c2d8u, &a);
        }
        if (r31 != 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r28 = r3;
            wr8(param_r3 + 7u, 1u);
            a.r[0] = param_r3 + 0x70u;
            (void)tc_call(0x80226a70u, &a);
            a.r[0] = param_r3 + 0x70u;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
            a.r[4] = 0x802fcdb0u;
            (void)tc_call(0x8022697cu, &a);
            a.r[0] = r28;
            (void)tc_call(0x8022c2d8u, &a);
        }
        wr8(param_r3 + 1u, (u8)r30);
    }
    return;
}
