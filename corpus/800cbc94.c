#include "tc_rt.h"

void fn_800cbc94(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, u32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    (void)param_6;
    (void)param_7;
    (void)param_8;
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdf88u, param_9);
    wr32(0x817fdf90u, param_11);
    wr32(0x817fdf8cu, param_10);
    wr32(0x817fdf94u, param_12);
    wr32(0x817fdf98u, param_13);
    wr32(0x817fdf9cu, param_14);
    wr32(0x817fdfa0u, param_15);
    wr32(0x817fdfa4u, param_16);
    wr32(0x817fdfe8u, 0x2000000u);
    wr32(0x817fdfecu, 0x817fe008u);
    wr32(0x817fdff0u, 0x817fdf88u);
    a.r[0] = param_9;
    a.r[1] = param_10;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x800cbd20u, &a);
    return;
}
