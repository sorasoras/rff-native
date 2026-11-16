#include "tc_rt.h"

void fn_801629d4(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r31 = rd32(r3 + 4u);
    } else {
        r31 = 3u;
    }
    r30 = rd32(0x8049b738u);
    c0eq = rd32((u32)param_1 + 0x44u) == 0u;
    wr32((u32)param_1 + 0x74u, 0u);
    if (c0eq) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80162b04u, &a);
        r29 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x80163c18u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r29;
        (void)tc_call(0x80162c70u, &a);
    }
    if (r31 == rd32((u32)param_1 + 0x68u)) {
        if (r31 != 2u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80163170u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r30;
            (void)tc_call(0x80163818u, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8016316cu, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        (void)tc_call(0x801630d0u, &a);
        if (r31 != 2u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x65u;
            a.r[2] = 3u;
            (void)tc_call(0x80162e44u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x2au;
            a.r[2] = 3u;
            (void)tc_call(0x80162e44u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r30;
            (void)tc_call(0x80163818u, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x66u;
            a.r[2] = 3u;
            (void)tc_call(0x80162e44u, &a);
        }
        wr32((u32)param_1 + 0x68u, r31);
        wr32((u32)param_1 + 0x6cu, param_2);
    }
    return;
}
