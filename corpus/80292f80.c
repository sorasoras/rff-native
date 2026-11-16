#include "tc_rt.h"

void fn_80292f80(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571b80u) >= 5u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x504u;
        a.r[1] = 0x803933f4u;
        a.r[2] = param_5;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = param_6;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028cc6cu, &a);
    }
    wr8(param_1 + 0x16u, (u8)param_2);
    wr8(param_1 + 0x18u, 1u);
    wr16(param_1 + 0xeu, (u16)param_3);
    wr8(param_1 + 0x13u, (u8)param_5);
    wr8(param_1 + 0x15u, (u8)param_6);
    if (param_4 != 0u) {
        a.r[0] = param_1 + 4u;
        (void)tc_call(0x8028d9f0u, &a);
        r3 = (u32)rd16(param_4);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8028a0d4u, &a);
            wr32(param_1 + 4u, r3);
            if (r3 != 0u) {
                wr16(param_1, rd16(param_4));
                a.r[0] = r3;
                a.r[1] = rd32(param_4 + 4u);
                a.r[2] = (u32)rd16(param_4);
                (void)tc_call(0x80004338u, &a);
            }
        }
    }
    return;
}
