#include "tc_rt.h"

u32 fn_80192448(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)rd16(rd32(rd32(0x80571398u) + 0x38u) + 0x20cu);
    a.r[0] = 0x8049f1b0u;
    a.r[1] = r31;
    r3 = tc_call(0x8015f2b0u, &a);
    r0 = r3 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0x60000u;
    r3 = 0u;
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 != 0u) {
        if (((s32)r31 < 0 || (s32)r31 > 36) && ((s32)r31 >= 353 && (s32)r31 <= 360)) {
            r31 = r31 - 0x13cu;
        }
        a.r[0] = 0xeu;
        a.r[1] = (u32)(s8)rd8(((r31 << 3u) & 0xfffffff8u) - 0x7fb5fd0fu);
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0u;
        (void)tc_call(0x801006a4u, &a);
    }
    return 1u;
}
