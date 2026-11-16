#include "tc_rt.h"

void fn_802b32a8(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    r5 = param_3;
    wr32(0x817fdf50u, 0x817fe000u);
    r6 = 0u;
    wr32(0x817fe004u, 0x817ff000u);
    r8 = 0x817fdf58u;
    if (param_2 != 0u) {
        r7 = param_2 + 0xfff8u;
        if (param_2 > 8u) {
            r9 = r7 & 0xffffu;
            ctr = ((r9 + 7u) >> 3u) & 0x1fffffffu;
            if (r9 > 0u) {
                do {
                    wr8(r8, 0x19u);
                    r6 = r6 + 8u;
                    wr8(r8 + 1u, (u8)((s32)rd16(r5) >> 8));
                    wr8(r8 + 2u, (u8)rd16(r5));
                    wr8(r8 + 3u, 0x19u);
                    wr8(r8 + 4u, (u8)((s32)rd16(r5 + 2u) >> 8));
                    wr8(r8 + 5u, (u8)rd16(r5 + 2u));
                    wr8(r8 + 6u, 0x19u);
                    wr8(r8 + 7u, (u8)((s32)rd16(r5 + 4u) >> 8));
                    wr8(r8 + 8u, (u8)rd16(r5 + 4u));
                    wr8(r8 + 9u, 0x19u);
                    wr8(r8 + 0xau, (u8)((s32)rd16(r5 + 6u) >> 8));
                    wr8(r8 + 0xbu, (u8)rd16(r5 + 6u));
                    wr8(r8 + 0xcu, 0x19u);
                    wr8(r8 + 0xdu, (u8)((s32)rd16(r5 + 8u) >> 8));
                    wr8(r8 + 0xeu, (u8)rd16(r5 + 8u));
                    wr8(r8 + 0xfu, 0x19u);
                    wr8(r8 + 0x10u, (u8)((s32)rd16(r5 + 0xau) >> 8));
                    wr8(r8 + 0x11u, (u8)rd16(r5 + 0xau));
                    wr8(r8 + 0x12u, 0x19u);
                    wr8(r8 + 0x13u, (u8)((s32)rd16(r5 + 0xcu) >> 8));
                    wr8(r8 + 0x14u, (u8)rd16(r5 + 0xcu));
                    wr8(r8 + 0x15u, 0x19u);
                    wr8(r8 + 0x16u, (u8)((s32)rd16(r5 + 0xeu) >> 8));
                    r7 = (u32)rd16(r5 + 0xeu);
                    r5 = r5 + 0x10u;
                    wr8(r8 + 0x17u, (u8)r7);
                    r8 = r8 + 0x18u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r7 = r6 & 0xffffu;
        ctr = param_2 - r7;
        if (r7 < param_2) {
            do {
                wr8(r8, 0x19u);
                r6 = r6 + 1u;
                wr8(r8 + 1u, (u8)((s32)rd16(r5) >> 8));
                r0 = (u32)rd16(r5);
                r5 = r5 + 2u;
                wr8(r8 + 2u, (u8)r0);
                r8 = r8 + 3u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 6u;
    a.r[3] = r8 + 0x7e8020a8u;
    a.r[4] = 0x817fdf58u;
    a.r[7] = param_r10;
    (void)tc_call(0x802b2e38u, &a);
    return;
}
