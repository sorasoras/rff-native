#include "tc_rt.h"

void fn_800fa23c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0xca4u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xca8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcacu);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcb0u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcb4u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcb8u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcbcu);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcc0u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0xcc4u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x1cu), &a);
    return;
}
