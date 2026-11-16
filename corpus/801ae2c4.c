#include "tc_rt.h"

void fn_801ae2c4(s32 param_1, u32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = (u32)param_1 + 0x1cu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_2) + 0x1cu), &a);
    a.r[0] = param_2;
    a.r[1] = 0u;
    (void)tc_call(0x801c353cu, &a);
    r5 = rd32(param_2 + 0x9cu) & 0xfbffffffu;
    wr32(param_2 + 0xd34u, 1u);
    wr32(param_2 + 0x9cu, r5);
    wr32(param_2 + 0xd30u, 0u);
    wrf32d(param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d(param_2 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d(param_2 + 0x184u, (f64)rdf32(0x804890d0u));
    return;
}
