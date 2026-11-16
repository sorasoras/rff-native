#include "tc_rt.h"

f64 fn_8010f7f8(void)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = (f64)(f32)((f64)rdf32(0x80574120u) + (f64)rdf32(r3 + 4u));
    } else {
        f1 = (f64)rdf32(0x80574124u);
    }
    return f1;
}
