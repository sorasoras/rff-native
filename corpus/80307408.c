#include "tc_rt.h"

u32 fn_80307408(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x44u), &a);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 0x817fdfa0u;
    a.r[2] = 0x40u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
    f1 = tc_lastf();
    if (r3 != 0x40u) {
        r3 = 0u;
    } else {
        if ((rd32(0x817fdfa0u) - 0x52530000u) != 0x544du) {
            r0 = 0u;
        } else {
            r4 = (u32)rd16(0x817fdfa6u);
            if (r4 < 0x100u) {
                r0 = 0u;
            } else {
                r0 = (((~r4 | 0x100u) - (((0x100u - r4) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
            }
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            if (rd32(0x817fdfb8u) > param_3) {
                r3 = 0u;
            } else {
                r3 = rd32(param_1);
                r6 = rd32(0x817fdfb0u);
                r29 = r6 + rd32(0x817fdfb4u);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = r6;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x44u), &a);
                r3 = rd32(param_1);
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = r29;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
                if (r3 != r29) {
                    r3 = 0u;
                } else {
                    if ((rd32(param_2) - 0x52530000u) != 0x544du) {
                        r0 = 0u;
                    } else {
                        r4 = (u32)rd16(param_2 + 6u);
                        if (r4 < 0x100u) {
                            r0 = 0u;
                        } else {
                            r0 = (((~r4 | 0x100u) - (((0x100u - r4) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
                        }
                    }
                    if (r0 != 0u) {
                        wr32(param_1 + 4u, param_2);
                        r3 = rd32(param_2 + 0x10u) + param_2;
                        wr32(param_1 + 8u, r3);
                        r5 = r3 + 8u;
                        r3 = (u32)rd8(r3 + 8u);
                        a.r[0] = r3;
                        a.r[1] = rd32(r5 + 4u);
                        a.r[2] = r5;
                        (void)tc_call(0x8030e93cu, &a);
                    }
                    r3 = 1u;
                }
            }
        }
    }
    return r3;
}
