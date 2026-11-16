#include "tc_rt.h"

s32 fn_8013672c(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0x28u, 0x80363a30u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801370a8u, &a);
        a.r[0] = (u32)param_1 + 0x3d8u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801e6158u, &a);
        if (((u32)param_1 + 0x310u) != 0u) {
            a.r[0] = (u32)param_1 + 0x320u;
            a.r[1] = 0x801366d0u;
            a.r[2] = 0x58u;
            a.r[3] = 2u;
            (void)tc_call(0x8025571cu, &a);
        }
        r3 = (u32)param_1 + 0x1a4u;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x308u, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x1a4u;
            c0eq = r3 == 0u;
            if (!c0eq && !c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8007ae30u, &a);
            }
        }
        r3 = (u32)param_1 + 0x3cu;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x1a0u, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x3cu;
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
