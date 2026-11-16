#include "tc_rt.h"

void fn_800f1874(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r5 = rd32((u32)param_2 + 0x18u);
    r0 = rd32(r5 + 0xd1cu);
    wr32(0x817fdfd8u, rd32(r5 + 0xd18u));
    wr32(0x817fdfdcu, r0);
    wr32(0x817fdfe0u, rd32(r5 + 0xd20u));
    a.r[0] = 0x817fdfd8u;
    f1 = tc_callf(0x80234440u, &a);
    f31 = f1;
    if (f1 > (f64)rdf32(0x80573aecu)) {
        f1 = (f64)rdf32(0x80573ad8u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfd8u) && f1 == (f64)rdf32(0x817fdfdcu)) && f1 == (f64)rdf32(0x817fdfe0u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x802343e4u, &a);
        }
        f1 = (f64)rdf32(0x80573b40u);
        if (f31 > f1) {
            a.f[0] = f1;
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x802343c8u, &a);
        } else {
            a.f[0] = -f31;
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x802343c8u, &a);
        }
        r0 = rd32(0x817fdfdcu);
        wr32(param_1, rd32(0x817fdfd8u));
        wr32(param_1 + 4u, r0);
        wr32(param_1 + 8u, rd32(0x817fdfe0u));
    } else {
        f0 = (f64)rdf32(0x80573ad8u);
        wrf32d(param_1, f0);
        wrf32d(param_1 + 4u, f0);
        wrf32d(param_1 + 8u, f0);
    }
    return;
}
