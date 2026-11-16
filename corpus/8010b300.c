#include "tc_rt.h"

void fn_8010b300(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x18u) + 0x10u), &a);
    a.r[0] = (u32)param_1 + 0xe0u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0xe8u) + 0x10u), &a);
    a.r[0] = (u32)param_1 + 0x74u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x7cu) + 0x10u), &a);
    a.r[0] = (u32)param_1 + 0x1940u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x1948u) + 0x10u), &a);
    a.r[0] = (u32)param_1 + 0x1a30u;
    (void)tc_call(0x801cba1cu, &a);
    a.r[0] = (u32)param_1 + 0x19b8u;
    (void)tc_call(0x80162970u, &a);
    a.r[0] = (u32)param_1 + 0x2290u;
    (void)tc_call(0x801cabf0u, &a);
    wr32((u32)param_1 + 0x22a0u, 0u);
    return;
}
