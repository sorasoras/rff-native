#include "tc_rt.h"

u32 fn_802a27b4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((u32)rd8(0x80540998u) != 0u) {
        r3 = 0x10u;
    } else {
        wr32(0x805409a0u, param_2);
        wr16(0x817fdfd8u, 2u);
        wr16(0x817fdfdcu, 0x1124u);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = param_2;
        a.r[1] = param_3;
        a.r[2] = 1u;
        a.r[3] = 0x817fdfd8u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802b1b2cu, &a);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0x802a287cu;
        r3 = tc_call(0x802b1ea4u, &a);
        if ((r3 & 0xffu) != 0u) {
            wr32(0x8054099cu, param_4);
            r3 = 0u;
            wr8(0x80540998u, 1u);
        } else {
            r3 = 3u;
        }
    }
    return r3;
}
