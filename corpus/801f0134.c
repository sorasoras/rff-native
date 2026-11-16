#include "tc_rt.h"

void fn_801f0134(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x120u) == 3u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x800dad50u, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = rd32(param_1 + 0x140u);
            r3 = tc_call(0x800da8b8u, &a);
            if (r3 != 0u) {
                r6 = rd32(param_1 + 0x144u);
                if ((s32)r6 > 0) {
                    r4 = rd32((u32)param_2 + 0x2cu);
                    r3 = 0u;
                    if (r4 != 0u && rd32(r4 + 0xb8u) == 0u) {
                        r4 = r4 + 0x54cu;
                        if (r4 != 0u) {
                            r4 = ((rd32(r4 + 0x74u) - 0x1f8u) * 0x14u) - 0x7fb60e50u;
                            if ((s32)rd8(r4 + 0x61fu) >= (s32)r6) {
                                r3 = 1u;
                            }
                        }
                    }
                }
            }
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = (u32)param_2;
                a.r[2] = param_3;
                a.r[3] = 0u;
                a.r[4] = 1u;
                (void)tc_call(0x800dab98u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = (u32)param_2;
                a.r[2] = param_3;
                a.r[3] = 1u;
                a.r[4] = 1u;
                f1 = tc_callf(0x800dab98u, &a);
                a.r[0] = param_1;
                a.r[1] = (u32)param_2;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0xd4u), &a);
                if (r3 != 0u) {
                    wr32(param_1 + 0x120u, 4u);
                }
            }
        }
    }
    return;
}
