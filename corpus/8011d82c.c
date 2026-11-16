#include "tc_rt.h"

void fn_8011d82c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfd0u;
    a.r[1] = param_2;
    (void)tc_call(0x802e45a4u, &a);
    r31 = param_2 + 0x84u;
    wr32(0x817fdfc4u, 0u);
    f3 = (f64)rdf32(0x817fdfd0u);
    wr32(0x817fdfc8u, 0u);
    f2 = (f64)rdf32(0x817fdfd4u);
    wr32(0x817fdfb8u, 0u);
    f1 = (f64)rdf32(0x817fdfd8u);
    wr32(0x817fdfbcu, 0u);
    f0 = (f64)rdf32(0x817fdfdcu);
    wr32(0x817fdfccu, 0u);
    wrf32d(0x817fdfc4u, f3);
    wrf32d(0x817fdfc8u, f2);
    wr32(0x817fdfc0u, 0u);
    wrf32d(0x817fdfb8u, f1);
    wrf32d(0x817fdfbcu, f0);
    a.r[0] = 0x817fdfc4u;
    a.r[1] = r31;
    a.r[2] = 0x817fdfc4u;
    (void)tc_call(0x80042474u, &a);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = r31;
    a.r[2] = 0x817fdfb8u;
    (void)tc_call(0x80042474u, &a);
    a.r[0] = 0x817fdfc4u;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x8011d7e4u, &a);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0x817fdfbcu;
    (void)tc_call(0x8011d7e4u, &a);
    if (param_3 != 0u) {
        wrf32d(param_3, (f64)rdf32(0x817fdfc4u));
    }
    if (param_4 != 0u) {
        wrf32d(param_4, (f64)rdf32(0x817fdfc8u));
    }
    if (param_5 != 0u) {
        wrf32d(param_5, (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdfb8u) - (f64)rdf32(0x817fdfc4u))));
    }
    if (param_6 != 0u) {
        wrf32d(param_6, (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdfbcu) - (f64)rdf32(0x817fdfc8u))));
    }
    return;
}
