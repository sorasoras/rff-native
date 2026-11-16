#include "tc_rt.h"

void fn_802c2530(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x3cu) == 0u) {
        r4 = 2u;
        if (rd32((u32)param_1 + 0x10u) != 0u) {
            r4 = 1u;
        }
    } else {
        r4 = 0u;
    }
    if (r4 == 1u) {
        a.r[0] = rd32((u32)param_1 + 0x10u);
        a.r[1] = rd32((u32)param_1 + 0x2cu);
        a.r[2] = 0u;
        r3 = tc_call(0x8026cd2cu, &a);
        a.r[0] = 0x80547480u;
        a.r[1] = r3;
        a.r[2] = 0x20u;
        (void)tc_call(0x8026d4b0u, &a);
        wr32(0x80398d8cu, 0x80547480u);
    }
    r5 = rd32((u32)param_1 + 0x3cu);
    if (r5 == 0u) {
        r3 = 2u;
        if (rd32((u32)param_1 + 0x10u) != 0u) {
            r3 = 1u;
        }
    } else {
        r3 = 0u;
    }
    c0lt = (s32)r3 < 1;
    if (r3 == 1u) {
        wr32(0x805474e0u, rd32(0x80398d8cu));
    } else if (!c0lt) {
        if ((s32)r3 < 3) {
            wr32(0x80398d8cu, rd32(0x805474e0u));
        }
    } else if ((s32)r3 >= 0) {
        r0 = rd32((u32)param_1 + 0x3cu);
        wr32(0x805474e0u, r5);
        wr32(0x80398d8cu, r0);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802c2ac8u, &a);
    r3 = tc_call(0x802c2b14u, &a);
    a.r[0] = r3;
    (void)tc_call(0x802c2b20u, &a);
    return;
}
