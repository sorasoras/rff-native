#include "tc_rt.h"

void fn_802b5444(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_2 + (u32)rd16((u32)param_2 + 4u) + 8u;
    r30 = r31 + (u32)rd16((u32)param_2 + 2u);
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = 5u;
    a.r[2] = 0x1eu;
    f1 = tc_callf(0x8028d220u, &a);
    r6 = (u32)rd8(r31 + 1u);
    r29 = (u32)rd8(r31);
    r4 = (u32)rd8(r31 + 2u);
    r5 = ((((u32)rd8(r31 + 3u) << 8u) & 0xffffff00u) + (u32)rd8(r31 + 4u)) & 0xffffu;
    r31 = r31 + 1u;
    r6 = (r6 << 8u) & 0xffffff00u;
    r4 = (r6 + r4) & 0xffffu;
    if ((r31 + r5 + 4u) <= r30) {
        c0lt = (s32)r29 < 4;
        if (r29 == 4u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r31 + 4u;
            a.r[4] = r30;
            (void)tc_call(0x802b59a8u, &a);
        } else {
            if (!c0lt) {
                if (r29 == 6u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r31 + 4u;
                    (void)tc_call(0x802b5d38u, &a);
                    return;
                }
            } else if (r29 == 2u) {
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r31 + 4u;
                (void)tc_call(0x802b5598u, &a);
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
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = 3u;
            a.r[3] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b65b4u, &a);
            if ((u32)rd8(0x80545c50u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xa0001u;
                a.r[1] = 0x80397e78u;
                a.r[2] = r29;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
        }
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = 4u;
        a.r[3] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b65b4u, &a);
    }
    return;
}
