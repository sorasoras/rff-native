#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80078e80(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_6 + 4u);
    f0 = (f64)rdf32(0x80572798u);
    wr32(0x817fdfb4u, rd32(param_6));
    wr32(0x817fdfb8u, r0);
    r0 = rd32(param_6 + 8u);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f0);
    wrf32d(0x817fdfc0u, f0);
    wr32(0x817fdfbcu, r0);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = param_5;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x802343a4u, &a);
    f4 = (f64)rdf32(0x817fdfb8u);
    f5 = (f64)rdf32(0x817fdfb4u);
    f3 = (f64)rdf32(0x817fdfbcu);
    f1 = (f64)rdf32(param_4 + 8u);
    f2 = ppc_fmadds((f64)rdf32(param_4), f5, (f64)(f32)((f64)rdf32(param_4 + 4u) * f4));
    f0 = (f64)rdf32(0x805727a0u);
    wrf32d(0x817fdfc0u, f5);
    f31 = ppc_fmadds(f1, f3, f2);
    wrf32d(0x817fdfc4u, f4);
    wrf32d(0x817fdfc8u, f3);
    f1 = (f64)(f32)ppc_fabs(f31);
    if ((f1 < f0) || (f1 == f0)) {
        return;
    }
    r0 = rd32(param_5 + 4u);
    wr32(0x817fdfa8u, rd32(param_5));
    wr32(0x817fdfacu, r0);
    wr32(0x817fdfb0u, rd32(param_5 + 8u));
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_3;
    a.r[2] = 0x817fdfa8u;
    (void)tc_call(0x802343a4u, &a);
    f4 = (f64)rdf32(0x817fdfacu);
    f5 = (f64)rdf32(0x817fdfa8u);
    f3 = (f64)rdf32(0x817fdfb0u);
    f1 = (f64)rdf32(param_4 + 8u);
    f2 = ppc_fmadds((f64)rdf32(param_4), f5, (f64)(f32)((f64)rdf32(param_4 + 4u) * f4));
    f0 = (f64)rdf32(0x805727b4u);
    wrf32d(0x817fdfc0u, f5);
    f1 = ppc_fmadds(f1, f3, f2);
    wrf32d(0x817fdfc4u, f4);
    wrf32d(0x817fdfc8u, f3);
    f1 = (f64)(f32)px_fdiv(f1, f31);
    f31 = -f1;
    if (f31 < f0 || (f64)rdf32(0x805727a8u) < f31) {
    } else {
        a.f[0] = f31;
        a.r[0] = param_1;
        a.r[1] = param_5;
        a.r[2] = param_6;
        (void)tc_call(0x8004c6dcu, &a);
        if (param_2 != 0u) {
            wrf32d(param_2, f31);
        }
    }
    return;
}
