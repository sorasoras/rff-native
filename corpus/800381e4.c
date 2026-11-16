#include "tc_rt.h"

s32 fn_800381e4(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x817fdf58u;
    a.r[1] = param_1;
    r3 = tc_call(0x80037a90u, &a);
    wr32(0x817fdf58u, r3);
    if (r3 == 0u || r3 == 0xfffffff4u) {
        if (r3 == 0xfffffff4u) {
            a.r[0] = 0x817fdf58u;
            a.r[1] = param_4;
            a.r[2] = (((u32)param_3 + 0x3fffu) >> 0xeu) & 0x3ffffu;
            a.r[3] = 1u;
            (void)tc_call(0x80037a2cu, &a);
            r3 = rd32(0x817fdf58u);
            if (r3 == 0u && rd32(param_4) != 0u) {
                return (s32)r3;
            }
            a.r[0] = 0x817fdf58u;
            a.r[1] = param_1;
            a.r[2] = 0x30u;
            a.r[3] = 0u;
            r3 = tc_call(0x80037af8u, &a);
            if (r3 != 0u) {
                r3 = rd32(0x817fdf58u);
                return (s32)r3;
            }
        }
    }
    a.r[0] = 0x817fdf58u;
    a.r[1] = 0x817fdf5cu;
    a.r[2] = param_1;
    a.r[3] = 3u;
    r3 = tc_call(0x80037ba0u, &a);
    if (r3 != 0u) {
        r3 = rd32(0x817fdf58u);
    } else {
        a.r[0] = 0x817fdf58u;
        a.r[1] = 0x817fdf5cu;
        a.r[2] = param_2;
        a.r[3] = (u32)param_3;
        r3 = tc_call(0x80037d18u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x817fdf5cu;
            (void)tc_call(0x80037cdcu, &a);
            r3 = rd32(0x817fdf58u);
        } else {
            a.r[0] = 0x817fdf58u;
            a.r[1] = 0x817fdf5cu;
            (void)tc_call(0x80037c78u, &a);
            r3 = rd32(0x817fdf58u);
        }
    }
    return (s32)r3;
}
