#include "tc_rt.h"

s32 fn_801ef5e4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(rd32(0x80571398u) + 0x1a0u);
    if ((s32)r30 < 0 || (s32)r30 >= 70) {
        r3 = 1u;
    } else {
        a.r[0] = rd32(param_1) + 0xc4u;
        r3 = tc_call(0x800f8a08u, &a);
        r31 = r3;
        a.r[0] = 0x8049c500u;
        a.r[1] = r30;
        r3 = tc_call(0x800c8b88u, &a);
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)((r3 & 0xffu) + 9u)) >> 2);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r3 = (u32)((u64)(u32)((s32)r31 >> 31) + (u64)((r0 >> 0x1fu) & 1u) + (u64)(r0 <= r31));
    }
    return (s32)r3;
}
