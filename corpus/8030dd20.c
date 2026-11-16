#include "tc_rt.h"

void fn_8030dd20(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    r27 = param_1;
    r29 = 0u;
    while ((s32)r29 < (s32)rd32(param_1 + 0x8cu)) {
        r3 = rd32(r27 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = param_3;
            r3 = tc_call(0x802f2348u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                r28 = 1u;
                break;
            }
        }
        r27 = r27 + 0x10u;
        r29 = r29 + 1u;
    }
    if (r28 != 0u) {
        if ((u32)rd8(param_1 + 0x9eu) != 0u) {
            r28 = param_1;
            r30 = 0u;
            while ((s32)r30 < (s32)rd32(param_1 + 0x8cu)) {
                r27 = r28;
                r29 = 0u;
                while ((s32)r29 < (s32)rd32(param_1 + 0x90u)) {
                    r3 = rd32(r27 + 0xcu);
                    if (r3 != 0u) {
                        r3 = rd32(r3);
                        r4 = 0u;
                        if (r3 != 0u && (u32)rd16(r3 + 0x38u) == 1u) {
                            r4 = 1u;
                        }
                        if (r4 != 0u) {
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            f1 = tc_callf(0x802462c8u, &a);
                        }
                    }
                    r27 = r27 + 4u;
                    r29 = r29 + 1u;
                }
                r28 = r28 + 0x10u;
                r30 = r30 + 1u;
            }
            wr8(param_1 + 0x9eu, 0u);
        }
        r12 = rd32(param_1 + 0x94u);
        wr8(param_1 + 0xa0u, 0u);
        wr8(param_1 + 0x9fu, 0u);
        wr8(param_1 + 0x9du, 0u);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = rd32(param_1 + 0x98u);
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
