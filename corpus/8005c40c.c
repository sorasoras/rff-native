#include "tc_rt.h"

void fn_8005c40c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 == 0u) {
        r0 = 3u;
    } else {
        r0 = rd32(r3 + 4u);
    }
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        wr32(0x805710ecu, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8003d790u, &a);
        wr32((u32)param_1 + 0x2bcu, 0u);
        wr32((u32)param_1 + 0xbcu, 0u);
        wr32((u32)param_1 + 0x2e8u, 0u);
        if ((u32)param_2 != 0x3fu) {
            wr32(0x805710e8u, 0u);
            a.r[0] = 0u;
            (void)tc_call(0x8004e22cu, &a);
        } else {
            wr32(0x805710e8u, 1u);
            a.r[0] = 1u;
            (void)tc_call(0x8004e22cu, &a);
        }
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            wr32(0x805710ecu, 1u);
            a.r[0] = 1u;
            (void)tc_call(0x8003d790u, &a);
            wr32(0x805710e8u, 1u);
            a.r[0] = 1u;
            (void)tc_call(0x8004e22cu, &a);
            if (((u32)param_2 - 0x36u) > 1u) {
                wr32((u32)param_1 + 0x2bcu, 1u);
            } else {
                wr32((u32)param_1 + 0x2bcu, 0u);
            }
            wr32((u32)param_1 + 0xbcu, 1u);
            wr32((u32)param_1 + 0x2e8u, 0u);
        }
    } else if ((s32)r0 >= 0) {
        wr32(0x805710ecu, 1u);
        a.r[0] = 1u;
        (void)tc_call(0x8003d790u, &a);
        wr32((u32)param_1 + 0x2bcu, 1u);
        wr32((u32)param_1 + 0xbcu, 1u);
        wr32((u32)param_1 + 0x2e8u, 0u);
        wr32(0x805710e8u, 1u);
        a.r[0] = 1u;
        (void)tc_call(0x8004e22cu, &a);
    }
    return;
}
