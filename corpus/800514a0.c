#include "tc_rt.h"

u32 fn_800514a0(u32 param_1, u32 param_r4)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572268u);
    f0 = (f64)rdf32(0x8057226cu);
    wr32(param_1, 0u);
    wrf32d(param_1 + 0xcu, f1);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 4u, f1);
    wrf32d(param_1 + 0x18u, f1);
    wrf32d(param_1 + 0x14u, f1);
    wrf32d(param_1 + 0x10u, f1);
    r0 = rd32(0x804890e4u);
    wr32(param_1 + 0x1cu, rd32(0x804890e0u));
    wr32(param_1 + 0x20u, r0);
    wr32(param_1 + 0x24u, rd32(0x804890e8u));
    wrf32d(param_1 + 0x30u, f1);
    wrf32d(param_1 + 0x2cu, f1);
    wrf32d(param_1 + 0x28u, f1);
    wrf32d(param_1 + 0x3cu, f1);
    wrf32d(param_1 + 0x38u, f1);
    wrf32d(param_1 + 0x34u, f1);
    wrf32d(param_1 + 0x40u, f0);
    wr32(param_1 + 0x44u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x80051534u, &a);
    return param_1;
}
