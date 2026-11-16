#include "tc_rt.h"

void fn_80158040(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    f4 = (f64)rdf32(param_2 + 8u);
    wr32(0x817fdffcu, 0u);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfe4u, f1);
    wrf32d(0x817fdfe8u, f4);
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
            a.r[1] = 0x800d83acu;
            a.r[2] = 0x817fdfd8u;
            a.r[3] = 1u;
            (void)tc_call(0x80311200u, &a);
            a.r[0] = param_1;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x803111f8u, &a);
            f1 = (f64)rdf32(0x817fdfe4u);
            wrf32d(r3 + 0x9cu, (f64)rdf32(0x817fdfe0u));
            f0 = (f64)rdf32(0x817fdfe8u);
            wrf32d(r3 + 0xa0u, f1);
            wrf32d(r3 + 0xa4u, f0);
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
        }
    }
    return;
}
