#include "tc_rt.h"

u32 fn_802220c4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    c0lt = param_2 < 381;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe0u, 0x43300000u);
    wr32(0x817fdfe8u, 0x43300000u);
    if ((u32)param_2 != 0x17du) {
        if (!c0lt) {
            r3 = 2u;
            return r3;
        }
        if (param_2 < 380) {
            r3 = 2u;
            return r3;
        }
        a.r[0] = param_1;
        r3 = tc_call(0x802223f8u, &a);
        r31 = r3;
        if (r3 == 0xffffffffu) {
            r3 = 0u;
            return r3;
        }
        r4 = rd32(param_3);
        r0 = rd32(0x80471a18u);
        wr32(0x817fdfe4u, rd32(param_3 + 4u) ^ 0x80000000u);
        r4 = r4 ^ 0x80000000u;
        r0 = r0 * 0x4150u;
        f0 = (f64)rdf32(0x80576a50u);
        wr32(0x817fdfecu, r4);
        f3 = rdf64(0x80576a58u);
        f1 = rdf64(0x817fdfe8u);
        f2 = (f64)(f32)(rdf64(0x817fdfe0u) - f3);
        wrf32d(0x817fdfd8u, f0);
        f1 = (f64)(f32)(f1 - f3);
        wrf32d(0x817fdfdcu, f2);
        wrf32d(0x817fdfd4u, f1);
        a.f[0] = f1;
        a.f[1] = f2;
        a.r[0] = r0 - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        wrf32d(0x817fdfd8u, f1);
        r6 = rd32(0x817fdfd8u);
        r0 = rd32(0x817fdfdcu);
        wr32(0x817fdfc8u, rd32(0x817fdfd4u));
        f3 = rdf64(0x80576a58u);
        wr32(0x817fdfccu, r6);
        wr32(0x817fdfd0u, r0);
        r6 = rd32(param_3 + 0xcu);
        r0 = rd32(param_3 + 0x10u);
        wr32(0x817fdfe4u, rd32(param_3 + 8u) ^ 0x80000000u);
        r6 = r6 ^ 0x80000000u;
        r0 = r0 ^ 0x80000000u;
        f0 = rdf64(0x817fdfe0u);
        wr32(0x817fdfecu, r6);
        f1 = (f64)(f32)(f0 - f3);
        wr32(0x817fdfe4u, r0);
        f2 = (f64)(f32)(rdf64(0x817fdfe8u) - f3);
        f3 = (f64)(f32)(rdf64(0x817fdfe0u) - f3);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x80222218u, &a);
        r3 = 0u;
        return r3;
    }
    a.r[0] = param_1;
    (void)tc_call(0x8022238cu, &a);
    r3 = 0u;
    return r3;
}
