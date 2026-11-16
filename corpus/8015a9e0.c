#include "tc_rt.h"

u32 fn_8015a9e0(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = (u32)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (param_2 > 2 || param_2 < 0) {
        r3 = 0u;
    } else {
        if ((u32)param_1 == 0x20u) {
            r3 = 0x13u;
            r4 = 1u;
        } else {
            if ((u32)param_1 == 0x13u) {
                r4 = 2u;
            }
        }
        wr16(0x817fdfe8u, 0u);
        if ((r3 == 7u || r3 == 0x13u) || (r3 - 0x1eu) <= 1u) {
            r4 = (u32)rd8(r4 - 0x7fa8f7b0u);
            wr8(0x817fdfe9u, 0u);
            wr8(0x817fdfe8u, (u8)r4);
        }
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x804bf030u;
        a.r[1] = 0x8033a6afu;
        a.r[2] = r3;
        a.r[3] = 0x817fdfe8u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8025b994u, &a);
        r3 = 0x804bf030u;
    }
    return r3;
}
