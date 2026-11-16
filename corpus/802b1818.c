#include "tc_rt.h"

void fn_802b1818(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = (u32)rd16((u32)param_1 + 0x14u);
    c0lt = (s32)r0 < 12;
    if (r0 != 0xcu) {
        if (!c0lt) {
            return;
        }
        if ((s32)r0 < 11) {
            return;
        }
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32((u32)param_1 + 0x10u);
        a.r[1] = 5u;
        a.r[2] = 0u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802ad9f4u, &a);
        return;
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = 5u;
    a.r[2] = 0u;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x802ae638u, &a);
    return;
}
