#include "tc_rt.h"

void fn_802ab8e8(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r26 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r26 = param_3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802acd40u, &a);
    f1 = tc_lastf();
    r29 = r3;
    if ((u32)rd8(0x8054161cu) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x90003u;
        a.r[1] = 0x80396c50u;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc84u, &a);
    }
    if (r29 == 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x802acd94u, &a);
        r29 = r3;
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 0u;
            f1 = tc_callf(0x802afe64u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b1754u, &a);
            if ((u32)rd8(0x8054161cu) < 4u) {
                return;
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x90003u;
            a.r[1] = 0x80396c70u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
            return;
        }
        wr8(param_1 + param_2 + 0x24u, rd8(r3));
    }
    a.r[0] = r29 + 6u;
    a.r[1] = param_1 + 0x62u;
    a.r[2] = 6u;
    f1 = tc_callf(0x80004338u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r29;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802acae8u, &a);
    wr32(r29 + 0x6cu, param_1);
    r0 = (u32)rd16(r29 + 0x12u);
    if (r0 < param_3) {
        r26 = r0;
    }
    wr16(r29 + 0x12u, (u16)r26);
    wr16(r29 + 0x14u, (u16)r26);
    if ((u32)rd8(param_1 + 0x72u) == 0u) {
        if ((u32)param_4 == 0u) {
            wr8(param_1 + 0x72u, 1u);
        } else {
            wr8(param_1 + 0x72u, 2u);
        }
    }
    if ((u32)param_4 == 0u) {
        r6 = 0u;
        r7 = 0u;
    } else {
        if ((u32)rd8(param_1 + 0x72u) == 2u) {
            wr16(r29 + 0x98u, (u16)param_5);
            if ((u32)param_5 == 0u) {
                wr8(r29 + 0x24u, 1u);
            }
            r3 = (u32)rd16(r29 + 0x9cu);
            r6 = 0xe0u;
            r0 = 7u;
            if (r3 < 7u) {
                r0 = r3;
            }
            r7 = r0 & 0xffu;
            wr16(r29 + 0x9au, (u16)r7);
        } else {
            r6 = 0u;
            r7 = 0u;
        }
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)rd16(r29 + 0x12u);
    a.r[3] = r6;
    a.r[4] = r7;
    (void)tc_call(0x802af9bcu, &a);
    return;
}
