#include "tc_rt.h"

void fn_802f95f8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    c0eq = rd32(param_1) == 0u;
    if (!c0eq && !c0eq) {
        if (rd32(param_1 + 4u) != 0u) {
            r31 = param_1 + 8u;
            while (rd32(param_1 + 4u) != 0u) {
                r29 = rd32(r31 + 4u);
                if (r29 != 0u) {
                    r30 = r29 + 0xcu;
                    while (r30 != rd32(r29 + 0xcu)) {
                        r30 = rd32(r30 + 4u);
                        if (r30 != 0u) {
                            r12 = rd32(r30 + 0x10u);
                            if (r12 != 0u) {
                                a.r[0] = rd32(r30 + 8u);
                                a.r[1] = rd32(r30 + 0xcu);
                                a.r[2] = rd32(r30 + 0x14u);
                                a.f[0] = f1;
                                f1 = tc_callf(r12, &a);
                            }
                        }
                    }
                    r3 = r29 + 8u;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802dea2cu, &a);
                    }
                }
                a.r[0] = param_1 + 4u;
                a.r[1] = r29;
                f1 = tc_callf(0x802debd0u, &a);
            }
        }
        a.r[0] = rd32(param_1);
        a.r[1] = 3u;
        (void)tc_call(0x8026d1d8u, &a);
        a.r[0] = rd32(param_1);
        (void)tc_call(0x8026d088u, &a);
        wr32(param_1, 0u);
    }
    r4 = param_2 + (u32)param_3;
    r3 = (param_2 + 3u) & 0xfffffffcu;
    if (r3 > r4) {
        return;
    }
    r4 = r4 - r3;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    r3 = tc_call(0x8026d004u, &a);
    wr32(param_1, r3);
    if (r3 == 0u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = 0x14u;
    a.r[2] = 4u;
    r3 = tc_call(0x8026d0b8u, &a);
    c0eq = r3 == 0u;
    if (c0eq) {
        r0 = 0u;
    } else {
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
        wr32(0x817fdfd8u, param_1 + 8u);
        a.r[0] = param_1 + 4u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = r5;
        (void)tc_call(0x802deba4u, &a);
        r0 = 1u;
    }
    return;
}
