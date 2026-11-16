#include "tc_rt.h"

void fn_8017f7d8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x805706e0u) == 4u) {
        r4 = rd32(0x8057110cu);
        if (rd32(r4 + 0xcu) != 0xdu) {
            a.r[0] = param_1;
            a.r[1] = param_1 + 0x90u;
            (void)tc_call(0x8017fa0cu, &a);
            return;
        }
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r0 = rd32(param_1 + 0xa0u);
    wr32(0x817fdfe4u, rd32(param_1 + 0x9cu));
    wr32(0x817fdfe8u, r0);
    wr32(0x817fdfecu, rd32(param_1 + 0xa4u));
    a.r[0] = 0x817fdfe4u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfe4u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfe4u;
    f1 = tc_callf(0x80234428u, &a);
    f0 = (f64)rdf32(0x805750a8u);
    if ((f1 > f0) || (f1 == f0)) {
        f1 = (f64)rdf32(0x80575048u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfe4u) && f1 == (f64)rdf32(0x817fdfe8u)) && f1 == (f64)rdf32(0x817fdfecu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfe4u;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(param_1 + 0xa8u);
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfe4u;
        f1 = tc_callf(0x802343c8u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfd8u, rd32(r3));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x817fdfd8u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    }
    return;
}
