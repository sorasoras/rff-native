#include "tc_rt.h"

u32 fn_80297758(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0;
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
        a.r[1] = 0x80393d7cu;
        a.r[2] = (u32)rd8(param_1);
        a.r[3] = (u32)rd8(param_1 + 1u);
        a.r[4] = (u32)rd8(param_1 + 2u);
        a.r[5] = (u32)rd8(param_1 + 3u);
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x8028ccb4u, &a);
    }
    if ((u32)rd8(0x8053f1a0u) != 0u || (u32)rd8(0x8053f19cu) != 0u) {
        r3 = 2u;
    } else {
        r0 = (u32)rd8(param_1);
        if (r0 == 0u || r0 == 1u) {
            r3 = tc_call(0x80295814u, &a);
            if ((r3 & 0xffu) != 0u) {
                r3 = (u32)rd8(param_1 + 1u);
                wr8(0x8053f18cu, rd8(param_1));
                wr8(0x8053f18du, (u8)r3);
                r3 = (u32)rd8(param_1 + 3u);
                wr8(0x8053f18eu, rd8(param_1 + 2u));
                wr8(0x8053f18fu, (u8)r3);
                r3 = (u32)rd8(param_1 + 5u);
                wr8(0x8053f190u, rd8(param_1 + 4u));
                wr8(0x8053f191u, (u8)r3);
                r3 = (u32)rd8(param_1 + 7u);
                wr8(0x8053f192u, rd8(param_1 + 6u));
                wr8(0x8053f193u, (u8)r3);
                wr8(0x8053f194u, rd8(param_1 + 8u));
                wr8(0x8053f195u, rd8(param_1 + 9u));
                wr8(0x8053f19fu, 3u);
                wr32(0x8053f008u, param_3);
                wr32(0x8053f00cu, param_2);
                wr8(0x8053f197u, 0u);
                r5 = (u32)rd8(param_1);
                wr8(0x8053f1a0u, (u8)((u32)((s32)~((r5 - 1u) | (1u - r5)) >> 31) + 2u));
                r0 = (u32)rd8(param_1 + 3u);
                c0lt = (s32)r0 < 0;
                if (r0 == 0u) {
                    wr8(0x8053f19fu, 2u);
                } else {
                    if (c0lt || (s32)r0 >= 3) {
                        r3 = 5u;
                        return r3;
                    }
                    wr8(0x8053f19fu, 1u);
                    wr8(param_1 + 3u, 0u);
                }
                a.r[0] = (u32)rd8(param_1 + 3u);
                a.r[1] = param_1 + 4u;
                r3 = tc_call(0x8029816cu, &a);
                if ((r3 & 0xffu) != 1u) {
                    wr8(0x8053f19fu, 0u);
                }
            } else {
                r3 = 6u;
            }
        } else {
            r3 = 5u;
        }
    }
    return r3;
}
