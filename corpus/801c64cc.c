#include "tc_rt.h"

void fn_801c64cc(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_2 + 0xd34u, 0u);
    a.r[0] = param_2;
    f1 = tc_callf(0x801c2dacu, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x1f4u), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575d40u);
    f1 = tc_callf(rd32(rd32(param_2) + 0x54u), &a);
    wr32((u32)param_1 + 8u, 0u);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    a.f[0] = (f64)rdf32(0x80575cd8u);
    a.r[0] = 0x25u;
    a.r[1] = r3;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x800d7768u, &a);
    wr32((u32)param_1 + 8u, r3);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2465u;
    (void)tc_call(0x8010a75cu, &a);
    wr32((u32)param_1 + 0xcu, 0x96u);
    return;
}
