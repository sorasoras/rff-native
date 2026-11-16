#include "tc_rt.h"

void fn_80034c44(f64 param_1, s32 param_2, u32 param_3)
{
    TcArgs a = {0};
    if ((u32)rd16(param_3) != 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = param_3;
        a.f[0] = param_1;
        (void)tc_call(rd32(param_3 + 0x14u), &a);
    }
    if ((u32)rd16(param_3 + 0x18u) != 0u) {
        a.r[0] = (u32)param_2 + 8u;
        a.r[1] = param_3 + 0x18u;
        a.f[0] = param_1;
        (void)tc_call(rd32(param_3 + 0x2cu), &a);
        wrf32d((u32)param_2 + 8u, (f64)(f32)((f64)rdf32((u32)param_2 + 8u) * (f64)rdf32(0x80571e78u)));
    }
    if ((u32)rd16(param_3 + 0x30u) != 0u) {
        a.r[0] = (u32)param_2 + 4u;
        a.r[1] = param_3 + 0x30u;
        a.f[0] = param_1;
        (void)tc_call(rd32(param_3 + 0x44u), &a);
    }
    return;
}
