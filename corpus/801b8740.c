#include "tc_rt.h"

s32 fn_801b8740(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r3 = (u32)param_1 + 0x1acu;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x80189440u, &a);
        }
        r3 = (u32)param_1 + 0x170u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x80189440u, &a);
        }
        r3 = (u32)param_1 + 0x134u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x80189440u, &a);
        }
        if (((u32)param_1 + 0x84u) != 0u) {
            a.r[0] = (u32)param_1 + 0xc0u;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x801e6158u, &a);
            r3 = (u32)param_1 + 0x84u;
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x80189440u, &a);
            }
        }
        r3 = (u32)param_1 + 0x48u;
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x80189440u, &a);
        }
        a.r[0] = (u32)param_1 + 0x38u;
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
