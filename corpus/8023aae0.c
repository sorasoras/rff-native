#include "tc_rt.h"

u32 fn_8023aae0(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = param_1;
    r5 = rd32(param_2 + 0xcu);
    if ((r5 + 0x1150000u) != 0xdaedu) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80387a20u;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80228554u, &a);
        wr32(param_2 + 0xcu, 0xfeebdaedu);
    } else {
        wr8(0x80571678u, 0u);
        if (rd32(param_2) != 0u) {
            r0 = (u32)rd8(0x80571698u);
            wr8(0x80571679u, 1u);
            if (r0 == 1u) {
                wr8(0x80571698u, 0u);
                r3 = param_1 | 8u;
            }
            if ((r3 & 1u) != 0u) {
                wr32(0x8057168cu, 0u);
            }
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            (void)tc_call(rd32(param_2), &a);
            wr8(0x80571679u, 0u);
        }
    }
    wr8(param_2 + 8u, 0u);
    return 0u;
}
