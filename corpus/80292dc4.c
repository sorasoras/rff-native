#include "tc_rt.h"

void fn_80292dc4(u32 param_r3)
{
    u32 ctr = 0, r3 = 0, r5 = 0, r7 = 0, r8 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    do {
        r29 = (r28 << 5u) & 0x1fe0u;
        a.r[0] = param_r3;
        a.r[1] = r29 - 0x7fac28c0u;
        r3 = tc_call(0x8028d2d8u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.r[0] = param_r3;
            a.r[1] = 0x80577d30u;
            r3 = tc_call(0x8028d2d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                if ((u32)rd8(0x80571b80u) >= 5u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x504u;
                    a.r[1] = 0x80393370u;
                    a.r[2] = r28 & 0xffu;
                    a.r[3] = (u32)rd8(r29 - 0x7fac28b2u);
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc84u, &a);
                }
                return;
            }
        }
        if ((u32)rd8(0x80571b80u) >= 5u) {
            r8 = r29 - 0x7fac28d8u;
            r5 = (u32)rd8(r8 + 0x28u);
            r7 = (u32)rd8(r8 + 0x26u);
            r8 = (u32)rd8(r8 + 0x2cu);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x504u;
            a.r[1] = 0x80393394u;
            a.r[2] = r5;
            a.r[3] = r28 & 0xffu;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028ccb4u, &a);
        }
        r28 = r28 + 1u;
    } while (r28 < 0x10u);
    r29 = 0u;
    ctr = 0x10u;
    do {
        r3 = ((r29 << 5u) & 0x1fe0u) - 0x7fac28d8u;
        if ((u32)rd8(r3 + 0x28u) == 0u) {
            r3 = r3 + 0x18u;
            a.r[0] = r3;
            a.r[1] = param_r3;
            f1 = tc_callf(0x8028d2a4u, &a);
            break;
        }
        r29 = r29 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((u32)rd8(0x80571b80u) < 5u) {
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
    a.r[0] = 0x504u;
    a.r[1] = 0x803933c8u;
    a.r[2] = r29 & 0xffu;
    a.r[3] = 0x10u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8028cc84u, &a);
    return;
}
