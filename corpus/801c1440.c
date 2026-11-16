#include "tc_rt.h"

void fn_801c1440(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8049f1b0u;
    a.r[1] = (u32)rd16(param_2);
    r3 = tc_call(0x8015f2b0u, &a);
    r0 = r3 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0x180000u;
    r3 = 0u;
    if (r0 != 0u) {
        r3 = 1u;
    }
    if (r3 == 0u) {
        r0 = ((u32)param_3 << 2u) & 0xfffffffcu;
        r31 = (u32)param_1 + r0;
        a.r[0] = 0x8049f1b0u;
        a.r[1] = (u32)rd16((u32)param_1 + r0);
        r3 = tc_call(0x8015f2b0u, &a);
        r0 = r3 & 0xffu;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0x180000u;
        r3 = 0u;
        if (r0 != 0u) {
            r3 = 1u;
        }
        if (r3 == 0u) {
            a.r[0] = (u32)param_1 + 0x1cu;
            a.r[1] = r31;
            a.r[2] = param_2;
            (void)tc_call(0x801a78c8u, &a);
        }
    }
    a.r[0] = (u32)param_1 + (((u32)param_3 << 2u) & 0xfffffffcu);
    a.r[1] = param_2;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    return;
}
