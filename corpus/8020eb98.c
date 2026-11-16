#include "tc_rt.h"

u32 fn_8020eb98(s32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fddb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r7 = 0x817fddb4u;
    wr32(0x817fdff8u, 0u);
    r6 = 0x8033c594u;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    ctr = 0x45u;
    do {
        r5 = rd32(r6 + 4u);
        r6 = r6 + 8u;
        r0 = rd32(r6);
        wr32(r7 + 4u, r5);
        wr32(r7 + 8u, r0);
        r7 = r7 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(r7 + 4u, rd32(r6 + 4u));
    if (param_2 >= 0x8bu) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7e802248u);
        a.r[2] = 0x6ffu;
        (void)tc_call(0x8020caa8u, &a);
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = param_3;
        a.r[2] = param_4;
        (void)tc_call(0x8020cb40u, &a);
        r0 = 0u;
        if ((u32)param_5 != 0xffffffffu) {
            r0 = 1u;
        }
        wr32((u32)param_1 + 0x16cu, r0);
        r3 = 1u;
    }
    return r3;
}
