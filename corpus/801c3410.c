#include "tc_rt.h"

u32 fn_801c3410(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0u;
    a.f[0] = param_1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    a.r[0] = param_3;
    a.r[1] = r3;
    a.r[2] = 0x817fdfd4u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfd4u;
    a.r[1] = 0x817fdfd4u;
    (void)tc_call(0x802343e4u, &a);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x801c3208u, &a);
    f1 = ppc_fmadds((f64)rdf32(0x817fdfd0u), (f64)rdf32(0x817fdfdcu), ppc_fmadds((f64)rdf32(0x817fdfc8u), (f64)rdf32(0x817fdfd4u), (f64)(f32)((f64)rdf32(0x817fdfccu) * (f64)rdf32(0x817fdfd8u))));
    if (f1 < (f64)rdf32(0x80575cfcu)) {
        r3 = 0u;
    } else {
        r3 = (ppc_cntlzw(((((f1 < param_1) << 0x1fu) | ((f1 > param_1) << 0x1eu) | ((f1 == param_1) << 0x1du) | (((f1 != f1) || (param_1 != param_1)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
    }
    return r3;
}
