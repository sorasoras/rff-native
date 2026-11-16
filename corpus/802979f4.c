#include "tc_rt.h"

u32 fn_802979f4(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80540118u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0002u;
        a.r[1] = 0x80393df4u;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc54u, &a);
    }
    if (((u32)rd8(0x8053f006u) & 1u) != 0u) {
        a.r[0] = 0x8053f000u;
        r3 = tc_call(0x802a06d8u, &a);
        c0eq = (r3 & 0xffu) == 0u;
        r3 = 3u;
        if (c0eq) {
            return r3;
        }
        r3 = 1u;
    } else {
        r3 = 6u;
    }
    return r3;
}
