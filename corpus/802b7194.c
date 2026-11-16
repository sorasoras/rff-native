#include "tc_rt.h"

void fn_802b7194(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, u32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = (u32)rd8(0x80571b90u);
    wr32(0x817fdf88u, param_9);
    wr32(0x817fdf8cu, param_10);
    wr32(0x817fdf90u, param_11);
    wr32(0x817fdf94u, param_12);
    wr32(0x817fdf98u, param_13);
    wr32(0x817fdf9cu, param_14);
    wr32(0x817fdfa0u, param_15);
    wr32(0x817fdfa4u, param_16);
    if (r0 != 0u) {
        a.f[0] = param_1;
        a.f[1] = param_2;
        a.f[2] = param_3;
        a.f[3] = param_4;
        a.f[4] = param_5;
        a.f[5] = param_6;
        a.f[6] = param_7;
        a.f[7] = param_8;
        a.r[0] = 0x80570e78u;
        a.r[1] = param_10;
        a.r[2] = param_11;
        a.r[3] = param_12;
        a.r[4] = param_13;
        a.r[5] = param_14;
        a.r[6] = param_15;
        a.r[7] = param_16;
        (void)tc_call(0x80228554u, &a);
        wr32(0x817fdfecu, 0x817fe008u);
        wr32(0x817fdfe8u, 0x1000000u);
        wr32(0x817fdff0u, 0x817fdf88u);
        a.r[0] = param_9;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x8025b740u, &a);
    }
    return;
}
