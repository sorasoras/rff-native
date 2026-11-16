#include "tc_rt.h"

void fn_8025b8bc(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, s32 param_9, u32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    (void)param_6;
    (void)param_7;
    (void)param_8;
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdf70u, param_11);
    wr32(0x817fdf74u, param_12);
    wr32(0x817fdf68u, (u32)param_9);
    wr32(0x817fdfc8u, (u32)param_9);
    wr32(0x817fdf6cu, param_10);
    wr32(0x817fdfccu, param_10);
    wr32(0x817fdf78u, param_13);
    wr32(0x817fdf7cu, param_14);
    wr32(0x817fdf80u, param_15);
    wr32(0x817fdf84u, param_16);
    wr32(0x817fdfd4u, 0x3000000u);
    wr32(0x817fdfd8u, 0x817fe008u);
    wr32(0x817fdfdcu, 0x817fdf68u);
    wr32(0x817fdfd0u, 0u);
    a.r[0] = 0x8025b6d4u;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = param_11;
    a.r[3] = 0x817fdfd4u;
    r3 = tc_call(0x8025ae20u, &a);
    if ((u32)param_9 != 0u) {
        if (r3 < param_10) {
            wr8((u32)param_9 + r3, 0u);
        } else {
            if (param_10 != 0u) {
                wr8((u32)param_9 + param_10 - 1u, 0u);
            }
        }
    }
    return;
}
