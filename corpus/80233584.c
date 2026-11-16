#include "tc_rt.h"

void fn_80233584(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, s32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    (void)param_6;
    (void)param_7;
    (void)param_8;
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = (u32)param_10;
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdf78u, param_9);
    wr32(0x817fdf7cu, (u32)param_10);
    wr32(0x817fdf80u, param_11);
    wr32(0x817fdf84u, param_12);
    wr32(0x817fdf88u, param_13);
    wr32(0x817fdf8cu, param_14);
    wr32(0x817fdf90u, param_15);
    wr32(0x817fdf94u, param_16);
    (void)tc_call(0x80230de0u, &a);
    a.r[0] = 0x81280000u;
    (void)tc_call(0x80227208u, &a);
    a.r[0] = 0x812f0000u;
    (void)tc_call(0x802271f0u, &a);
    a.r[0] = 4u;
    a.r[1] = 0x1000u;
    r3 = tc_call(0x80227210u, &a);
    wr32(0x817fdfdcu, 0x817fe008u);
    r30 = r3;
    r31 = 0u;
    wr32(0x817fdfd8u, 0x2000000u);
    wr32(0x817fdfe0u, 0x817fdf78u);
    for (;;) {
        wr32(r30 + r31, r29);
        r31 = r31 + 4u;
        if (r29 == 0u) break;
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 1u;
        r3 = tc_call(0x802550f0u, &a);
        r29 = rd32(r3);
    }
    a.r[0] = 1u;
    a.r[1] = 2u;
    a.r[2] = param_9;
    a.r[3] = r30;
    a.r[4] = 0u;
    (void)tc_call(0x80233140u, &a);
    (void)tc_call(0x8022e0f8u, &a);
    return;
}
