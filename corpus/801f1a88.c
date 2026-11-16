#include "tc_rt.h"

void fn_801f1a88(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8003c9c8u, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfecu, r3);
    r3 = rd32((u32)param_1 + 0x78u);
    wr32(0x817fdfe8u, 0x43300000u);
    r3 = rd32(r3 + 0xcu);
    f2 = (f64)rdf32(r3 + 0x14u);
    f1 = (f64)rdf32(0x80576604u);
    f3 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - rdf64(0x80576608u)) * (f64)rdf32(0x80576600u));
    if (f2 > f1) {
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x74u) + f3);
        wrf32d((u32)param_1 + 0x74u, f0);
        if (f0 > f2) {
            r0 = rd32((u32)param_1 + 0x80u);
            wrf32d((u32)param_1 + 0x74u, f1);
            r0 = r0 & 0xbfffffffu;
            wr32((u32)param_1 + 0x80u, r0);
        }
    }
    return;
}
