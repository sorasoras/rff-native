#include "tc_rt.h"

u32 fn_801f8c9c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x801f8ab0u, &a);
    wr32((u32)param_1 + 4u, r3);
    if ((r3 + 0x10000u) == 0xffffu) {
        r3 = 0u;
    } else {
        a.r[0] = param_2;
        (void)tc_call(0x801f8b54u, &a);
        r31 = rd32((u32)param_1 + 4u);
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        r4 = rd32((u32)param_1 + 8u);
        r30 = r3;
        if ((r4 + 0x10000u) != 0xffffu) {
            a.r[0] = r4;
            (void)tc_call(0x8004bc54u, &a);
            wr32((u32)param_1 + 8u, 0xffffffffu);
        }
        a.r[0] = r30;
        a.r[1] = 0u;
        r3 = tc_call(0x8004bf2cu, &a);
        wr32((u32)param_1 + 8u, r3);
        r31 = (((0xffffffffu - r3) | (r3 + 1u)) >> 0x1fu) & 1u;
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r30;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        r3 = (((0u - r31) | r31) >> 0x1fu) & 1u;
    }
    return r3;
}
