#include "tc_rt.h"

void fn_80245690(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x28u;
    r4 = rd32(0x805718e8u);
    wr32(0x805718f8u, rd32(0x805718f8u) + 1u);
    r29 = rd32((u32)param_1 + 0x1cu);
    r31 = r4 + (rd32((u32)param_1 + 0x18u) * 0x140u);
    if (r29 != 0u) {
        if ((r29 & 0x80000000u) == 0u) {
            if ((r29 & 1u) != 0u) {
                wr16(r31 + 8u, rd16(r30 + 8u));
                wr16(r31 + 0xau, rd16(r30 + 0xau));
            }
            if ((r29 & 2u) != 0u) {
                wr32(r31 + 0xcu, rd32(r30 + 0xcu));
            }
            if ((r29 & 4u) == 0u) {
                wr16(r30 + 0x10u, rd16(r31 + 0x10u));
            } else {
                wr16(r31 + 0x10u, rd16(r30 + 0x10u));
            }
            if ((r29 & 8u) != 0u) {
                wr16(r31 + 0x12u, rd16(r30 + 0x12u));
            }
            if ((r29 & 0x10u) != 0u) {
                a.r[0] = r31 + 0x14u;
                a.r[1] = r30 + 0x14u;
                a.r[2] = 0x30u;
                (void)tc_call(0x80004338u, &a);
            }
            if ((r29 & 0x40u) == 0u) {
                if ((r29 & 0x20u) != 0u) {
                    wr16(r31 + 0x44u, rd16(r30 + 0x44u));
                    wr16(r31 + 0x46u, rd16(r30 + 0x46u));
                    wr16(r31 + 0x48u, rd16(r30 + 0x48u));
                    wr16(r31 + 0x4au, rd16(r30 + 0x4au));
                    wr16(r31 + 0x4cu, rd16(r30 + 0x4cu));
                    wr16(r31 + 0x4eu, rd16(r30 + 0x4eu));
                    wr16(r31 + 0x50u, rd16(r30 + 0x50u));
                    r3 = rd32((u32)param_1 + 0x24u);
                    wr32(r3, 0u);
                    wr32(r3 + 4u, 0u);
                    wr32(r3 + 8u, 0u);
                    wr32(r3 + 0xcu, 0u);
                    wr32(r3 + 0x10u, 0u);
                    wr32(r3 + 0x14u, 0u);
                    wr32(r3 + 0x18u, 0u);
                    wr32(r3 + 0x1cu, 0u);
                    wr32(r3 + 0x20u, 0u);
                    wr32(r3 + 0x24u, 0u);
                    wr32(r3 + 0x28u, 0u);
                    wr32(r3 + 0x2cu, 0u);
                    wr32(r3 + 0x30u, 0u);
                    wr32(r3 + 0x34u, 0u);
                    wr32(r3 + 0x38u, 0u);
                    wr32(r3 + 0x3cu, 0u);
                }
            } else {
                wr16(r31 + 0x4eu, rd16(r30 + 0x4eu));
                wr16(r31 + 0x50u, rd16(r30 + 0x50u));
            }
            if ((r29 & 0x80u) != 0u) {
                a.r[0] = r31 + 0x52u;
                a.r[1] = r30 + 0x52u;
                a.r[2] = 0x18u;
                (void)tc_call(0x80004338u, &a);
            }
            if ((r29 & 0x200u) == 0u) {
                if ((r29 & 0x100u) != 0u) {
                    wr16(r31 + 0x6au, rd16(r30 + 0x6au));
                    wr16(r31 + 0x6cu, rd16(r30 + 0x6cu));
                }
            } else {
                r0 = (u32)(s16)rd16(r30 + 0x6cu);
                wr16(r30 + 0x6au, rd16(r31 + 0x6au));
                wr16(r31 + 0x6cu, (u16)r0);
            }
            if ((r29 & 0x7800u) == 0u) {
                if ((r29 & 0x400u) == 0u) {
                    wr16(r30 + 0x7au, rd16(r31 + 0x7au));
                    wr16(r30 + 0x7cu, rd16(r31 + 0x7cu));
                } else {
                    wr32(r31 + 0x6eu, rd32(r30 + 0x6eu));
                    wr32(r31 + 0x72u, rd32(r30 + 0x72u));
                    wr32(r31 + 0x76u, rd32(r30 + 0x76u));
                    wr32(r31 + 0x7au, rd32(r30 + 0x7au));
                }
            } else {
                if ((r29 & 0x800u) != 0u) {
                    wr16(r31 + 0x6eu, rd16(r30 + 0x6eu));
                }
                if ((r29 & 0x1000u) != 0u) {
                    wr32(r31 + 0x72u, rd32(r30 + 0x72u));
                }
                if ((r29 & 0x2000u) != 0u) {
                    wr32(r31 + 0x76u, rd32(r30 + 0x76u));
                }
                if ((r29 & 0x4000u) == 0u) {
                    wr32(r30 + 0x7au, rd32(r31 + 0x7au));
                } else {
                    wr32(r31 + 0x7au, rd32(r30 + 0x7au));
                }
            }
            if ((r29 & 0x8000u) != 0u) {
                wr32(r31 + 0x7eu, rd32(r30 + 0x7eu));
                wr32(r31 + 0x82u, rd32(r30 + 0x82u));
                wr32(r31 + 0x86u, rd32(r30 + 0x86u));
                wr32(r31 + 0x8au, rd32(r30 + 0x8au));
                wr32(r31 + 0x8eu, rd32(r30 + 0x8eu));
                wr32(r31 + 0x92u, rd32(r30 + 0x92u));
                wr32(r31 + 0x96u, rd32(r30 + 0x96u));
                wr32(r31 + 0x9au, rd32(r30 + 0x9au));
                wr32(r31 + 0x9eu, rd32(r30 + 0x9eu));
                wr32(r31 + 0xa2u, rd32(r30 + 0xa2u));
            }
            if ((r29 & 0x20000u) == 0u) {
                if ((r29 & 0x10000u) != 0u) {
                    wr16(r31 + 0xa6u, rd16(r30 + 0xa6u));
                    wr16(r31 + 0xa8u, rd16(r30 + 0xa8u));
                    wr16(r31 + 0xaau, rd16(r30 + 0xaau));
                    wr16(r31 + 0xacu, rd16(r30 + 0xacu));
                    wr16(r31 + 0xaeu, rd16(r30 + 0xaeu));
                    wr16(r31 + 0xb0u, rd16(r30 + 0xb0u));
                    wr16(r31 + 0xb2u, rd16(r30 + 0xb2u));
                }
            } else {
                wr16(r31 + 0xa6u, rd16(r30 + 0xa6u));
                wr16(r31 + 0xa8u, rd16(r30 + 0xa8u));
            }
            if ((r29 & 0x40000u) != 0u) {
                wr16(r31 + 0xb4u, rd16(r30 + 0xb4u));
                wr16(r31 + 0xb6u, rd16(r30 + 0xb6u));
                wr16(r31 + 0xb8u, rd16(r30 + 0xb8u));
            }
            if ((r29 & 0x100000u) == 0u) {
                if ((r29 & 0x80000u) != 0u) {
                    wr16(r31 + 0xbau, rd16(r30 + 0xbau));
                    wr16(r31 + 0xbcu, rd16(r30 + 0xbcu));
                    wr16(r31 + 0xbeu, rd16(r30 + 0xbeu));
                    wr16(r31 + 0xc0u, rd16(r30 + 0xc0u));
                }
            } else {
                wr16(r31 + 0xbeu, rd16(r30 + 0xbeu));
                wr16(r31 + 0xc0u, rd16(r30 + 0xc0u));
            }
            if ((r29 & 0x400000u) == 0u) {
                if ((r29 & 0x200000u) != 0u) {
                    wr16(r31 + 0xc2u, rd16(r30 + 0xc2u));
                    wr16(r31 + 0xc4u, rd16(r30 + 0xc4u));
                    wr16(r31 + 0xc6u, rd16(r30 + 0xc6u));
                    wr16(r31 + 0xc8u, rd16(r30 + 0xc8u));
                    wr16(r31 + 0xcau, rd16(r30 + 0xcau));
                    wr16(r31 + 0xccu, rd16(r30 + 0xccu));
                    wr16(r31 + 0xceu, rd16(r30 + 0xceu));
                    wr16(r31 + 0xd0u, rd16(r30 + 0xd0u));
                    wr16(r31 + 0xd2u, rd16(r30 + 0xd2u));
                    wr16(r31 + 0xd4u, rd16(r30 + 0xd4u));
                }
            } else {
                wr16(r31 + 0xccu, rd16(r30 + 0xccu));
                wr16(r31 + 0xceu, rd16(r30 + 0xceu));
                wr16(r31 + 0xd0u, rd16(r30 + 0xd0u));
                wr16(r31 + 0xd2u, rd16(r30 + 0xd2u));
                wr16(r31 + 0xd4u, rd16(r30 + 0xd4u));
            }
            if ((r29 & 0x800000u) != 0u) {
                wr16(r31 + 0xd6u, rd16(r30 + 0xd6u));
            }
            if ((r29 & 0x1000000u) != 0u) {
                wr16(r31 + 0xd8u, rd16(r30 + 0xd8u));
            }
            if ((r29 & 0x2000000u) != 0u) {
                a.r[0] = r31 + 0xdau;
                a.r[1] = r30 + 0xdau;
                a.r[2] = 0x20u;
                (void)tc_call(0x80004338u, &a);
            }
            if ((r29 & 0x4000000u) != 0u) {
                a.r[0] = r31 + 0xfau;
                a.r[1] = r30 + 0xfau;
                a.r[2] = 0x10u;
                (void)tc_call(0x80004338u, &a);
            }
            if ((r29 & 0x8000000u) != 0u) {
                a.r[0] = r31 + 0x10au;
                a.r[1] = r30 + 0x10au;
                a.r[2] = 0xau;
                (void)tc_call(0x80004338u, &a);
            }
            if ((r29 & 0x20000000u) == 0u) {
                if ((r29 & 0x40000000u) == 0u) {
                    if ((r29 & 0x10000000u) != 0u) {
                        wr16(r31 + 0x114u, rd16(r30 + 0x114u));
                        wr16(r31 + 0x116u, rd16(r30 + 0x116u));
                        wr16(r31 + 0x118u, rd16(r30 + 0x118u));
                        wr16(r31 + 0x11au, rd16(r30 + 0x11au));
                        wr16(r31 + 0x11cu, rd16(r30 + 0x11cu));
                        wr16(r31 + 0x11eu, rd16(r30 + 0x11eu));
                        wr16(r31 + 0x120u, rd16(r30 + 0x120u));
                        wr16(r31 + 0x122u, rd16(r30 + 0x122u));
                        wr16(r31 + 0x124u, rd16(r30 + 0x124u));
                        wr16(r31 + 0x126u, rd16(r30 + 0x126u));
                    }
                } else {
                    wr16(r31 + 0x11eu, rd16(r30 + 0x11eu));
                    wr16(r31 + 0x120u, rd16(r30 + 0x120u));
                    wr16(r31 + 0x122u, rd16(r30 + 0x122u));
                    wr16(r31 + 0x124u, rd16(r30 + 0x124u));
                    wr16(r31 + 0x126u, rd16(r30 + 0x126u));
                }
            } else {
                wr16(r31 + 0x118u, rd16(r30 + 0x118u));
                wr16(r31 + 0x11au, rd16(r30 + 0x11au));
            }
        } else {
            a.r[0] = r31;
            a.r[1] = r30;
            a.r[2] = 0x140u;
            (void)tc_call(0x80004338u, &a);
        }
    } else {
        wr16(r30 + 0x10u, rd16(r31 + 0x10u));
        wr16(r30 + 0x6au, rd16(r31 + 0x6au));
        wr16(r30 + 0x7au, rd16(r31 + 0x7au));
        wr16(r30 + 0x7cu, rd16(r31 + 0x7cu));
    }
    return;
}
