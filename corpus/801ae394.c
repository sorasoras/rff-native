#include "tc_rt.h"

void fn_801ae394(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80469958u;
    a.r[1] = 0xb4u;
    a.r[2] = 1u;
    r3 = tc_call(0x80057fd8u, &a);
    wr32((u32)param_1 + 0x74u, r3);
    a.r[0] = 0x80469958u;
    a.r[1] = 0xb4u;
    a.r[2] = 1u;
    r3 = tc_call(0x80058314u, &a);
    wr32((u32)param_1 + 0x78u, r3);
    a.r[0] = 0x80469958u;
    a.r[1] = rd32((u32)param_1 + 0x74u);
    a.r[2] = r3;
    a.r[3] = 0u;
    r3 = tc_call(0x8005854cu, &a);
    wr32((u32)param_1 + 0x70u, r3);
    r4 = rd32((u32)param_1 + 0x74u);
    f1 = (f64)rdf32(0x80575af4u);
    wrf32d((u32)param_1 + 0x80u, (f64)rdf32(rd32(r4 + 0xcu) + 0x14u));
    f0 = (f64)rdf32(rd32(r4 + 0xcu) + 0x14u);
    wr32((u32)param_1 + 0x84u, (((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) ^ 1u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801ae440u, &a);
    return;
}
