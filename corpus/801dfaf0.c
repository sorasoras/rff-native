#include "tc_rt.h"

void fn_801dfaf0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
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
    wr32(0x817fdfbcu, 0u);
    if (rd32(param_1 + 0xd58u) != 0u) {
        f30 = (f64)rdf32(0x80576204u);
        f29 = (f64)rdf32(0x80576220u);
        f28 = (f64)rdf32(0x8057628cu);
        a.r[0] = param_1;
        f1 = tc_callf(0x801dff78u, &a);
        f31 = f1;
        a.r[0] = 0x817fdfacu;
        a.r[1] = param_1;
        (void)tc_call(0x801dfec0u, &a);
        if (f31 < f29) {
            a.f[0] = (f64)rdf32(0x80576208u);
            a.r[0] = 0x817fdfacu;
            a.r[1] = 0x817fdfacu;
            (void)tc_call(0x802343c8u, &a);
        } else {
            if (f31 < f28) {
                return;
            }
        }
        r0 = rd32(param_1 + 0xd4cu);
        r6 = rd32(0x817fdfacu);
        wr32(0x817fdfa0u, rd32(param_1 + 0xd48u));
        r5 = rd32(0x817fdfb0u);
        wr32(0x817fdfa4u, r0);
        r0 = rd32(0x817fdfb4u);
        wr32(0x817fdfa8u, rd32(param_1 + 0xd50u));
        wr32(0x817fdf88u, r6);
        wr32(0x817fdf8cu, r5);
        wr32(0x817fdf90u, r0);
        a.f[0] = f30;
        a.r[0] = 0x817fdf88u;
        a.r[1] = 0x817fdf88u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = 0x817fdf88u;
        a.r[2] = 0x817fdfa0u;
        (void)tc_call(0x80234380u, &a);
        a.f[0] = (f64)rdf32(0x80576290u);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = 0x817fdfa0u;
        f1 = tc_callf(0x802343c8u, &a);
        wrf32d(param_1 + 0xd48u, (f64)rdf32(0x817fdfa0u));
        wrf32d(param_1 + 0xd4cu, (f64)rdf32(0x817fdfa4u));
        wrf32d(param_1 + 0xd50u, (f64)rdf32(0x817fdfa8u));
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdf94u, rd32(r3));
        wr32(0x817fdf98u, r0);
        wr32(0x817fdf9cu, rd32(r3 + 8u));
        a.r[0] = 0x817fdf94u;
        a.r[1] = 0x817fdfa0u;
        a.r[2] = 0x817fdf94u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdf94u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    }
    return;
}
