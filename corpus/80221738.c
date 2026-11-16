#include "tc_rt.h"

void fn_80221738(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r7 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
    r3 = tc_call(0x80191350u, &a);
    if (r3 != 0u) {
        r7 = rd32(0x80571420u) + 8u;
        r0 = (u32)((s32)ppc_mulhw(954437177, (s32)r7) >> 1);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 9u;
        r3 = r7 - r0;
        r7 = r3 + 6u;
        wr32(0x80571420u, r3);
        r0 = (u32)((s32)ppc_mulhw(954437177, (s32)r7) >> 1);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 9u;
        r0 = r7 - r0;
        r0 = (r0 << 2u) & 0xfffffffcu;
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x9c8u;
        a.r[1] = rd32(r0 - 0x7fcc35f8u);
        a.r[2] = rd32(r0 - 0x7fcc361cu);
        (void)tc_call(0x80191448u, &a);
    }
    return;
}
