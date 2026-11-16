#include "tc_rt.h"

void fn_80161384(u32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((u32)param_3 == 5u) {
        a.f[0] = (f64)rdf32(0x80574a7cu);
        a.r[0] = param_1;
        (void)tc_call(0x800da490u, &a);
        a.f[0] = (f64)rdf32(0x80574accu);
        a.r[0] = param_1;
        (void)tc_call(0x800da4b8u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        (void)tc_call(0x800da6bcu, &a);
    }
    return;
}
