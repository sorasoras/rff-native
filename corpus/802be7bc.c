#include "tc_rt.h"

u32 fn_802be7bc(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = rd32(0x80570ef0u);
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x80226610u, &a);
    wr32(0x80547198u, 0xe0000000u);
    wr32(0x8054719cu, 0xe0002000u);
    wr32(0x805471a0u, 0xe0002800u);
    wr32(0x805472c0u, 0xe0000000u);
    wr32(0x805472c4u, 0xe0002a00u);
    wr32(0x805472c8u, 0xe0003480u);
    wr32(0x80571bc0u, 1u);
    return 1u;
}
