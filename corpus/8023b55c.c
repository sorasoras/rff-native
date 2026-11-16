#include "tc_rt.h"

u32 fn_8023b55c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_2 == 0u || param_3 == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80387f80u;
        a.r[1] = 0x80387f64u;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x80228554u, &a);
        r3 = 0u;
    } else {
        if ((param_2 & 0x1fu) != 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x80387fa4u;
            a.r[1] = 0x80387f64u;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x80228554u, &a);
            r3 = 0u;
        } else {
            if ((param_3 & 0x1fu) != 0u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x80387fccu;
                a.r[1] = 0x80387f64u;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x80228554u, &a);
                r3 = 0u;
            } else {
                r11 = rd32(0x80571680u);
                r10 = (r11 << 5u) & 0xffffffe0u;
                r8 = r10 - 0x7fb1a060u;
                wr8(0x80571678u, 1u);
                r7 = (u32)rd8(r8 + 8u);
                if (((((0u - r7) | r7) >> 0x1fu) & 1u) == 1u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x80387c60u;
                    a.r[1] = r11;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = 0x804e5fa0u;
                    a.r[7] = r10;
                    f1 = tc_callf(0x80228554u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80387c98u;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80228554u, &a);
                    for (;;) {
                    }
                }
                r7 = rd32(r8 + 0xcu);
                if ((r7 + 0x1150000u) != 0xdaedu) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x80387cc8u;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = 0x804e5fa0u;
                    a.r[7] = r10;
                    (void)tc_call(0x80228554u, &a);
                    for (;;) {
                    }
                }
                wr32(r10 - 0x7fb1a060u, param_4);
                r0 = r11 + 1u;
                wr32(r8 + 4u, 1u);
                wr8(r8 + 8u, 1u);
                wr32(0x80571680u, r0);
                if ((s32)r0 >= 4) {
                    wr32(0x80571680u, 0u);
                }
                r0 = rd32(0x8057167cu) + 1u;
                wr32(0x8057167cu, r0);
                r30 = ((r11 << 5u) & 0xffffffe0u) - 0x7fb1a060u;
                if ((s32)r0 >= 4) {
                    r0 = 0u;
                    wr32(0x8057167cu, 0u);
                }
                r0 = (r0 << 5u) & 0xffffffe0u;
                wr8(rd32(0x80571694u) + r0, 0x92u);
                wr32(rd32(0x80571694u) + ((rd32(0x8057167cu) << 5u) & 0xffffffe0u) + 4u, param_1);
                r12 = rd32(0x80571694u);
                r3 = (rd32(0x8057167cu) << 5u) & 0xffffffe0u;
                wr32(0x804e6068u, param_2);
                r12 = r12 + r3;
                r3 = rd32(0x80570af0u);
                wr32(0x804e6070u, param_3);
                wr32(0x804e6060u, r12);
                wr32(0x804e6064u, 0x20u);
                wr32(0x804e606cu, 4u);
                wr32(0x804e6074u, 4u);
                a.r[0] = r3;
                a.r[1] = 0x92u;
                a.r[2] = 1u;
                a.r[3] = 2u;
                a.r[4] = 0x804e6060u;
                a.r[5] = 0x8023aae0u;
                a.r[6] = r30;
                r3 = tc_call(0x80270114u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80387ff4u;
                    a.r[1] = 0x80387f64u;
                    a.r[2] = r3;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80228554u, &a);
                    r3 = 0u;
                    wr8(r30 + 8u, 0u);
                } else {
                    r3 = 1u;
                }
            }
        }
    }
    return r3;
}
