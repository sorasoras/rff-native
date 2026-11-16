#include "tc_rt.h"

void fn_8029a718(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
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
        a.r[1] = 0x80394298u;
        a.r[2] = param_1;
        a.r[3] = param_2;
        a.r[4] = param_3;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc9cu, &a);
    }
    if ((u32)rd8(0x8053dfa6u) > 1u) {
        a.r[0] = param_1;
        (void)tc_call(0x802a11c8u, &a);
    }
    wr8(0x8053d978u, (u8)param_1);
    wr8(0x8053d979u, (u8)param_3);
    a.r[0] = 0x8053d97au;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x80004338u, &a);
    return;
}
