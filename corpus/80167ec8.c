#include "tc_rt.h"

void fn_80167ec8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    f1 = tc_callf(0x8016ba5cu, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x140u), &a);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = param_2;
    a.r[2] = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    (void)tc_call(0x800b5e28u, &a);
    r0 = 0u;
    if (((f64)rdf32(0x817fdfe4u) != (f64)rdf32(param_2 + 0xcf4u) || (f64)rdf32(0x817fdfe8u) != (f64)rdf32(param_2 + 0xcf8u)) || (f64)rdf32(0x817fdfecu) != (f64)rdf32(param_2 + 0xcfcu)) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r0 = rd32(param_2 + 0xcf8u);
        wr32(0x817fdfd8u, rd32(param_2 + 0xcf4u));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32(param_2 + 0xcfcu));
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfd8u;
        f1 = tc_callf(0x80234440u, &a);
        f0 = (f64)rdf32(0x80574c00u);
        if ((f1 < f0) || (f1 == f0)) {
            (void)tc_call(0x80040b64u, &a);
            a.r[0] = param_2;
            a.r[1] = 0x27u;
            (void)tc_call(0x800b31a0u, &a);
        }
    }
    return;
}
