#include "tc_rt.h"

void fn_802da74c(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r8 = 0;
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = 0x7fu - r5;
    if (rd32(0x805475c8u) == 2u) {
        r8 = (r5 << 1u) & 0xfffffffeu;
        r6 = (r4 << 1u) & 0xfffffffeu;
        wr32((u32)param_1 + 0x18u, (u32)(s16)rd16(r8 - 0x7fc642c0u));
        wr32((u32)param_1 + 0x1cu, (u32)(s16)rd16(r6 - 0x7fc642c0u));
        wr32((u32)param_1 + 0x20u, (u32)(s16)rd16(0x8039bd40u));
        wr32((u32)param_1 + 0x24u, (u32)(s16)rd16(0x8039be3eu));
        wr32((u32)param_1 + 0x28u, (u32)(s16)rd16(r6 - 0x7fc641c0u));
        wr32((u32)param_1 + 0x2cu, (u32)(s16)rd16(r8 - 0x7fc641c0u));
        return;
    }
    r5 = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fc644c0u);
    r4 = (r4 << 2u) & 0xfffffffcu;
    wr32((u32)param_1 + 0x18u, r5);
    r4 = rd32(r4 - 0x7fc644c0u);
    wr32((u32)param_1 + 0x1cu, r4);
    wr32((u32)param_1 + 0x20u, rd32(0x8039bb40u));
    wr32((u32)param_1 + 0x24u, rd32(0x8039bd3cu));
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    return;
}
