#include "tc_rt.h"

void fn_80158364(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80321010u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80321010u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(r3 + 0xcu);
        }
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x803111f8u, &a);
            f1 = (f64)rdf32(r3 + 0x90u);
            wrf32d(0x817fdfecu, (f64)rdf32(r3 + 0x94u));
            wrf32d(0x817fdff0u, (f64)rdf32(r3 + 0x98u));
            wrf32d(param_2, f1);
            wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfecu));
            wrf32d(param_2 + 8u, (f64)rdf32(0x817fdff0u));
        }
    }
    return;
}
