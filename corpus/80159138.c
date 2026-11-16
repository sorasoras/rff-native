#include "tc_rt.h"

void fn_80159138(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7, u32 param_8, u32 param_9, s32 param_10, f64 param_f1)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    (void)param_10;
    r31 = rd32(0x817fe00cu);
    a.r[0] = param_1;
    (void)tc_call(0x80159058u, &a);
    wr32(param_1 + 0xcu, param_3);
    wr32(param_1 + 8u, param_2);
    a.r[0] = param_1;
    a.r[1] = param_4;
    (void)tc_call(0x80159388u, &a);
    a.r[0] = param_4;
    f1 = tc_callf(0x80159240u, &a);
    wrf32d(param_1 + 0x18u, f1);
    a.r[0] = param_4;
    f1 = tc_callf(0x801592c4u, &a);
    wr32(param_1 + 0x30u, param_8);
    f0 = (f64)(f32)((f64)(f32)f1 + param_f1);
    wrf32d(param_1 + 0x1cu, f0);
    if ((u32)param_7 == 0u) {
        wrf32d(param_1 + 0x18u, f0);
    }
    wr32(param_1, param_5);
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x80159888u, &a);
    wr32(param_1 + 0x34u, rd32(param_1 + 0x34u) | 0x20000000u);
    f1 = tc_callf(0x80159310u, &a);
    wrf32d(param_1 + 0x20u, f1);
    a.r[0] = param_1;
    (void)tc_call(0x801590e4u, &a);
    r3 = tc_call(0x8015934cu, &a);
    wr16(param_1 + 0x2au, (u16)r3);
    wr32(param_1 + 0x14u, r31);
    if ((s32)r31 > 0) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x30u);
        wr32(r3 + 0x470u, 0u);
    }
    wr32(param_1 + 4u, param_6);
    return;
}
