#include "tc_rt.h"

void fn_8030036c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
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
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0x817fdf68u;
    (void)tc_call(0x8023411cu, &a);
    a.r[0] = 0x817fdf68u;
    f1 = tc_callf(0x80234440u, &a);
    f25 = f1;
    f27 = (f64)rdf32(param_1 + 0x20u);
    f26 = (f64)rdf32(param_2 + 0x48u);
    f28 = (f64)rdf32(param_4 + 0xcu);
    f29 = (f64)rdf32(param_4 + 8u);
    f30 = (f64)rdf32(param_4 + 4u);
    f31 = (f64)rdf32(param_4);
    r3 = tc_call(0x802f08ccu, &a);
    a.r[0] = r3;
    r3 = tc_call(0x802f1090u, &a);
    c0lt = (s32)r3 < 3;
    if (r3 != 3u && c0lt) {
        c0lt = (s32)r3 < 0;
        if (r3 != 0u) {
            if (c0lt) {
                f0 = (f64)rdf32(0x80577700u);
                wrf32d(param_5, f0);
                wrf32d(param_6, f0);
                return;
            }
            a.f[0] = f26;
            a.f[1] = f25;
            a.f[2] = f27;
            a.f[3] = f30;
            a.f[4] = f29;
            a.f[5] = f28;
            a.r[0] = 0x817fdf68u;
            a.r[1] = param_5;
            a.r[2] = param_6;
            (void)tc_call(0x8030067cu, &a);
            return;
        }
        a.f[0] = f26;
        a.f[1] = f25;
        a.f[2] = f27;
        a.f[3] = f31;
        a.r[0] = 0x817fdf68u;
        a.r[1] = param_5;
        a.r[2] = param_6;
        (void)tc_call(0x803009b8u, &a);
        return;
    }
    f0 = (f64)rdf32(0x80577700u);
    wrf32d(param_5, f0);
    wrf32d(param_6, f0);
    return;
}
