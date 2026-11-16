#include "tc_rt.h"

void fn_802a7478(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r28 = param_r4;
    if (param_r4 != 0u && (u32)rd16(param_r3 + 0x78u) != 0u) {
        a.r[0] = param_r3 + 0x70u;
        a.r[1] = param_r4;
        (void)tc_call(0x8028a77cu, &a);
        a.r[0] = param_r3 + 0x70u;
        r3 = tc_call(0x8028a9f8u, &a);
        f1 = tc_lastf();
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        r28 = r3;
    } else {
        if (param_r4 == 0u) {
            a.r[0] = param_r3 + 0x70u;
            r3 = tc_call(0x8028a9f8u, &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r28 = r3;
        }
    }
    while (r28 != 0u) {
        r5 = (u32)rd16(r28 + 4u);
        if (r5 < 9u) {
            if ((u32)rd8(0x80540a20u) >= 1u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x80000u;
                a.r[1] = 0x80396550u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc6cu, &a);
            }
            a.r[0] = r28;
            (void)tc_call(0x8028a35cu, &a);
            a.r[0] = param_r3 + 0x70u;
            r3 = tc_call(0x8028a9f8u, &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r28 = r3;
        } else {
            r0 = r5 - 8u;
            wr16(r28 + 4u, (u16)r0);
            r0 = r0 & 0xffffu;
            r5 = r28 + r0;
            r3 = r5 + 0xau;
            wr16(r28 + 2u, (u16)((u32)rd16(r28 + 2u) + 4u));
            wr8(r5 + 8u, (u8)((u32)rd16(rd32(param_r3 + 0x10u) + 0x28u) | 0x2000u));
            wr8(r5 + 9u, (u8)((s32)((u32)rd16(rd32(param_r3 + 0x10u) + 0x28u) | 0x2000u) >> 8));
            r0 = (u32)rd16(0x8053d4acu);
            r4 = (u32)rd16(r28 + 2u);
            if (r4 > r0) {
                wr8(r3, (u8)r0);
                wr8(r3 + 1u, (u8)((s32)rd16(0x8053d4acu) >> 8));
                r3 = r3 + 2u;
            } else {
                wr8(r3, (u8)r4);
                wr8(r3 + 1u, (u8)((s32)rd16(r28 + 2u) >> 8));
                r3 = r3 + 2u;
            }
            wr8(r3, (u8)((u32)rd16(r28 + 2u) - 4u));
            r6 = (u32)rd16(r28 + 2u);
            wr8(r3 + 1u, (u8)((s32)(r6 - 4u) >> 8));
            wr8(r3 + 2u, (u8)rd16(param_r3 + 0x16u));
            wr8(r3 + 3u, (u8)((s32)rd16(param_r3 + 0x16u) >> 8));
            wr16(r28 + 2u, (u16)((u32)rd16(r28 + 2u) + 4u));
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = rd32(param_r3 + 0x10u);
            a.r[1] = 0u;
            a.r[2] = r28;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x802a7e04u, &a);
            a.r[0] = param_r3 + 0x70u;
            r3 = tc_call(0x8028a9f8u, &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r28 = r3;
        }
    }
    return;
}
