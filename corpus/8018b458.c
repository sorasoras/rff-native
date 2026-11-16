#include "tc_rt.h"

void fn_8018b458(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = 0u;
    if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
        r3 = 1u;
    }
    if (r3 != 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x80070be4u, &a);
        a.r[0] = rd32(param_1 + 0x70u);
        a.r[1] = param_1 + 0x40u;
        f1 = tc_callf(0x800315c0u, &a);
        r4 = tc_lastr4();
        if ((u32)((s32)((rd32(param_1 + 0x80u) << 1u) & 0xc0000000u) >> 31) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x60u), &a);
            a.f[0] = (f64)rdf32(param_1 + 0x74u);
            a.r[0] = rd32(param_1 + 0x70u);
            (void)tc_call(0x80040728u, &a);
        }
    }
    return;
}
