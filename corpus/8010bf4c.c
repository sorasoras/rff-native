#include "tc_rt.h"

s32 fn_8010bf4c(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    a.r[1] = 0x17u;
    r3 = tc_call(0x800a7418u, &a);
    r31 = r3;
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800a7460u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x8010b984u, &a);
        r30 = r3;
        if ((s32)r3 >= (s32)r31) {
            r30 = 0u;
        }
        a.r[0] = 1u;
        a.r[1] = 0x17u;
        a.r[2] = r30;
        r3 = tc_call(0x800a71acu, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r30 = r30 + 1u;
            r30 = r30 - ((u32)ppc_divw((s32)r30, (s32)r31) * r31);
            a.r[0] = r30;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8010b98cu, &a);
            r3 = 0u - ((ppc_cntlzw(r30) >> 5u) & 1u) + 2u;
        }
    }
    return (s32)r3;
}
