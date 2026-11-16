#include "tc_rt.h"

s32 fn_80186588(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800da160u, &a);
    r31 = r3;
    wrf32d((u32)param_1 + 0x824u, (f64)rdf32(0x805751a0u));
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x78u);
        a.r[1] = 1u;
        r3 = tc_call(0x80031cf8u, &a);
        if (r3 != 0u) {
            r4 = rd32(r3 + 0x40u);
            if (r4 != 0u) {
                r3 = rd32(r4 + 0x20u) + 0x40u;
            } else {
                r3 = rd32(r3 + 0x54u);
            }
            wrf32d((u32)param_1 + 0x824u, (f64)(f32)((f64)rdf32(r3 + 0xcu) * (f64)rdf32(0x805751a4u)));
        }
    }
    return (s32)r31;
}
