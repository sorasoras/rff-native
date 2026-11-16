#include "tc_rt.h"

u32 fn_801f8ab0(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    wr32(0x817fdf00u, 0x817fe000u);
    r6 = 0x817fdf7cu;
    r5 = 0x8033c364u;
    ctr = 0xfu;
    do {
        r4 = rd32(r5 + 4u);
        r5 = r5 + 8u;
        r0 = rd32(r5);
        wr32(r6 + 4u, r4);
        wr32(r6 + 8u, r0);
        r6 = r6 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r6 = 0x817fdf04u;
    r5 = 0x8033c3dcu;
    ctr = 0xfu;
    do {
        r4 = rd32(r5 + 4u);
        r5 = r5 + 8u;
        r0 = rd32(r5);
        wr32(r6 + 4u, r4);
        wr32(r6 + 8u, r0);
        r6 = r6 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (param_1 < 0 || param_1 >= 30) {
        r3 = 0xffffffffu;
    } else {
        if (rd32(0x80571100u) == 1u) {
            r3 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7e8020f8u);
        } else {
            r3 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7e802080u);
        }
    }
    return r3;
}
