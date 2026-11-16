#include "tc_rt.h"

void fn_800b3b64(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32((u32)param_1 + 0xfcu);
        a.r[2] = rd32((u32)param_1 + 0x100u);
        r3 = tc_call(0x800590b4u, &a);
        a.f[0] = (f64)rdf32(0x80572bf8u);
        a.r[0] = rd32((u32)param_1 + 0x1668u);
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x80035740u, &a);
        wrf32d(rd32((u32)param_1 + 0x1668u) + 0x58u, (f64)rdf32(0x80572c00u));
        wrf32d(rd32((u32)param_1 + 0x1668u) + 0x54u, (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u));
        a.r[0] = rd32((u32)param_1 + 0x1668u);
        a.r[1] = 0u;
        (void)tc_call(0x800355acu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x1396u;
        (void)tc_call(0x800aef78u, &a);
    }
    f0 = (f64)rdf32(0x80572bf8u);
    wr32((u32)param_1 + 0xea0u, (u32)param_2);
    wrf32d((u32)param_1 + 0xea4u, f0);
    wr32((u32)param_1 + 0xccu, (u32)param_2);
    return;
}
