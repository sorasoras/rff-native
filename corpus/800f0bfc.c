#include "tc_rt.h"

void fn_800f0bfc(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r9 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r7 = rd32((u32)param_2 + 0x18u);
    r0 = rd32(r7 + 0xcf8u);
    wr32(0x817fdfe4u, rd32(r7 + 0xcf4u));
    wr32(0x817fdfe8u, r0);
    wr32(0x817fdfecu, rd32(r7 + 0xcfcu));
    a.r[0] = 0x817fdfe4u;
    a.r[1] = param_3;
    a.r[2] = 0x817fdfe4u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfe4u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 > (f64)rdf32(0x80573aecu)) {
        f1 = (f64)rdf32(0x80573ad8u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfe4u) && f1 == (f64)rdf32(0x817fdfe8u)) && f1 == (f64)rdf32(0x817fdfecu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfe4u;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x802343e4u, &a);
        }
        r31 = rd32((u32)param_2 + 0x18u);
        a.r[0] = r31;
        a.r[1] = 1u;
        r3 = tc_call(0x800b1048u, &a);
        if (r3 != 0u) {
            f1 = (f64)(f32)((f64)rdf32(r31 + 0xd50u) * (f64)rdf32(0x80573afcu));
        } else {
            f1 = (f64)rdf32(r31 + 0xd50u);
        }
        a.f[0] = f1;
        a.r[0] = 0x817fdfe4u;
        a.r[1] = 0x817fdfe4u;
        (void)tc_call(0x802343c8u, &a);
    }
    r9 = rd32((u32)param_2 + 0x18u);
    r6 = rd32(0x817fdfe4u);
    r7 = rd32(r9 + 0xd1cu);
    r0 = rd32(0x817fdfe8u);
    wr32(0x817fdfd8u, rd32(r9 + 0xd18u));
    wr32(0x817fdfdcu, r7);
    wr32(0x817fdfe0u, rd32(r9 + 0xd20u));
    wr32(param_1, r6);
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(0x817fdfecu));
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    return;
}
