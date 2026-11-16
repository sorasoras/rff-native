#include "tc_rt.h"

void fn_8029c8b4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r12 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80295360u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80295188u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            return;
        }
    }
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x803948e8u;
        a.r[2] = (u32)rd8(param_1);
        a.r[3] = (u32)rd8(param_1 + 1u);
        a.r[4] = (u32)rd8(param_1 + 2u);
        a.r[5] = (u32)rd8(param_1 + 3u);
        a.r[6] = (u32)rd8(param_1 + 4u);
        a.r[7] = (u32)rd8(param_1 + 5u);
        f1 = tc_callf(0x8028cce4u, &a);
    }
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x8039492cu;
        a.r[2] = param_3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc6cu, &a);
    }
    if ((u32)rd8(0x8053df8eu) < 1u) {
        wr8(r31 + 0x83u, 0xffu);
    } else {
        wr8(r31 + 0x83u, (u8)param_3);
    }
    wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) | 0x10u));
    a.r[0] = r31 + 0x25u;
    a.r[1] = param_2;
    a.r[2] = 0x10u;
    f1 = tc_callf(0x80004338u, &a);
    if (((u32)rd8(r31 + 0x76u) & 8u) == 0u || (((u32)rd8(r31 + 0x81u) & 0x40u) != 0u && (u32)rd8(r31 + 0x85u) == 0u)) {
        wr8(r31 + 0x82u, 1u);
    } else {
        r12 = rd32(0x8053f26cu);
        if (r12 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r31 + 0x22u;
            a.r[2] = r31 + 0x35u;
            a.r[3] = param_2;
            a.r[4] = (u32)rd8(r31 + 0x83u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(r12, &a);
        }
        r27 = 0u;
        r28 = 0x8053d958u;
        do {
            r12 = rd32(r28 + 0x1924u);
            if (r12 != 0u) {
                a.r[0] = param_1;
                a.r[1] = r31 + 0x22u;
                a.r[2] = r31 + 0x35u;
                a.r[3] = param_2;
                a.r[4] = (u32)rd8(r31 + 0x83u);
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
            }
            r27 = r27 + 1u;
            r28 = r28 + 4u;
        } while ((s32)r27 < 2);
    }
    return;
}
