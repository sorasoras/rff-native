#include "tc_rt.h"

u32 fn_8026b738(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r29 = 0;
    TcArgs a = {0};
    if (param_3 > rd32((u32)param_1 + 0x14u)) {
        r3 = 0xffffffffu;
    } else {
        a.r[0] = (u32)param_1 + 0x18u;
        (void)tc_call(0x8026b8bcu, &a);
        r3 = rd32((u32)param_1 + 4u);
        r29 = rd32((u32)param_1 + 0xcu) - (r3 - rd32((u32)param_1 + 8u));
        if (r29 >= param_3) {
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.r[2] = param_3;
            (void)tc_call(0x80004338u, &a);
            wr32((u32)param_1 + 4u, rd32((u32)param_1 + 4u) + param_3);
        } else {
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.r[2] = r29;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = rd32((u32)param_1 + 8u);
            a.r[1] = (u32)param_2 + r29;
            a.r[2] = param_3 - r29;
            (void)tc_call(0x80004338u, &a);
            wr32((u32)param_1 + 4u, rd32((u32)param_1 + 8u) + param_3 - r29);
        }
        r4 = rd32((u32)param_1 + 8u);
        if (rd32((u32)param_1 + 0xcu) == (rd32((u32)param_1 + 4u) - r4)) {
            wr32((u32)param_1 + 4u, r4);
        }
        wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) - param_3);
        wr32((u32)param_1 + 0x10u, rd32((u32)param_1 + 0x10u) + param_3);
        a.r[0] = (u32)param_1 + 0x18u;
        (void)tc_call(0x8026b898u, &a);
        r3 = 0u;
    }
    return r3;
}
