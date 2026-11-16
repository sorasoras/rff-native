#include "tc_rt.h"

u32 fn_80191fe0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)rd16(rd32(rd32(0x80571398u) + 0x38u) + 0x20cu);
    a.r[0] = 0x8049f1b0u;
    a.r[1] = r31;
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
        a.r[1] = 0u;
        a.r[2] = (u32)rd8(((r31 - 0x1f8u) * 0x14u) - 0x7fb60833u);
        (void)tc_call(0x80100bb4u, &a);
    }
    return 1u;
}
