#include "tc_rt.h"

u32 fn_80258df8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_3;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfe8u, param_2);
    if (((rd32(param_1 + 4u) >> 0x16u) & 7u) != 1u || (u32)rd8(param_1 + 0xau) != 0u) {
        r3 = 0xffffffffu;
        wr32(0x805719c0u, 0x28u);
    } else {
        if (((rd32(param_1 + 8u) >> 0x1du) & 7u) == 1u) {
            a.r[0] = param_1;
            a.r[1] = 0u;
            r3 = tc_call(0x8025879cu, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                wr8(param_1 + 0xau, 1u);
                r3 = 0xffffffffu;
                wr32(param_1 + 0x28u, 0u);
                wr32(0x805719c0u, 0x28u);
                return r3;
            }
        }
        if ((u32)param_3 == 1u) {
            r31 = 0u;
            a.r[0] = param_1;
            r3 = tc_call(0x80258d4cu, &a);
            f1 = tc_lastf();
            wr32(0x817fdfe8u, rd32(0x817fdfe8u) + r3);
        }
        if (r31 == 2u || ((rd32(param_1 + 4u) >> 0x1bu) & 7u) == 3u) {
            wr32(param_1 + 8u, rd32(param_1 + 8u) & 0x1fffffffu);
        } else {
            r6 = rd32(param_1 + 8u);
            if ((((r6 >> 0x1du) & 7u) - 2u) > 1u) {
                wr32(param_1 + 8u, rd32(param_1 + 8u) & 0x1fffffffu);
            } else {
                r3 = rd32(0x817fdfe8u);
                r5 = rd32(param_1 + 0x18u);
                if (r3 >= r5) {
                    wr32(param_1 + 8u, rd32(param_1 + 8u) & 0x1fffffffu);
                } else {
                    r0 = rd32(param_1 + 0x34u);
                    if (r3 >= r0) {
                        r3 = r3 - r0;
                        r3 = rd32(param_1 + 0x1cu) + r3;
                        wr32(param_1 + 0x24u, r3);
                        r6 = (r6 & 0x1fffffffu) | 0x40000000u;
                        r0 = r5 - rd32(0x817fdfe8u);
                        wr32(param_1 + 8u, r6);
                        wr32(param_1 + 0x28u, r0);
                    } else {
                        wr32(param_1 + 8u, rd32(param_1 + 8u) & 0x1fffffffu);
                    }
                }
            }
        }
        if (((rd32(param_1 + 8u) >> 0x1du) & 7u) == 0u) {
            r12 = rd32(param_1 + 0x38u);
            if (r12 != 0u) {
                a.r[0] = rd32(param_1);
                a.r[1] = 0x817fdfe8u;
                a.r[2] = r31;
                a.r[3] = rd32(param_1 + 0x48u);
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                if (r3 != 0u) {
                    wr8(param_1 + 0xau, 1u);
                    r3 = 0xffffffffu;
                    wr32(param_1 + 0x28u, 0u);
                    wr32(0x805719c0u, 0x28u);
                    return r3;
                }
            }
            wr8(param_1 + 9u, 0u);
            wr32(param_1 + 0x18u, rd32(0x817fdfe8u));
            wr32(param_1 + 0x28u, 0u);
        }
        r3 = 0u;
    }
    return r3;
}
