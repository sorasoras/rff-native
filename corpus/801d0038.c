#include "tc_rt.h"

u32 fn_801d0038(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = 1u;
    r0 = rd32((u32)param_1 + 0xd00u);
    r4 = rd32(0x80575f54u);
    if (r0 == rd32(0x80575f50u)) {
        r6 = 0u;
    } else {
        if (r0 == r4) {
            r6 = 0u;
        }
    }
    c0eq = r6 == 0u;
    r0 = 0xbu;
    if (c0eq) {
        r3 = 0xbu;
    } else {
        if (!c0eq) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x801cfdc0u, &a);
            r0 = r3;
        }
        r3 = r0;
    }
    return r3;
}
