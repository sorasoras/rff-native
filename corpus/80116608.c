#include "tc_rt.h"

s32 fn_80116608(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = (u32)((s32)ppc_mulhw(1717986919, param_1) >> 2);
    r29 = 0u;
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r30 = r0 * 0xau;
    do {
        a.r[0] = 0x8049c500u;
        a.r[1] = r30;
        r3 = tc_call(0x800c8794u, &a);
        if ((s32)r3 < 0 || (s32)r3 >= 171) {
            r3 = r30;
            return (s32)r3;
        }
        r29 = r29 + 1u;
        r30 = r30 + 1u;
    } while ((s32)r29 < 10);
    r3 = 0xffffffffu;
    return (s32)r3;
}
