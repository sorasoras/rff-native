#include "tc_rt.h"

void fn_80084350(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32((u32)param_1 + 0x70u, param_2);
    wr32((u32)param_1 + 0x78u, param_3);
    wr32((u32)param_1 + 0x7cu, param_4);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x80031998u, &a);
    f2 = (f64)rdf32(0x805728f0u);
    f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdfe8u) - (f64)rdf32(0x817fdfdcu)));
    if (!(f2 > f0)) {
        f2 = f0;
    }
    wrf32d((u32)param_1 + 0xa4u, f2);
    f2 = (f64)rdf32(0x817fdfe4u);
    f3 = (f64)(f32)((f64)rdf32(0x817fdfecu) - (f64)rdf32(0x817fdfe0u));
    f1 = (f64)rdf32(0x817fdfd8u);
    wrf32d(0x817fdfccu, (f64)rdf32(0x805728f4u));
    wrf32d(0x817fdfd0u, f3);
    wrf32d(0x817fdfc8u, (f64)(f32)(f2 - f1));
    a.r[0] = 0x817fdfc8u;
    f1 = tc_callf(0x80234440u, &a);
    f2 = (f64)rdf32(0x805728f0u);
    if (!(f2 > (f64)(f32)(f1 * (f64)rdf32(0x805728fcu)))) {
        a.r[0] = 0x817fdfc8u;
        f1 = tc_callf(0x80234440u, &a);
        f2 = (f64)(f32)(f1 * (f64)rdf32(0x805728fcu));
    }
    wrf32d((u32)param_1 + 0xa8u, f2);
    return;
}
