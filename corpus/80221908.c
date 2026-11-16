#include "tc_rt.h"

void fn_80221908(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x1cu);
    if (rd32(0x80571424u) != 0u) {
        r5 = rd32(0x80571420u) + 0xau;
        r0 = (u32)((s32)ppc_mulhw(954437177, (s32)r5) >> 1);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 9u;
        r0 = r5 - r0;
    } else {
        r5 = rd32(0x80571420u) + 8u;
        r0 = (u32)((s32)ppc_mulhw(954437177, (s32)r5) >> 1);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 9u;
        r0 = r5 - r0;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    a.r[0] = r3;
    a.r[1] = rd32(r0 - 0x7fcc3640u);
    (void)tc_call(0x800fa4ecu, &a);
    return;
}
