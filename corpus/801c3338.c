#include "tc_rt.h"

f64 fn_801c3338(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80234380u, &a);
    a.r[0] = param_3;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0x817fdfecu;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfecu;
    a.r[1] = 0x817fdfecu;
    (void)tc_call(0x802343e4u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe0u;
    (void)tc_call(0x801c3208u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd4u;
    (void)tc_call(0x801c3228u, &a);
    f1 = (f64)rdf32(0x817fdff0u);
    f4 = (f64)(f32)((f64)rdf32(0x817fdfe4u) * f1);
    f1 = (f64)(f32)((f64)rdf32(0x817fdfd8u) * f1);
    f2 = (f64)rdf32(0x817fdfecu);
    f4 = ppc_fmadds((f64)rdf32(0x817fdfe0u), f2, f4);
    f1 = ppc_fmadds((f64)rdf32(0x817fdfd4u), f2, f1);
    f3 = (f64)rdf32(0x817fdff4u);
    f4 = ppc_fmadds((f64)rdf32(0x817fdfe8u), f3, f4);
    f3 = ppc_fmadds((f64)rdf32(0x817fdfdcu), f3, f1);
    f1 = (f64)(f32)(f4 - (f64)rdf32(0x80575cd8u));
    if (f3 < (f64)rdf32(0x80575cfcu)) {
        f0 = (f64)rdf32(0x80575d30u);
    } else {
        f0 = (f64)rdf32(0x80575d34u);
    }
    f1 = (f64)(f32)(f1 * f0);
    return f1;
}
