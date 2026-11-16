#include "tc_rt.h"

void fn_80096640(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0xffffffffu;
    r29 = 0u;
    r31 = 0u;
    while (r29 < (u32)rd8((u32)param_1 + 6u)) {
        r28 = (u32)(s8)rd8((u32)param_1 + (u32)rd8((((u32)rd8((u32)param_1 + 5u) << 4u) & 0xfffffff0u) + (r31 + (u32)param_1) + 0x4cu) + 7u);
        wr32(0x817fdfd8u, r28);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80149544u, &a);
        if ((s32)r3 > (s32)r30) {
            wr32((u32)param_1 + 0x114u, r28);
            r30 = r3;
        }
        r31 = r31 + 4u;
        r29 = r29 + 1u;
    }
    return;
}
