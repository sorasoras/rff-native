#include "tc_rt.h"

u32 fn_8018d4f0(u32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r8 = 0x817fdf34u;
    wr32(0x817fdffcu, 0u);
    r7 = 0x8033aa4cu;
    wr32(0x817fdff8u, 0u);
    ctr = 0x18u;
    do {
        r6 = rd32(r7 + 4u);
        r7 = r7 + 8u;
        r0 = rd32(r7);
        wr32(r8 + 4u, r6);
        wr32(r8 + 8u, r0);
        r8 = r8 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r31 = (u32)param_3 + (((u32)param_2 << 2u) & 0xfffffffcu);
    a.r[0] = param_1;
    r3 = tc_call(0x8018d1b0u, &a);
    if (r3 != 0u) {
        r31 = ((((u32)param_2 + 1u) << 2u) & 0xfffffffcu) - 1u;
    }
    if ((s32)r31 < 0 || (s32)r31 >= 48) {
        r31 = 0u;
    }
    return rd32(((r31 << 2u) & 0xfffffffcu) - 0x7e8020c8u);
}
