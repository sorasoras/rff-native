#include "tc_rt.h"

u32 fn_802f8bfc(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x188u) == 0u) {
        r3 = 0u;
    } else {
        if (param_3 < 0x78u) {
            r3 = 0u;
        } else {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = param_4;
            a.r[4] = param_5;
            a.r[5] = param_6;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            r3 = tc_call(0x8023456cu, &a);
            if ((s32)r3 < 0) {
                r3 = 0u;
            } else {
                if (param_2 != 0u) {
                    a.r[0] = param_2;
                    a.r[1] = r3;
                    (void)tc_call(0x802dfb90u, &a);
                    wr32(param_2 + 0x70u, param_5);
                    wr32(param_2, 0x8039d0c8u);
                    wr32(param_2 + 0x74u, param_6);
                    a.r[0] = param_2;
                    a.r[1] = param_5;
                    a.r[2] = 0u;
                    (void)tc_call(0x802dfab8u, &a);
                }
                r3 = param_2;
            }
        }
    }
    return r3;
}
