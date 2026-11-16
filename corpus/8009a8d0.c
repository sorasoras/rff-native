#include "tc_rt.h"

u32 fn_8009a8d0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    c0lt = (s32)param_3 < 538;
    wr8(param_1, 0u);
    if (param_3 == 0x21au) {
        r3 = tc_call(0x80040b64u, &a);
        wr32(param_2, r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u));
    } else {
        if (!c0lt) {
            c0lt = (s32)param_3 < 541;
            if (param_3 == 0x21du) {
                r3 = tc_call(0x800a7488u, &a);
                wr32(param_2, r3);
                return 1u;
            }
            if (c0lt) {
                if ((s32)param_3 >= 540) {
                    r3 = tc_call(0x800a74bcu, &a);
                    wr32(param_2, r3);
                    return 1u;
                }
                r3 = tc_call(0x800a7460u, &a);
                wr32(param_2, r3);
                return 1u;
            }
            if ((s32)param_3 < 543) {
                return 1u;
            }
        } else {
            c0lt = (s32)param_3 < 3;
            if (param_3 == 3u) {
                r3 = tc_call(0x800a7460u, &a);
                a.r[0] = 3u;
                a.r[1] = r3;
                r3 = tc_call(0x800a51f8u, &a);
                wr32(param_2, r3);
                return 1u;
            }
            if (!c0lt) {
                if ((s32)param_3 < 5) {
                    r3 = tc_call(0x800a7460u, &a);
                    a.r[0] = 4u;
                    a.r[1] = r3;
                    r3 = tc_call(0x800a51f8u, &a);
                    wr32(param_2, r3);
                    return 1u;
                }
            } else {
                c0lt = (s32)param_3 < 1;
                if (param_3 == 1u) {
                    r3 = tc_call(0x800a7460u, &a);
                    a.r[0] = 1u;
                    a.r[1] = r3;
                    r3 = tc_call(0x800a51f8u, &a);
                    wr32(param_2, r3);
                    return 1u;
                }
                if (!c0lt) {
                    r3 = tc_call(0x800a7460u, &a);
                    a.r[0] = 2u;
                    a.r[1] = r3;
                    r3 = tc_call(0x800a51f8u, &a);
                    wr32(param_2, r3);
                    return 1u;
                }
            }
        }
        if (param_3 <= 0x8cu || param_3 >= 0x219u) {
            a.r[0] = param_3;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
            wr32(param_2, r3);
        } else {
            a.r[0] = param_3;
            r3 = tc_call(0x8009a674u, &a);
            wr32(param_2, r3);
        }
    }
    return 1u;
}
