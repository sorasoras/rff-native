#include "tc_rt.h"

void fn_800373f0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r7 = 0, r8 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32((u32)param_1 + 0xcu);
    r3 = tc_call(0x800369d0u, &a);
    f1 = tc_lastf();
    wr32(r30 + 0x30u, r3);
    r3 = rd32(r30 + 4u);
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = rd32(r30 + 0x30u);
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x802348dcu, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            return;
        }
    }
    r12 = rd32(r30 + 0x14u);
    if (r12 != 0u) {
        a.r[0] = r30;
        a.r[1] = rd32(r30 + 0x1cu);
        a.r[2] = rd32((u32)param_1 + 0x10u);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    if (rd32(r30 + 4u) != 0u || (rd32(r30) & 0x80000000u) == 0u) {
        r0 = (u32)rd8(0x803acbccu) & 0xffffffdfu;
        wr32(0x803acbc8u, 0u);
        r0 = r0 & 0xffffff7fu;
        r0 = r0 | 0x40u;
        wr8(0x803acbccu, (u8)r0);
        a.r[0] = r30;
        a.r[1] = (u32)param_1 + 0x14u;
        a.r[2] = (u32)param_1 + 0x18u;
        a.r[3] = (u32)param_1 + 0x1cu;
        r3 = tc_call(0x80036aa4u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8003734cu, &a);
        f1 = tc_lastf();
        wr32(r30 + 0x10u, r3);
        r8 = (u32)(s16)rd16((u32)param_1 + 0x24u);
        if (r8 != 2u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r31;
            a.r[1] = rd32(r30 + 0x10u);
            a.r[2] = rd32((u32)param_1 + 0x18u);
            a.r[3] = rd32((u32)param_1 + 0x1cu);
            a.r[4] = 0x80037258u;
            a.r[5] = r8;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80234db8u, &a);
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r31;
            a.r[1] = rd32(r30 + 0x10u);
            a.r[2] = rd32((u32)param_1 + 0x18u);
            a.r[3] = rd32((u32)param_1 + 0x1cu);
            a.r[4] = 0x80037258u;
            a.r[5] = 2u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80234db8u, &a);
        }
    } else {
        r7 = (u32)rd8(0x803acbccu) | 0x20u;
        wr32(0x803acbc8u, 0u);
        wr8(0x803acbccu, (u8)((r7 & 0xffffff7fu) | 0x40u));
        a.r[0] = r30;
        a.r[1] = (u32)param_1 + 0x14u;
        a.r[2] = (u32)param_1 + 0x18u;
        a.r[3] = (u32)param_1 + 0x1cu;
        r3 = tc_call(0x80036aa4u, &a);
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
        a.r[1] = (((u32)rd8(0x803acbccu) << 7u) & 0x4000u) - 0x7fc5b440u;
        a.r[2] = 0x20u;
        a.r[3] = rd32((u32)param_1 + 0x1cu);
        a.r[4] = 2u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80234ea0u, &a);
        wr32((((u32)rd8(0x803acbccu) >> 5u) & 4u) - 0x7fc53440u, 0x20u);
        wr32(0x803acbc8u, rd32(0x803acbc8u) + 0x20u);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8003734cu, &a);
        wr32(r30 + 0x10u, r3);
        r0 = (u32)rd8((((u32)rd8(0x803acbccu) << 7u) & 0x4000u) - 0x7fc5b440u) & 0xf0u;
        c0lt = (s32)r0 < 32;
        wr32(0x803acbd0u, r0);
        if (r0 == 0x20u) {
            a.r[0] = 0x803acbd4u;
            a.r[1] = (((u32)rd8(0x803acbccu) << 7u) & 0x4000u) - 0x7fc5b440u;
            a.r[2] = rd32(r30 + 0x10u);
            (void)tc_call(0x8008caecu, &a);
        } else if (!c0lt) {
            if (r0 == 0x30u) {
                a.r[0] = 0x803acbd4u;
                a.r[1] = (((u32)rd8(0x803acbccu) << 7u) & 0x4000u) - 0x7fc5b440u;
                a.r[2] = rd32(r30 + 0x10u);
                (void)tc_call(0x8008caa4u, &a);
            }
        } else if (r0 == 0x10u) {
            a.r[0] = 0x803acbd4u;
            a.r[1] = (((u32)rd8(0x803acbccu) << 7u) & 0x4000u) - 0x7fc5b440u;
            a.r[2] = rd32(r30 + 0x10u);
            (void)tc_call(0x8008cac4u, &a);
        }
    }
    return;
}
