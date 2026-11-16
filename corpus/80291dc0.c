#include "tc_rt.h"

void fn_80291dc0(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
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
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr8(0x817fdff6u, 6u);
    wr8(0x817fdff7u, 0xffu);
    r0 = (u32)rd16((u32)param_2 + 0x10u);
    c0lt = (s32)r0 < 12;
    do {
        if (r0 == 0xcu) {
            wr8(0x817fdff7u, (u8)rd16((u32)param_2 + 6u));
            a.r[0] = 0x817fdff0u;
            a.r[1] = (u32)param_1 + 8u;
            f1 = tc_callf(0x8028d2a4u, &a);
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
            if ((u32)rd8((u32)param_1 + 0x1cu) != 3u) {
                a.r[0] = (u32)rd8(0x817fdff7u);
                r3 = tc_call(0x802a3000u, &a);
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
                if ((r3 & 0xffu) == 0u) {
                    wr8(0x817fdff6u, 0u);
                    a.r[0] = (u32)param_1;
                    f1 = tc_callf(0x80292f00u, &a);
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
                }
            }
        } else {
            if (c0lt && (s32)r0 >= 11) {
                a.r[0] = 0x817fdff0u;
                a.r[1] = (u32)param_2 + 8u;
                f1 = tc_callf(0x8028d2a4u, &a);
                r3 = (u32)rd8((u32)param_1 + 0x16u);
                if (r3 != 0xffu) {
                    wr8(0x817fdff7u, (u8)r3);
                    wr8(0x817fdff6u, 0u);
                } else {
                    a.r[0] = (u32)param_2 + 8u;
                    a.r[1] = (u32)rd16((u32)param_2 + 0xeu);
                    a.r[2] = 0x817fdfe8u;
                    r3 = tc_call(0x802a2e70u, &a);
                    f1 = tc_lastf();
                    if ((r3 & 0xffu) == 0u) {
                        r4 = (u32)rd8(0x817fdfe8u);
                        wr8(0x817fdff6u, 0u);
                        wr8(0x817fdff7u, (u8)r4);
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
                        a.r[2] = (u32)rd16((u32)param_2 + 0xeu);
                        a.r[3] = 0u;
                        a.r[4] = (u32)rd8((u32)param_2 + 0x12u);
                        a.r[5] = (u32)rd8((u32)param_2 + 0x13u);
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        f1 = tc_callf(0x80292f80u, &a);
                        wr8((u32)rd8(0x817fdfe8u) - 0x7fac26c4u, rd8((u32)param_1 + 0x12u));
                    }
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x80293090u, &a);
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
                break;
            }
            if ((u32)rd8(0x80571b80u) >= 5u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x504u;
                a.r[1] = 0x80392ec0u;
                a.r[2] = 6u;
                a.r[3] = param_r6;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                f1 = tc_callf(0x8028cc54u, &a);
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
            }
        }
    } while (0);
    a.r[0] = (u32)rd16((u32)param_2 + 0x10u);
    a.r[1] = 0x817fdff0u;
    a.r[2] = 0x8053d728u;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    (void)tc_call(rd32(0x8053d94cu), &a);
    return;
}
