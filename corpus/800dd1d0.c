#include "tc_rt.h"

void fn_800dd1d0(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x18u;
    a.r[1] = rd32(param_5);
    r3 = tc_call(0x8014d88cu, &a);
    r30 = r3;
    if (r3 != 0u) {
        wrf32d(r3, (f64)rdf32(0x80573a80u));
        wrf32d(r3 + 4u, param_2);
        wr32(r3 + 8u, 0x80356a08u);
        wrf32d(r3 + 0xcu, param_2);
        wrf32d(r3 + 0x10u, (f64)(f32)(param_2 - param_1));
        wrf32d(r3 + 0x14u, (f64)(f32)(param_3 - param_2));
    }
    wr32(param_5 + (((u32)param_6 << 2u) & 0xfffffffcu) + 4u, r3);
    a.f[0] = param_1;
    a.f[1] = param_3;
    a.r[0] = param_5;
    (void)tc_call(0x800dd2ccu, &a);
    wr32(param_4, 0u);
    wr32(param_4 + 4u, 0x80356a38u);
    wr32(param_4 + 8u, r30);
    return;
}
