#include "tc_rt.h"

u32 fn_80192078(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32(rd32(0x80571398u) + 0x38u);
    r31 = r5 + 0x20cu;
    a.r[0] = 0x8049f1b0u;
    a.r[1] = (u32)rd16(r5 + 0x20cu);
    r3 = tc_call(0x8015f2b0u, &a);
    r0 = r3 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0x1ffe0u;
    r3 = 0u;
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r31;
        r3 = tc_call(0x80192120u, &a);
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)(r3 + 0x13u)) >> 3);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r0 + ((r0 >> 0x1fu) & 1u);
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
