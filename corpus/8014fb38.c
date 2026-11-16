#include "tc_rt.h"

void fn_8014fb38(u32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((u32)param_3 == 6u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = (u32)param_3;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0xe4u), &a);
        return;
    }
    if ((u32)param_3 == 7u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = (u32)param_3;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0xe4u), &a);
        return;
    }
    if ((u32)param_3 == 0x15u) {
        a.r[0] = param_1;
        (void)tc_call(0x8014f994u, &a);
        return;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x800da6bcu, &a);
    return;
}
