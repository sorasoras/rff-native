#include "tc_rt.h"

u32 fn_80115058(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    c0lt = param_2 < 1;
    r29 = 0xffffffffu;
    r3 = rd32(param_1);
    if ((u32)param_2 == 1u) {
        r30 = 3u;
    } else if (!c0lt) {
        if (param_2 >= 3) {
            return r29;
        }
        r30 = 2u;
    } else {
        if (param_2 < 0) {
            return r29;
        }
        r30 = 1u;
    }
    a.r[0] = r3;
    a.r[1] = r30;
    r3 = tc_call(0x801137e4u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x80114358u, &a);
        r29 = r3;
        a.r[0] = r31;
        (void)tc_call(0x80114784u, &a);
        r3 = tc_call(0x800a7854u, &a);
        r31 = r3;
        do {
            if (r3 != 0u) {
                if (r30 != 1u) {
                    if (r30 == 3u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x800c37fcu, &a);
                        if (r3 == 0u) {
                            r0 = 0u;
                            break;
                        }
                    }
                } else {
                    a.r[0] = r3;
                    r3 = tc_call(0x800c3668u, &a);
                    if (r3 == 0u) {
                        r0 = 0u;
                        break;
                    }
                }
                a.r[0] = r31;
                r3 = tc_call(0x800c3728u, &a);
                if (r3 == 0u) {
                    a.r[0] = r31;
                    r3 = tc_call(0x800c37fcu, &a);
                    if (r3 == 0u) {
                        r0 = (ppc_cntlzw(rd32(0x805711ecu)) >> 5u) & 0x7ffffffu;
                        break;
                    }
                }
                r3 = tc_call(0x800cf66cu, &a);
                if (r3 != 0u) {
                    r3 = tc_call(0x800cf66cu, &a);
                    if (r3 != 4u) {
                        r0 = (ppc_cntlzw(rd32(0x805711ecu)) >> 5u) & 0x7ffffffu;
                        break;
                    }
                }
                r0 = 0u;
            } else {
                r0 = 0u;
            }
        } while (0);
        if (r0 == 0u) {
            r29 = 0xffffffffu;
        }
    }
    return r29;
}
