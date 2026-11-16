#include "tc_rt.h"

void fn_800cd330(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
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
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    f30 = (f64)rdf32(0x80572f78u);
    r31 = param_2;
    f29 = f30;
    f28 = f30;
    f31 = f30;
    while ((u32)rd16(r31) != 0u) {
        wrf32d(0x817fdf9cu, f31);
        wrf32d(0x817fdf98u, (f64)rdf32(param_1 + 0x30u));
        a.r[0] = param_1;
        a.r[1] = r31;
        a.r[2] = 0xffffffffu;
        a.r[3] = 0x817fdf9cu;
        a.r[4] = 0x817fdf98u;
        r3 = tc_call(0x800cd060u, &a);
        r31 = r31 + ((r3 << 1u) & 0xfffffffeu);
        r0 = (u32)rd16(r31);
        if (r0 != 0u) {
            r31 = r31 + 2u;
            for (;;) {
                r0 = (u32)rd16(r31);
                if (r0 != 0xau) break;
                r31 = r31 + 2u;
                f29 = (f64)(f32)(f29 + (f64)(f32)((f64)rdf32(param_1 + 0x40u) + (f64)rdf32(param_1 + 0x30u)));
            }
        }
        f0 = (f64)rdf32(0x817fdf9cu);
        if (!(f30 > f0)) {
            f30 = f0;
        }
        f29 = (f64)(f32)(f29 + (f64)rdf32(0x817fdf98u));
        if (r0 != 0u) {
            f29 = (f64)(f32)(f29 + (f64)rdf32(param_1 + 0x40u));
        }
        f28 = (f64)(f32)(f28 + (f64)rdf32(0x817fdf9cu));
    }
    if (param_5 != 0u) {
        wrf32d(param_5, f28);
        r3 = tc_call(0x800cd5c8u, &a);
        if (r3 != 0u) {
            wrf32d(param_5, (f64)(f32)((f64)rdf32(param_5) * (f64)rdf32(0x8057300cu)));
        }
    }
    if (param_3 != 0u) {
        wrf32d(param_3, f30);
        r3 = tc_call(0x800cd5c8u, &a);
        if (r3 != 0u) {
            wrf32d(param_3, (f64)(f32)((f64)rdf32(param_3) * (f64)rdf32(0x8057300cu)));
        }
    }
    if (param_4 != 0u) {
        wrf32d(param_4, f29);
    }
    return;
}
