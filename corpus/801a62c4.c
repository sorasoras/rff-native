#include "tc_rt.h"

void fn_801a62c4(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_2 != 0u) {
        wr32(param_1, (u32)param_2);
        r30 = 0u;
        r31 = 0u;
        wr32(param_1 + 4u, (u32)param_3);
        while ((s32)r30 < (s32)rd32(param_1 + 4u)) {
            a.r[0] = rd32(rd32(param_1) + r31);
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x800510bcu, &a);
            r30 = r30 + 1u;
            wr32(rd32(param_1) + r31 + 4u, rd32(0x817fdfdcu));
            r3 = rd32(param_1) + r31;
            r31 = r31 + 0xcu;
            wr32(r3 + 8u, (rd32(0x817fdfe0u) >> 1u) & 0x7fffffffu);
        }
    }
    return;
}
