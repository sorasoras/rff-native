#include "tc_rt.h"

u32 fn_800610dc(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xf4u);
    f1 = tc_callf(0x8004bc54u, &a);
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0xcu) + 0x10u), &a);
    a.r[0] = (u32)param_1 + 0x80u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x80u) + 0x10u), &a);
    a.r[0] = (u32)param_1 + 0xf8u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0xf8u) + 0x10u), &a);
    return 1u;
}
