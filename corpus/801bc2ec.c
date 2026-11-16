#include "tc_rt.h"

s32 fn_801bc2ec(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x2d0u;
        a.r[1] = 0x801bc208u;
        a.r[2] = 0x68u;
        a.r[3] = 0xau;
        (void)tc_call(0x8025571cu, &a);
        r3 = (u32)param_1 + 0x168u;
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x2ccu, 0x80360450u);
            a.r[0] = r3;
            (void)tc_call(0x8007ae84u, &a);
            r3 = (u32)param_1 + 0x168u;
            c0eq = r3 == 0u;
            if (!c0eq && !c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x8007ae30u, &a);
            }
        }
        a.r[0] = (u32)param_1 + 0x114u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801f0de8u, &a);
        if (((u32)param_1 + 0x4cu) != 0u) {
            a.r[0] = (u32)param_1 + 0x5cu;
            a.r[1] = 0x801bc178u;
            a.r[2] = 0x58u;
            a.r[3] = 2u;
            (void)tc_call(0x8025571cu, &a);
        }
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x80163f08u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80189440u, &a);
        if (param_2 > 0) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80189294u, &a);
        }
    }
    return param_1;
}
