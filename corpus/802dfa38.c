#include "tc_rt.h"

u32 fn_802dfa38(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r3 = 0, r5 = 0, r10 = 0, r11 = 0;
    TcArgs a = {0};
    r5 = param_3;
    r11 = rd32((u32)param_1 + 0x18u);
    r10 = rd32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0xcu, param_4);
    wr32((u32)param_1 + 0x10u, param_5);
    wr8((u32)param_1 + 0x6cu, 1u);
    if (((r11 + param_3 + 0x1fu) & 0xffffffe0u) > ((r10 + 0x1fu) & 0xffffffe0u)) {
        r5 = (r10 - r11 + 0x1fu) & 0xffffffe0u;
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.r[3] = r11;
    a.r[4] = 0x802df578u;
    a.r[5] = rd32((u32)param_1 + 0x68u);
    a.r[6] = 1u;
    a.r[7] = r10;
    r3 = tc_call(0x80234db8u, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
