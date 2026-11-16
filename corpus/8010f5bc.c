#include "tc_rt.h"

u32 fn_8010f5bc(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 1u;
    a.r[1] = 0xcu;
    a.r[2] = 0x8010f0c4u;
    a.r[3] = 1u;
    a.r[4] = param_2;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x800a6fccu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = 1u;
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0u;
        a.r[1] = 0xdu;
        a.r[2] = 0x8010f124u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x800a6fccu, &a);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    }
    return r3;
}
