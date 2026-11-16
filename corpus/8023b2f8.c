#include "tc_rt.h"

void fn_8023b2f8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r0 = 0, r3 = 0, r11 = 0, r12 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_6 != 0u && (param_6 & 0x1fu) != 0u) {
        return;
    }
    if (param_4 == 0u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80387e78u;
        a.r[1] = 0x80387ee8u;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = param_6;
        a.r[6] = param_7;
        a.r[7] = 0x804e5fa0u;
        (void)tc_call(0x80228554u, &a);
    } else {
        if ((param_4 & 0x1fu) != 0u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x80387e9cu;
            a.r[1] = 0x80387ee8u;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = param_6;
            a.r[6] = param_7;
            a.r[7] = 0x804e5fa0u;
            (void)tc_call(0x80228554u, &a);
        } else {
            if (param_2 == 0u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x80387f10u;
                a.r[1] = 0x80387ee8u;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.r[4] = param_5;
                a.r[5] = param_6;
                a.r[6] = param_7;
                a.r[7] = 0x804e5fa0u;
                (void)tc_call(0x80228554u, &a);
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
                    a.r[0] = 0x80387f3cu;
                    a.r[1] = 0x80387ee8u;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.r[4] = param_5;
                    a.r[5] = param_6;
                    a.r[6] = param_7;
                    a.r[7] = 0x804e5fa0u;
                    (void)tc_call(0x80228554u, &a);
                } else {
                    r28 = rd32(0x80571680u);
                    wr8(0x80571678u, 1u);
                    r30 = (r28 << 5u) & 0xffffffe0u;
                    r12 = r30 - 0x7fb1a060u;
                    r11 = (u32)rd8(r12 + 8u);
                    if (((((0u - r11) | r11) >> 0x1fu) & 1u) == 1u) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0x80387c60u;
                        a.r[1] = r28;
                        a.r[2] = param_3;
                        a.r[3] = param_4;
                        a.r[4] = param_5;
                        a.r[5] = param_6;
                        a.r[6] = param_7;
                        a.r[7] = 0x804e5fa0u;
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
                    if ((rd32(r12 + 0xcu) + 0x1150000u) != 0xdaedu) {
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
                        a.r[4] = param_5;
                        a.r[5] = param_6;
                        a.r[6] = param_7;
                        a.r[7] = 0x804e5fa0u;
                        (void)tc_call(0x80228554u, &a);
                        for (;;) {
                        }
                    }
                    wr32(r30 - 0x7fb1a060u, param_7);
                    r0 = r28 + 1u;
                    wr32(r12 + 4u, 1u);
                    wr8(r12 + 8u, 1u);
                    wr32(0x80571680u, r0);
                    if ((s32)r0 >= 4) {
                        wr32(0x80571680u, 0u);
                    }
                    r0 = rd32(0x8057167cu) + 1u;
                    wr32(0x8057167cu, r0);
                    r30 = ((r28 << 5u) & 0xffffffe0u) - 0x7fb1a060u;
                    if ((s32)r0 >= 4) {
                        r0 = 0u;
                        wr32(0x8057167cu, 0u);
                    }
                    r0 = (r0 << 5u) & 0xffffffe0u;
                    wr8(rd32(0x80571694u) + r0, 0x94u);
                    wr32(rd32(0x80571694u) + ((rd32(0x8057167cu) << 5u) & 0xffffffe0u) + 4u, param_1);
                    r12 = rd32(0x80571694u);
                    r3 = (rd32(0x8057167cu) << 5u) & 0xffffffe0u;
                    wr32(0x804e6064u, 0x20u);
                    r3 = r12 + r3;
                    wr32(0x804e6060u, r3);
                    wr32(0x804e6068u, param_2);
                    wr32(0x804e606cu, 0xd8u);
                    wr32(0x804e6070u, param_4);
                    wr32(0x804e6074u, param_3);
                    wr32(0x804e6078u, param_6);
                    if (param_6 == 0u) {
                        wr32(0x804e607cu, 0u);
                    } else {
                        wr32(0x804e607cu, param_5);
                    }
                    wr32(0x804e6080u, 0x804e60c0u);
                    r3 = rd32(0x80570af0u);
                    wr32(0x804e6084u, 0x20u);
                    a.r[0] = r3;
                    a.r[1] = 0x94u;
                    a.r[2] = 4u;
                    a.r[3] = 1u;
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
                        a.r[0] = 0x80387df0u;
                        a.r[1] = r3;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x80228554u, &a);
                        wr8(r30 + 8u, 0u);
                    }
                }
            }
        }
    }
    return;
}
