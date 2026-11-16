#include "tc_rt.h"

void fn_80096704(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, f64 param_f1)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f4 = (f64)rdf32(param_3 + 4u);
    f3 = (f64)rdf32(param_3 + 8u);
    f2 = (f64)rdf32(param_4);
    f1 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    wrf32d(param_1 + 0xe4u, (f64)rdf32(param_3));
    r7 = rd32(param_3);
    wrf32d(param_1 + 0xe8u, f4);
    r6 = rd32(param_3 + 4u);
    wrf32d(param_1 + 0xecu, f3);
    r0 = rd32(param_3 + 8u);
    wrf32d(param_1 + 0xf0u, f2);
    wrf32d(param_1 + 0xf4u, f1);
    wrf32d(param_1 + 0xf8u, f0);
    wr32(0x817fdfa4u, r7);
    wr32(0x817fdfa8u, r6);
    wr32(0x817fdfacu, r0);
    a.r[0] = 0x817fdfa4u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfa4u;
    (void)tc_call(0x80234380u, &a);
    r5 = rd32(0x817fdfa8u);
    r0 = rd32(0x817fdfacu);
    wr32(0x817fdfbcu, rd32(0x817fdfa4u));
    f1 = (f64)rdf32(0x80572a80u);
    wr32(0x817fdfc0u, r5);
    wr32(0x817fdfc4u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfbcu;
    a.r[1] = 0x817fdfbcu;
    (void)tc_call(0x802343c8u, &a);
    r6 = rd32(param_4 + 4u);
    r0 = rd32(param_4 + 8u);
    wr32(0x817fdf98u, rd32(param_4));
    wr32(0x817fdf9cu, r6);
    wr32(0x817fdfa0u, r0);
    a.r[0] = 0x817fdf98u;
    a.r[1] = param_3;
    a.r[2] = 0x817fdf98u;
    (void)tc_call(0x802343a4u, &a);
    r5 = rd32(0x817fdf9cu);
    r0 = rd32(0x817fdfa0u);
    wr32(0x817fdfb0u, rd32(0x817fdf98u));
    f1 = (f64)rdf32(0x80572a80u);
    wr32(0x817fdfb4u, r5);
    wr32(0x817fdfb8u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfb0u;
    a.r[1] = 0x817fdfb0u;
    (void)tc_call(0x802343c8u, &a);
    f0 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdfb8u));
    f2 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdfb0u));
    if (!(f2 > f0)) {
        f2 = f0;
    }
    f1 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdfb4u));
    if (!(f1 > f2)) {
        f0 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdfb8u));
        f1 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdfb0u));
        if (!(f1 > f0)) {
            f1 = f0;
        }
    }
    a.f[0] = f1;
    a.f[1] = param_f1;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfbcu;
    a.r[3] = param_5;
    a.r[4] = param_7;
    a.r[5] = param_6;
    (void)tc_call(0x8006f570u, &a);
    wr32(param_1 + 0x38u, 1u);
    return;
}
