#include "tc_rt.h"

void fn_8030e018(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    c0eq = rd32(param_1 + 0x10u) == 0u;
    if (c0eq) {
        r29 = 0u;
        if (c0eq) {
            r3 = rd32(param_1 + 8u);
            r28 = r3 - 0x114u;
            if ((s32)rd32(r3 - 0x70u) <= (s32)param_4) {
                r29 = rd32(r28 + 0x8cu) * rd32(r28 + 0x90u);
                a.r[0] = r28;
                (void)tc_call(0x8030c2e4u, &a);
                a.r[0] = r28;
                f1 = tc_callf(0x8030bf80u, &a);
                r12 = rd32(r28 + 0x94u);
                if (r12 != 0u) {
                    a.r[0] = r28;
                    a.r[1] = 2u;
                    a.r[2] = rd32(r28 + 0x98u);
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            } else {
                r29 = 0u;
            }
        }
        if (r29 == 0u) {
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
    }
    r28 = rd32(param_1 + 0x14u) - 0x114u;
    a.r[0] = r28;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    a.r[5] = param_6;
    r3 = tc_call(0x8030bd44u, &a);
    if (r3 != 0u) {
        wr32(r28 + 0xa4u, param_4 & 0xffu);
        r3 = tc_call(0x8022c2b0u, &a);
        r27 = r28 + 0x114u;
        r29 = r3;
        a.r[0] = param_1 + 0x10u;
        a.r[1] = r27;
        (void)tc_call(0x802debd0u, &a);
        r5 = rd32(param_1 + 8u);
        r3 = param_1 + 8u;
        while (r3 != r5) {
            r6 = rd32(r3 + 4u);
            if ((s32)rd32(r6 - 0x70u) <= (s32)rd32(r28 + 0xa4u)) break;
            r3 = r6;
        }
        wr32(0x817fdfc8u, r3);
        a.r[0] = param_1 + 4u;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = r27;
        (void)tc_call(0x802deba4u, &a);
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
        r29 = param_1 + 8u;
        while (r27 != r29) {
            r0 = rd32(r27 - 0x70u);
            r3 = r27 - 0x114u;
            if ((s32)r0 <= 1) break;
            if (r0 != 0xffu) {
                a.r[0] = r3;
                (void)tc_call(0x8030c8bcu, &a);
            }
            r27 = rd32(r27);
        }
        r3 = tc_call(0x802f85a0u, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        (void)tc_call(0x802f8684u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
