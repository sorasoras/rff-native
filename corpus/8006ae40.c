#include "tc_rt.h"

void fn_8006ae40(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f1 = (f64)rdf32(0x805725d8u);
    wr32(0x817fdfecu, 0u);
    f0 = (f64)rdf32(0x80572680u);
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdfe0u, f1);
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfd8u, f1);
    f1 = (f64)rdf32(param_1 + 0xb4u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 9u;
    a.r[3] = 0x804890c8u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
    a.r[0] = param_3;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfd8u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x805726b0u);
    a.f[1] = (f64)(f32)(f0 * f1);
    (void)tc_call(rd32(rd32(param_3) + 0x24u), &a);
    return;
}
