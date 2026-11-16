#include "tc_rt.h"

void fn_802ad0c0(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    TcArgs a = {0};
    wr32(0x8054121cu, 0x802ad13cu);
    wr32(0x80541220u, 0x802ad1c8u);
    wr32(0x80541224u, 0u);
    wr32(0x80541228u, 0x802ad2ccu);
    wr32(0x8054122cu, 0x802ad3d4u);
    wr32(0x80541230u, 0x802ad4e0u);
    wr32(0x80541234u, 0u);
    wr32(0x80541238u, 0x802ad4dcu);
    wr32(0x8054123cu, 0x802ad604u);
    wr32(0x80541240u, 0x802ad8a4u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 3u;
    a.r[1] = 0x8054121cu;
    a.r[3] = 0x802ad604u;
    a.r[4] = 0x802ad4dcu;
    a.r[5] = 0x802ad4e0u;
    a.r[6] = 0x802ad3d4u;
    a.r[7] = 0x802ad2ccu;
    (void)tc_call(0x802a5574u, &a);
    return;
}
