#include "tc_rt.h"

u32 fn_800ca994(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, u32 param_r6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    f5 = (f64)rdf32(0x80572f6cu);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80572f70u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    f3 = (f64)rdf32(0x804890ccu);
    f4 = (f64)rdf32(0x804890c8u);
    wrf32d(0x817fdfbcu, f5);
    f2 = (f64)rdf32(0x804890d0u);
    wrf32d(0x817fdfa4u, f5);
    wrf32d(0x817fdfc4u, f5);
    wrf32d(0x817fdf98u, f5);
    wrf32d(0x817fdf94u, f5);
    wrf32d(0x817fdf90u, f5);
    wrf32d(0x817fdfd0u, f5);
    wrf32d(0x817fdfccu, f5);
    wrf32d(0x817fdfc8u, f5);
    wr32(0x817fdf88u, 0u);
    wrf32d(0x817fdf9cu, f4);
    wrf32d(0x817fdfa0u, f3);
    wrf32d(0x817fdfa4u, f2);
    wrf32d(0x817fdfbcu, f4);
    wrf32d(0x817fdfc0u, f3);
    wrf32d(0x817fdfc4u, f2);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdfe0u, f5);
    wrf32d(0x817fdfdcu, f5);
    wrf32d(0x817fdfd8u, f5);
    wrf32d(0x817fdfd4u, f5);
    wrf32d(0x817fdfb4u, f5);
    wrf32d(0x817fdfb0u, f5);
    wrf32d(0x817fdfacu, f5);
    wrf32d(0x817fdfa8u, f5);
    a.f[0] = param_f1;
    a.r[0] = param_1;
    a.r[1] = 0x817fdf88u;
    a.r[2] = param_3;
    a.r[3] = param_r6;
    r3 = tc_call(0x800cb218u, &a);
    if (r3 != 0u) {
        r6 = rd32(0x817fdf94u);
        r0 = rd32(0x817fdf98u);
        wr32(0x817fdf78u, rd32(0x817fdf90u));
        wr32(0x817fdf7cu, r6);
        wr32(0x817fdf80u, r0);
        a.r[0] = 0x817fdf78u;
        a.r[1] = param_3;
        a.r[2] = 0x817fdf78u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdf78u;
        f1 = tc_callf(0x80234428u, &a);
        wrf32d(0x817fdf8cu, f1);
        if (rd32(param_2) != 0u) {
            f1 = (f64)(f32)f1;
            if (!(f1 < (f64)rdf32(param_2 + 4u))) {
                r3 = 0u;
                return r3;
            }
        }
        r3 = 1u;
        wr32(param_2, rd32(0x817fdf88u));
        wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf8cu));
        r4 = rd32(0x817fdf94u);
        wr32(param_2 + 8u, rd32(0x817fdf90u));
        wr32(param_2 + 0xcu, r4);
        wr32(param_2 + 0x10u, rd32(0x817fdf98u));
        r4 = rd32(0x817fdfa0u);
        wr32(param_2 + 0x14u, rd32(0x817fdf9cu));
        wr32(param_2 + 0x18u, r4);
        wr32(param_2 + 0x1cu, rd32(0x817fdfa4u));
        r4 = rd32(0x817fdfacu);
        wr32(param_2 + 0x20u, rd32(0x817fdfa8u));
        wr32(param_2 + 0x24u, r4);
        r4 = rd32(0x817fdfb4u);
        wr32(param_2 + 0x28u, rd32(0x817fdfb0u));
        wr32(param_2 + 0x2cu, r4);
        wr16(param_2 + 0x30u, rd16(0x817fdfb8u));
        wr16(param_2 + 0x32u, rd16(0x817fdfbau));
        r4 = rd32(0x817fdfc0u);
        wr32(param_2 + 0x34u, rd32(0x817fdfbcu));
        wr32(param_2 + 0x38u, r4);
        wr32(param_2 + 0x3cu, rd32(0x817fdfc4u));
        r4 = rd32(0x817fdfccu);
        wr32(param_2 + 0x40u, rd32(0x817fdfc8u));
        wr32(param_2 + 0x44u, r4);
        wr32(param_2 + 0x48u, rd32(0x817fdfd0u));
        r4 = rd32(0x817fdfd8u);
        wr32(param_2 + 0x4cu, rd32(0x817fdfd4u));
        wr32(param_2 + 0x50u, r4);
        r4 = rd32(0x817fdfe0u);
        wr32(param_2 + 0x54u, rd32(0x817fdfdcu));
        wr32(param_2 + 0x58u, r4);
        wr32(param_2 + 0x5cu, rd32(0x817fdfe4u));
        wr32(param_2 + 0x60u, rd32(0x817fdfe8u));
        wr32(param_2 + 0x64u, rd32(0x817fdfecu));
        wr32(param_2, 2u);
        return r3;
    }
    r3 = 0u;
    return r3;
}
