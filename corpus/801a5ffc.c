#include "tc_rt.h"

void fn_801a5ffc(f64 param_1, s32 param_2)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x805708f8u);
    if (((param_1 > f0) || (param_1 == f0)) && rd32((u32)param_2 + 0xf40u) == 0u) {
        wr32((u32)param_2 + 0xf40u, 1u);
        a.r[0] = (u32)param_2;
        a.r[1] = 9u;
        (void)tc_call(0x801a2fdcu, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xfa0u;
        (void)tc_call(0x8010a74cu, &a);
    }
    return;
}
