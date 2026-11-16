#include "tc_rt.h"

u32 fn_801d204c(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x34cu);
    if (r0 == (u32)param_2 && (u32)param_3 == 0u) {
        r3 = 1u;
    } else {
        if (r0 == 7u && (u32)param_3 == 0u) {
            r3 = 0u;
        } else {
            if ((s32)r0 > param_2 && (u32)param_3 == 0u) {
                r3 = 0u;
            } else {
                wr32(param_1 + 0x380u, 0u);
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = (u32)param_3;
                a.r[3] = (u32)param_4;
                a.f[0] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801d1fd8u, &a);
                wr32(param_1 + 0x36cu, 0u);
                r6 = ((u32)param_2 * 0xcu) - 0x7fc8c0f8u;
                wr32(param_1 + 0x370u, 0u);
                wr32(param_1 + 0x374u, (u32)param_4);
                wr32(param_1 + 0x34cu, (u32)param_2);
                r0 = rd32(r6 + 4u);
                wr32(param_1 + 0x354u, rd32(r6));
                wr32(param_1 + 0x358u, r0);
                wr32(param_1 + 0x35cu, rd32(r6 + 8u));
                a.r[0] = param_1;
                (void)tc_call(0x802558bcu, &a);
                r3 = 1u;
            }
        }
    }
    return r3;
}
