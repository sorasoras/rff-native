#include "tc_rt.h"

void fn_8003db38(f64 param_1, f64 param_2, f64 param_3, u32 param_4)
{
    TcArgs a = {0};
    wr32(0x803be638u, param_4);
    wrf32d(0x803be62cu, -param_1);
    wrf32d(0x803be630u, -param_2);
    wrf32d(0x803be634u, -param_3);
    a.r[0] = param_4;
    (void)tc_call(0x80049f80u, &a);
    a.r[0] = 0x803be62cu;
    a.r[1] = 0x803be62cu;
    (void)tc_call(0x802343e4u, &a);
    return;
}
