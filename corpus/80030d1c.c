#include "tc_rt.h"

void fn_80030d1c(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2 + ((param_3 << 3u) & 0xfffffff8u);
    r30 = 0u;
    wr32(r31 + 0x78u, 0u);
    wr32(r31 + 0x7cu, rd32(param_1));
    while (r30 < rd32((u32)param_2 + 0x34u)) {
        r3 = rd32((u32)param_2 + 0x38u) + (rd32((u32)param_2 + 0x3cu) * r30);
        if (((u32)rd16(r3 + 0x34u) & 0x1000u) != 0u && (u32)rd8(rd32(r3 + 0x3cu) + 0x61u) == param_3) {
            r4 = rd32(r31 + 0x78u);
            r0 = (r4 << 2u) & 0xfffffffcu;
            r4 = r4 + 1u;
            wr32(rd32(r31 + 0x7cu) + r0, r3);
            wr32(r31 + 0x78u, r4);
        }
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x8007c250u, &a);
        r30 = r30 + 1u;
    }
    wr32(param_1, rd32(r31 + 0x7cu) + ((rd32(r31 + 0x78u) << 2u) & 0xfffffffcu));
    if (rd32(r31 + 0x78u) == 0u) {
        wr32(r31 + 0x7cu, 0u);
    }
    return;
}
