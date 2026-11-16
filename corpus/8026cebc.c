#include "tc_rt.h"

void fn_8026cebc(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_2 != 0u) {
        r31 = (u32)param_1 + 0x3cu;
        r30 = (u32)param_2 - 0x10u;
        if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
            a.r[0] = (u32)param_1 + 0x20u;
            (void)tc_call(0x8022d56cu, &a);
        }
        wr32(0x817fdfe8u, r30 - (((u32)rd16(r30 + 2u) >> 8u) & 0x7fu));
        wr32(0x817fdfecu, r30 + rd32(r30 + 4u) + 0x10u);
        r4 = rd32(r30 + 8u);
        r3 = rd32(r30 + 0xcu);
        if (r4 != 0u) {
            wr32(r4 + 0xcu, r3);
        } else {
            wr32(r31 + 8u, r3);
        }
        if (r3 != 0u) {
            wr32(r3 + 8u, r4);
        } else {
            wr32(r31 + 0xcu, r4);
        }
        a.r[0] = r31;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x8026cbc4u, &a);
        if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
            a.r[0] = (u32)param_1 + 0x20u;
            (void)tc_call(0x8022d648u, &a);
        }
    }
    return;
}
