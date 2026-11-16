#include "tc_rt.h"

u32 fn_8029472c(u32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80540118u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0002u;
        a.r[1] = 0x803938dcu;
        a.r[2] = (u32)rd8(param_1);
        a.r[3] = (u32)rd8(param_1 + 1u);
        a.r[4] = (u32)rd8(param_1 + 2u);
        a.r[5] = (u32)rd8(param_1 + 3u);
        a.r[6] = (u32)rd8(param_1 + 4u);
        a.r[7] = (u32)rd8(param_1 + 5u);
        (void)tc_call(0x8028cce4u, &a);
    }
    if (rd32(0x8053df38u) == 0u) {
        r30 = 0x8053d98cu;
        r31 = 0u;
        for (;;) {
            if ((u32)rd8(r30 + 0x119u) != 0u) {
                a.r[0] = r30 + 8u;
                a.r[1] = param_1;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 == 0u) break;
            }
            r31 = r31 + 1u;
            r30 = r30 + 0x11cu;
            if (r31 >= 4u) {
                r30 = 0u;
                break;
            }
        }
        if (r30 == 0u) {
            r3 = 7u;
        } else {
            a.r[0] = 0x8053df20u;
            a.r[1] = 9u;
            a.r[2] = 3u;
            (void)tc_call(0x8028d220u, &a);
            wr32(0x8053df38u, (u32)param_2);
            a.r[0] = (u32)rd16(r30);
            r3 = tc_call(0x802a1c2cu, &a);
            if ((r3 & 0xffu) != 0u) {
                r3 = 1u;
            } else {
                wr32(0x8053df38u, 0u);
                a.r[0] = 0x8053df20u;
                (void)tc_call(0x8028d290u, &a);
                r3 = 3u;
            }
        }
    } else {
        r3 = 2u;
    }
    return r3;
}
