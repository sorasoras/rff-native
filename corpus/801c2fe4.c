#include "tc_rt.h"

void fn_801c2fe4(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcfcu;
    (void)tc_call(0x801c374cu, &a);
    a.f[0] = (f64)rdf32((u32)param_1 + 0x10cu);
    a.r[0] = (u32)param_1 + 0xf04u;
    (void)tc_call(0x801c25ccu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007e314u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801c2ea4u, &a);
    r4 = rd32((u32)param_1 + 0xf00u);
    if ((s32)r4 > 0) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r4;
        (void)tc_call(0x8010a75cu, &a);
        wr32((u32)param_1 + 0xf00u, 0xffffffffu);
    }
    return;
}
