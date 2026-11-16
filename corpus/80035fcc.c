#include "tc_rt.h"

void fn_80035fcc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    f29 = (f64)rdf32(0x80571ee0u);
    wr32(0x817fdfbcu, 0u);
    f30 = rdf64(0x80571ee8u);
    wr32(0x817fdfb8u, 0u);
    f31 = rdf64(0x80571ef0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb0u, 0u);
    r6 = rd32(0x80570fc0u);
    wr32(0x817fdfa0u, 0x43300000u);
    wr32(0x817fdfa4u, (u32)rd16(r6 + 0x12u));
    f0 = rdf64(0x817fdfa0u);
    wrf32d(param_2, f29);
    f28 = (f64)(f32)(f0 - f30);
    wrf32d(param_3, f29);
    while ((u32)(s8)rd8(r3) != 0u) {
        wr32(0x817fdf98u, 0u);
        if ((u32)rd8(r3) == 0xau) {
            if ((f64)rdf32(param_2) < f29) {
                wrf32d(param_2, f29);
            }
            r4 = rd32(0x80570fc0u);
            r3 = r3 + 1u;
            wr32(0x817fdfa0u, 0x43300000u);
            f29 = (f64)rdf32(0x80571ee0u);
            wr32(0x817fdfa4u, (u32)rd16(r4 + 0x12u));
            f28 = (f64)(f32)(f28 + (f64)(f32)(rdf64(0x817fdfa0u) - f30));
        } else {
            a.r[0] = r3;
            a.r[1] = 0x817fdf98u;
            r3 = tc_call(0x8022c1f8u, &a);
            r0 = rd32(0x817fdf98u);
            wr32(0x817fdfa0u, 0x43300000u);
            r0 = r0 ^ 0x80000000u;
            wr32(0x817fdfa4u, r0);
            f29 = (f64)(f32)(f29 + (f64)(f32)(rdf64(0x817fdfa0u) - f31));
        }
    }
    if ((f64)rdf32(param_2) < f29) {
        wrf32d(param_2, f29);
    }
    if ((f64)rdf32(param_3) < f28) {
        wrf32d(param_3, f28);
    }
    return;
}
