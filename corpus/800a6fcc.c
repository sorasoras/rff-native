#include "tc_rt.h"

void fn_800a6fcc(f64 param_1, f64 param_2, f64 param_3, f64 param_4, f64 param_5, f64 param_6, f64 param_7, f64 param_8, u32 param_9, u32 param_10, u32 param_11, s32 param_12, u32 param_13, u32 param_14, u32 param_15, u32 param_16)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_2;
    (void)param_3;
    (void)param_4;
    (void)param_5;
    (void)param_6;
    (void)param_7;
    (void)param_8;
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdef8u, param_9);
    r31 = 0x817fdf68u;
    r30 = 0u;
    wr32(0x817fdefcu, param_10);
    wr32(0x817fdf00u, param_11);
    wr32(0x817fdf04u, (u32)param_12);
    wr32(0x817fdf08u, param_13);
    wr32(0x817fdf0cu, param_14);
    wr32(0x817fdf10u, param_15);
    wr32(0x817fdf14u, param_16);
    wr32(0x817fdf58u, 0x4000000u);
    wr32(0x817fdf5cu, 0x817fe008u);
    wr32(0x817fdf60u, 0x817fdef8u);
    while ((s32)r30 < param_12) {
        a.r[0] = 0x817fdf58u;
        a.r[1] = 1u;
        r3 = tc_call(0x802550f0u, &a);
        r30 = r30 + 1u;
        wr32(r31, rd32(r3));
        r31 = r31 + 4u;
    }
    a.r[0] = param_9;
    a.r[1] = param_10;
    a.r[2] = param_11;
    a.r[3] = (u32)param_12;
    a.r[4] = 0x817fdf68u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800a6e74u, &a);
    return;
}
