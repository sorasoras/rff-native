#include "tc_rt.h"

void fn_802dd554(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32((u32)param_1 + 0x14u);
    a.r[0] = rd32((u32)param_1 + 0x18u);
    r3 = tc_call(0x802dc004u, &a);
    r29 = r3;
    a.r[0] = r3;
    (void)tc_call(0x802dc018u, &a);
    r31 = rd32(0x80547c1cu) + (r29 * 0x4cu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802db360u, &a);
    r3 = r30 + (((u32)rd8(r31 + 0xcu) << 9u) & 0xfffffe00u) + (((u32)rd8(r31 + 0xdu) << 2u) & 0xfffffffcu);
    if (rd32(r3 + 0x408u) == r31) {
        wr32(r3 + 0x408u, 0u);
    }
    wr32(r31 + 8u, 0u);
    wr32(r30 + 0x404u, rd32(r30 + 0x404u) - 1u);
    return;
}
