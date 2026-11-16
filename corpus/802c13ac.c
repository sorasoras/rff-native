#include "tc_rt.h"

void fn_802c13ac(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r27 = 0, r28 = 0;
    TcArgs a = {0};
    wr32(param_r3 + 0x1f0u, 0x803989c0u);
    wr32(0x80547470u, param_r3);
    if (param_r4 != 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = param_r4;
        a.r[1] = param_r3 + 0x1d0u;
        a.r[3] = 0x803989c0u;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x80275974u, &a);
        wr8(param_r3 + 0x1ecu, (u8)((((0u - r3) | r3) >> 0x1fu) & 1u));
    } else {
        wr8(param_r3 + 0x1ecu, 0u);
    }
    a.r[0] = param_r3 + 0x1a0u;
    (void)tc_call(0x8022671cu, &a);
    r28 = param_r3;
    r27 = 0u;
    do {
        a.r[0] = r28;
        (void)tc_call(0x8022671cu, &a);
        wr32(r28 + 0x50u, 0u);
        r27 = r27 + 1u;
        wr32(r28 + 0x58u, 0xffffffffu);
        wr8(r28 + 0x5cu, 1u);
        wr8(r28 + 0x62u, 1u);
        r28 = r28 + 0x68u;
    } while ((s32)r27 < 4);
    return;
}
