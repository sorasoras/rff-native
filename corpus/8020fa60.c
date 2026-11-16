#include "tc_rt.h"

void fn_8020fa60(s32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    if ((u32)((s32)rd32((u32)param_1 + 0x74u) >> 31) != 0u) {
        r31 = rd32((u32)param_1 + 0x78u);
        if (r31 != 0u) {
            a.f[0] = (f64)rdf32((u32)param_1 + 0x17cu);
            a.r[0] = r31;
            (void)tc_call(0x80040728u, &a);
            a.r[0] = r31;
            a.r[1] = param_2;
            (void)tc_call(0x800318a8u, &a);
        }
    }
    return;
}
