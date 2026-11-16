#include "tc_rt.h"

s32 fn_801c11ac(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = 0u;
    r31 = 0u;
    r0 = 0u;
    r4 = (u32)rd16(param_2);
    if ((s32)r4 >= 504 && (s32)r4 <= 646) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r5 = 1u;
    } else {
        r0 = 0u;
        if ((s32)r4 >= 0 && (s32)r4 <= 36) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r5 = 1u;
        } else {
            r0 = 0u;
            if ((s32)r4 >= 353 && (s32)r4 <= 360) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r5 = 1u;
            }
        }
    }
    if (r5 == 0u) {
        r0 = 0u;
        if ((s32)r4 >= 647 && (s32)r4 <= 669) {
            r0 = 1u;
        }
        if (r0 != 0u || (r4 - 0x295u) <= 2u) {
            r31 = (u32)param_1 + 8u;
        } else {
            r0 = 0u;
            if ((s32)r4 >= 670 && (s32)r4 <= 682) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r0 = 0u;
                if ((s32)r4 >= 683 && (s32)r4 <= 702) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((s32)r4 >= 703 && (s32)r4 <= 733) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r4;
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x180000u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 != 0u) {
                            r31 = 0u;
                        }
                    } else {
                        r31 = (u32)param_1 + 0x14u;
                    }
                } else {
                    r31 = (u32)param_1 + 0x10u;
                }
            } else {
                r31 = (u32)param_1 + 0xcu;
            }
        }
    } else {
        r31 = (u32)param_1 + 4u;
    }
    return (s32)r31;
}
