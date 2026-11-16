#include "tc_rt.h"

s32 fn_80303508(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x803014bcu, &a);
    r30 = r3;
    r29 = 0u;
    r31 = ((r3 * 0x5cu) + 3u) & 0xfffffffcu;
    while (r29 < r30) {
        a.r[0] = param_2;
        a.r[1] = r29;
        a.r[2] = 0x817fdfc8u;
        r3 = tc_call(0x8030150cu, &a);
        if (r3 != 0u) {
            r3 = rd32(0x817fdfccu);
            r5 = rd32(0x817fdfc8u);
            r4 = (r3 + 3u) & 0xfffffffcu;
            ctr = r5;
            if ((s32)r5 > 0) {
                do {
                    if (r3 != 0u) {
                        r31 = (r31 + 0x3fu) & 0xffffffe0u;
                        r31 = r31 + r4;
                    }
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r29 = r29 + 1u;
    }
    a.r[0] = param_2;
    r3 = tc_call(0x803014c4u, &a);
    r31 = r31 + ((((r3 << 3u) & 0xfffffff8u) + 7u) & 0xfffffffcu);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfd0u;
    r3 = tc_call(0x80301514u, &a);
    if (r3 != 0u) {
        r31 = r31 + (((rd32(0x817fdfd0u) * 0x4c0u) + 3u) & 0xfffffffcu);
        r31 = r31 + (((rd32(0x817fdfd8u) * 0x10c0u) + 3u) & 0xfffffffcu);
        r31 = r31 + (((rd32(0x817fdfe4u) * 0x240u) + 3u) & 0xfffffffcu);
        r31 = r31 + (((rd32(0x817fdfd4u) * 0xf8u) + 3u) & 0xfffffffcu);
    }
    return (s32)r31;
}
