#include "tc_rt.h"

u32 fn_802642ac(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (((u32)param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if ((rd32(r31 + 0xcu) & 0x10u) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        wr32(r31 + 0xcu, rd32(r31 + 0xcu) & 0xffffffefu);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        f1 = tc_callf(0x80262ec4u, &a);
        r3 = rd32(r31 + 0x24u);
        if ((s32)r3 > 0) {
            r29 = rd32(r31 + 0x2cu);
            r0 = r3 - 1u;
            wr32(r31 + 0x24u, r0);
            if ((s32)r0 > 0) {
                a.r[0] = r31 + 0x28u;
                a.r[1] = r31 + 0x30u;
                a.r[2] = (rd32(r31 + 0x24u) << 3u) & 0xfffffff8u;
                f1 = tc_callf(0x802591b4u, &a);
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r29, &a);
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}
