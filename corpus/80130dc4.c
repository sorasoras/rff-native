#include "tc_rt.h"

void fn_80130dc4(s32 param_1, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x80130ea4u, &a);
    r4 = rd32((u32)param_1 + ((rd32((u32)param_1 + 0x48u) << 2u) & 0xfffffffcu) + 0x58u);
    if (r4 != 0u) {
        r5 = rd32(r4);
        if (r5 != 0u) {
            a.r[0] = r5 + 0xcdu;
            a.r[1] = r3;
            a.r[2] = 8u;
            (void)tc_call(0x80004338u, &a);
            wr32((u32)param_1 + 0x48u, rd32((u32)param_1 + 0x48u) + 1u);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 2u;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = (u32)param_1 + 0x868u;
            a.r[1] = 0x8033a119u;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = (u32)param_1 + 0x868u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
            return;
        }
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = 4u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
