#include "tc_rt.h"

u32 fn_8013ae18(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 1u;
    r29 = 0u;
    r31 = (u32)param_1;
    do {
        c0eq = r30 == 0u;
        r30 = 0u;
        if (!c0eq) {
            a.r[0] = rd32(r31 + 0x44u);
            r3 = tc_call(0x8013ba98u, &a);
            if (r3 != 0u) {
                r30 = 1u;
            }
        }
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 4);
    r31 = 0u;
    if (r30 != 0u) {
        a.r[0] = (u32)param_1 + 0x54u;
        r3 = tc_call(0x8013bd74u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu;
}
