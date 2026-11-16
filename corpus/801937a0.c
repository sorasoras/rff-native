#include "tc_rt.h"

s32 fn_801937a0(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        c0eq = rd32((u32)param_1 + 0x1a0u) == 0u;
        wr32((u32)param_1 + 0x28u, 0x803705c8u);
        if (!c0eq) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801972a4u, &a);
            r3 = rd32((u32)param_1 + 0x1a0u);
            wr32(r3 + 0x54u, 0u);
            a.r[0] = r3;
            f1 = tc_callf(0x80161ac4u, &a);
            r3 = rd32((u32)param_1 + 0x1a0u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3 + 0xccu) + 8u), &a);
            }
            wr32((u32)param_1 + 0x1a0u, 0u);
        }
        r3 = (u32)param_1 + 0x38u;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x19cu, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x38u;
            c0eq = r3 == 0u;
            if (!c0eq && !c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8007ae30u, &a);
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8019720cu, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
