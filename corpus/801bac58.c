#include "tc_rt.h"

s32 fn_801bac58(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r0 = rd32((u32)param_1 + 0x34u);
        wr32((u32)param_1 + 0x28u, 0x80372bf0u);
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = 0x801617b8u;
            a.r[2] = 0x80122258u;
            a.r[3] = 0u;
            (void)tc_call(0x80255794u, &a);
            wr32((u32)param_1 + 0x34u, 0u);
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
