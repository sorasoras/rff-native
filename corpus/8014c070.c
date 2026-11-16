#include "tc_rt.h"

void fn_8014c070(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r3 = rd32((u32)param_2 + 4u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = param_1;
    r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
    wr32(0x817fdfccu, r3);
    a.r[0] = 0x817fdfccu;
    r3 = tc_call(0x801496bcu, &a);
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x817fdfccu;
        r3 = tc_call(0x801496bcu, &a);
        wr32(0x817fdfc8u, r3);
        r30 = 0u;
        r31 = 0u;
        while ((s32)r30 < (s32)rd32((u32)param_2 + 0xcu)) {
            a.r[0] = 0x817fdfc8u;
            a.r[1] = r30;
            f1 = tc_callf(0x80149df0u, &a);
            wrf32d(rd32((u32)param_2 + 8u) + r31 + 0x20u, (f64)(f32)(param_1 * f1));
            a.r[0] = 0x817fdfd0u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = r30;
            (void)tc_call(0x80149dbcu, &a);
            r30 = r30 + 1u;
            r3 = rd32((u32)param_2 + 8u) + r31;
            r31 = r31 + 0xf0u;
            wrf32d(r3 + 8u, (f64)rdf32(0x817fdfd0u));
            wrf32d(r3 + 0xcu, (f64)rdf32(0x817fdfd4u));
            wrf32d(r3 + 0x10u, (f64)rdf32(0x817fdfd8u));
        }
    }
    return;
}
