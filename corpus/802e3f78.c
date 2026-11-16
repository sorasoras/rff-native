#include "tc_rt.h"

void fn_802e3f78(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, u32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    u32 c0eq = 0;
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
    c0eq = rd32(0x80571d30u) == 0u;
    wr32(0x817fdf88u, param_9);
    wr32(0x817fdf8cu, param_10);
    wr32(0x817fdf90u, param_11);
    wr32(0x817fdf94u, param_12);
    wr32(0x817fdf98u, param_13);
    wr32(0x817fdf9cu, param_14);
    wr32(0x817fdfa0u, param_15);
    wr32(0x817fdfa4u, param_16);
    wr32(0x817fdfe8u, 0x1000000u);
    wr32(0x817fdfecu, 0x817fe008u);
    wr32(0x817fdff0u, 0x817fdf88u);
    if (c0eq) {
        a.r[0] = param_9;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802285e0u, &a);
    }
    return;
}
