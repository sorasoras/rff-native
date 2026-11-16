#include "tc_rt.h"

s32 fn_80031268(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = (u32)param_3;
    wr32(0x817fdfe8u, param_4);
    if ((u32)param_3 == 0xffffffffu) {
        r30 = rd32((u32)param_1 + 0x30u);
    }
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1;
    a.r[2] = param_2;
    a.r[3] = r30;
    r3 = tc_call(0x80030f50u, &a);
    c0lt = (s32)r30 < 1;
    r31 = r3;
    if (r30 == 1u) {
        r30 = 0u;
        while (r30 < rd32(r31 + 0x34u)) {
            r4 = rd32(r31 + 0x4cu);
            r3 = rd32(r31 + 0x38u) + (rd32(r31 + 0x3cu) * r30);
            if ((s32)r30 >= 0) {
                r0 = rd32(r4 + 0x28u);
                r4 = rd32(r4 + 0xcu);
                r0 = r0 * r30;
                r4 = r4 + r0;
            } else {
                r4 = 0u;
            }
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = rd32(r31 + 0x50u);
            (void)tc_call(0x80030b04u, &a);
            r30 = r30 + 1u;
        }
    } else if (!c0lt) {
        if ((s32)r30 < 3) {
            r30 = 0u;
            while (r30 < rd32(r31 + 0x34u)) {
                r4 = rd32(r31 + 0x4cu);
                r3 = rd32(r31 + 0x38u) + (rd32(r31 + 0x3cu) * r30);
                if ((s32)r30 >= 0) {
                    r0 = rd32(r4 + 0x28u);
                    r4 = rd32(r4 + 0xcu);
                    r0 = r0 * r30;
                    r4 = r4 + r0;
                } else {
                    r4 = 0u;
                }
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = rd32(r31 + 0x50u);
                (void)tc_call(0x80030b70u, &a);
                r30 = r30 + 1u;
            }
        }
    } else if ((s32)r30 >= 0) {
        r30 = 0u;
        while (r30 < rd32(r31 + 0x34u)) {
            r4 = rd32(r31 + 0x4cu);
            r3 = rd32(r31 + 0x38u) + (rd32(r31 + 0x3cu) * r30);
            if ((s32)r30 >= 0) {
                r0 = rd32(r4 + 0x28u);
                r4 = rd32(r4 + 0xcu);
                r0 = r0 * r30;
                r4 = r4 + r0;
            } else {
                r4 = 0u;
            }
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = rd32(r31 + 0x50u);
            (void)tc_call(0x800309e0u, &a);
            r30 = r30 + 1u;
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x800310ecu, &a);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = r31;
    (void)tc_call(0x80030df0u, &a);
    a.r[0] = r31;
    (void)tc_call(0x800311a4u, &a);
    return (s32)r31;
}
