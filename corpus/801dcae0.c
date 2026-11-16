#include "tc_rt.h"

void fn_801dcae0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x801dcaccu, &a);
    if (r3 != 0u) {
        f1 = (f64)rdf32(0x805761f0u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(param_1 + 8u) && f1 == (f64)rdf32(param_1 + 0xcu)) && f1 == (f64)rdf32(param_1 + 0x10u)) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r5 = rd32(param_1 + 4u);
            r0 = rd32(r5 + 4u);
            wr32(0x817fdfe4u, rd32(r5));
            wr32(0x817fdfe8u, r0);
            wr32(0x817fdfecu, rd32(r5 + 8u));
            a.r[0] = rd32(param_1);
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x8015811cu, &a);
        } else {
            r0 = rd32(param_1 + 0xcu);
            wr32(0x817fdfd8u, rd32(param_1 + 8u));
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32(param_1 + 0x10u));
            a.r[0] = rd32(param_1);
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x801581ccu, &a);
        }
    }
    return;
}
