#include "tc_rt.h"

void fn_802f9b24(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_r4 == 0u) {
        if (rd32(param_r3 + 4u) != 0u) {
            r30 = param_r3 + 8u;
            while (rd32(param_r3 + 4u) != 0u) {
                r28 = rd32(r30 + 4u);
                if (r28 != 0u) {
                    r29 = r28 + 0xcu;
                    while (r29 != rd32(r28 + 0xcu)) {
                        r29 = rd32(r29 + 4u);
                        if (r29 != 0u) {
                            r12 = rd32(r29 + 0x10u);
                            if (r12 != 0u) {
                                a.r[0] = rd32(r29 + 8u);
                                a.r[1] = rd32(r29 + 0xcu);
                                a.r[2] = rd32(r29 + 0x14u);
                                a.f[0] = f1;
                                f1 = tc_callf(r12, &a);
                            }
                        }
                    }
                    r3 = r28 + 8u;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802dea2cu, &a);
                    }
                }
                a.r[0] = param_r3 + 4u;
                a.r[1] = r28;
                f1 = tc_callf(0x802debd0u, &a);
            }
        }
        a.r[0] = rd32(param_r3);
        a.r[1] = 3u;
        (void)tc_call(0x8026d1d8u, &a);
        a.r[0] = rd32(param_r3);
        a.r[1] = 0x14u;
        a.r[2] = 4u;
        r3 = tc_call(0x8026d0b8u, &a);
        c0eq = r3 == 0u;
        if (c0eq) {
            return;
        }
        r5 = r3;
        if (!c0eq) {
            r4 = r3 + 0xcu;
            wr32(r3, 0u);
            wr32(r3 + 4u, 0u);
            wr32(r3 + 0xcu, 0u);
            wr32(r3 + 0x10u, 0u);
            wr32(r3 + 8u, 0u);
            wr32(r3 + 0xcu, r4);
            wr32(r3 + 0x10u, r4);
        }
        wr32(0x817fdfdcu, param_r3 + 8u);
        a.r[0] = param_r3 + 4u;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = r5;
        (void)tc_call(0x802deba4u, &a);
    } else {
        if ((s32)param_r4 < (s32)rd32(param_r3 + 4u)) {
            r30 = param_r3 + 8u;
            while ((s32)param_r4 < (s32)rd32(param_r3 + 4u)) {
                r28 = rd32(r30 + 4u);
                if (r28 != 0u) {
                    r29 = r28 + 0xcu;
                    while (r29 != rd32(r28 + 0xcu)) {
                        r29 = rd32(r29 + 4u);
                        if (r29 != 0u) {
                            r12 = rd32(r29 + 0x10u);
                            if (r12 != 0u) {
                                a.r[0] = rd32(r29 + 8u);
                                a.r[1] = rd32(r29 + 0xcu);
                                a.r[2] = rd32(r29 + 0x14u);
                                a.f[0] = f1;
                                f1 = tc_callf(r12, &a);
                            }
                        }
                    }
                    r3 = r28 + 8u;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802dea2cu, &a);
                    }
                }
                a.r[0] = param_r3 + 4u;
                a.r[1] = r28;
                f1 = tc_callf(0x802debd0u, &a);
            }
        }
        a.r[0] = rd32(param_r3);
        a.r[1] = param_r4;
        (void)tc_call(0x8026d3c4u, &a);
        a.r[0] = rd32(param_r3);
        a.r[1] = rd32(param_r3 + 4u);
        (void)tc_call(0x8026d2f0u, &a);
        a.r[0] = rd32(param_r3);
        a.r[1] = 0x14u;
        a.r[2] = 4u;
        r3 = tc_call(0x8026d0b8u, &a);
        c0eq = r3 == 0u;
        if (!c0eq) {
            r5 = r3;
            if (!c0eq) {
                r4 = r3 + 0xcu;
                wr32(r3, 0u);
                wr32(r3 + 4u, 0u);
                wr32(r3 + 0xcu, 0u);
                wr32(r3 + 0x10u, 0u);
                wr32(r3 + 8u, 0u);
                wr32(r3 + 0xcu, r4);
                wr32(r3 + 0x10u, r4);
            }
            wr32(0x817fdfd8u, param_r3 + 8u);
            a.r[0] = param_r3 + 4u;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = r5;
            (void)tc_call(0x802deba4u, &a);
        }
    }
    return;
}
