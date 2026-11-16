#include "tc_rt.h"

void fn_800bfac4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_1 + 0xa48u);
    if (r4 != 0u) {
        r3 = rd32(r4 + 0x74u);
        r0 = 0u;
        if ((s32)r3 >= 337 && (s32)r3 <= 352) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x7eu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = 0x1fu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        }
        r4 = rd32(param_1 + 0x15c4u);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            f1 = tc_callf(0x801206f4u, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x41cu;
        a.r[2] = r3;
        r3 = tc_call(0x8010a794u, &a);
        wr32(param_1 + 0x15c4u, r3);
    }
    return;
}
