#include "tc_rt.h"

void fn_800cf25c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r9 = 0, r10 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r9 = param_r9;
    r30 = 0x804b1540u;
    r29 = 0u;
    while (r29 < rd32(0x804b1590u)) {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x1bu;
        a.r[1] = rd32(r30);
        a.r[2] = rd32(r30 + 4u);
        a.r[6] = r9;
        a.r[7] = r10;
        f1 = tc_callf(0x80109b34u, &a);
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        r30 = r30 + 8u;
        r29 = r29 + 1u;
    }
    wr32(0x804b1590u, 0u);
    return;
}
