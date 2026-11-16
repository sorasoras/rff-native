#include "tc_rt.h"

u32 fn_80046024(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    TcArgs a = {0};
    if (rd32(0x80571040u) != 0u) {
        if (rd32(0x803c1de0u) == 0u) {
            a.r[0] = 0x803c1dc0u;
            a.r[1] = 0u;
            a.r[2] = 0xcu;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = 0x803c1dccu;
            a.r[1] = 0u;
            a.r[2] = 0x10u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = 0x803c1d7cu;
            a.r[1] = (u32)param_1;
            a.r[2] = 0x30u;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = 0x803c1d7cu;
            a.r[1] = 0x80335ce0u;
            r3 = tc_call(0x8025beb0u, &a);
            if (r3 == 0u) {
                if ((rd32(0x803c1d80u) - 0x10000u) == 0x1000u) {
                    r30 = (u32)param_1 + rd32(0x803c1d9cu);
                    a.r[0] = 0x803c1dacu;
                    a.r[1] = r30;
                    a.r[2] = 0x14u;
                    (void)tc_call(0x80004338u, &a);
                    r27 = r30 + 0x14u;
                    wr8(0x803c1de7u, 0u);
                    r28 = 0x803c1d40u;
                    r26 = 0u;
                    while (r26 < rd32(0x803c1dacu)) {
                        r0 = (u32)rd8(r28 + 0x70u);
                        c0lt = (s32)r0 < 1;
                        if (r0 == 1u) {
                            a.r[0] = 0x803c1dccu;
                            a.r[1] = r27;
                            a.r[2] = 0x10u;
                            (void)tc_call(0x80004338u, &a);
                            wr8(0x803c1de7u, 1u);
                            r27 = r27 + 0x10u;
                        } else {
                            if (!c0lt) {
                                r3 = 0u;
                                return r3;
                            }
                            if ((s32)r0 < 0) {
                                r3 = 0u;
                                return r3;
                            }
                            a.r[0] = 0x803c1dc0u;
                            a.r[1] = r27;
                            a.r[2] = 0xcu;
                            (void)tc_call(0x80004338u, &a);
                            r27 = r27 + 0xcu;
                        }
                        r28 = r28 + 1u;
                        r26 = r26 + 1u;
                    }
                    wr8(0x803c1de5u, 0u);
                    r3 = 1u;
                    wr8(0x803c1de4u, 0u);
                    wr8(0x803c1de6u, 0u);
                    wr32(0x803c1df0u, 1u);
                    wr32(0x803c1df4u, (u32)param_1);
                    wr32(0x803c1de0u, 1u);
                } else {
                    r3 = 0u;
                }
            } else {
                r3 = 0u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
