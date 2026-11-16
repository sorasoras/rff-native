#include "tc_rt.h"

void fn_800a36fc(f64 param_1, f64 param_2, f64 param_3, f64 param_4)
{
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = (f64)rdf32(0x80572ad8u);
    a.r[0] = 0x817fdfa8u;
    (void)tc_call(0x80233c84u, &a);
    a.f[0] = param_3;
    a.f[1] = param_4;
    a.f[2] = (f64)rdf32(0x80572adcu);
    a.r[0] = 0x817fdfa8u;
    (void)tc_call(0x80042120u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x817fdfa8u;
    (void)tc_call(0x8004cb58u, &a);
    return;
}
