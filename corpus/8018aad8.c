#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8018aad8(f64 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r6 = (u32)param_2 + (((u32)param_4 << 2u) & 0xfffffffcu);
    f2 = rdf64(0x80575270u);
    r8 = (u32)rd8(0x80492823u);
    r7 = rd32(r6 + 0x3fcu);
    wrf32d(r7 + 0xb0u, param_1);
    wrf32d(rd32(r6 + 0x3fcu) + 0x74u, (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f2));
    r3 = rd32(r6 + 0x3fcu);
    a.r[0] = r3;
    a.r[1] = (u32)param_4;
    a.r[2] = (u32)param_4;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.f[0] = param_1;
    a.f[1] = f2;
    (void)tc_call(rd32(rd32(r3) + 0x64u), &a);
    r3 = rd32(rd32((u32)param_2 + (((u32)param_4 << 2u) & 0xfffffffcu) + 0x3fcu) + 0x70u);
    if (r3 != 0u) {
        wrf32d(r3 + 0x58u, (f64)rdf32(0x80575278u));
    }
    a.f[0] = param_1;
    a.r[0] = rd32((u32)param_2 + (((u32)param_4 << 2u) & 0xfffffffcu) + 0x3fcu);
    (void)tc_call(0x80198e04u, &a);
    r3 = rd32((u32)param_2 + (((u32)param_4 << 2u) & 0xfffffffcu) + 0x3fcu);
    wr32(r3 + 0x80u, rd32(r3 + 0x80u) | 0x40000000u);
    if ((u32)param_3 != 6u || rd32((u32)param_2 + 4u) == 0u) {
        a.r[0] = (u32)param_2;
        a.r[1] = (u32)param_4;
        a.r[2] = 0u;
        (void)tc_call(0x8018ad6cu, &a);
    } else {
        r3 = tc_call(0x80081094u, &a);
        f1 = tc_lastf();
        r0 = (u32)param_4 - 0xau;
        if (r0 <= 0xcu) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r4 = rd32(r0 - 0x7fc90864u);
            sw_ = r4;
            switch (sw_) {
            case 0x8018ac2cu:
                r3 = tc_call(0x80081034u, &a);
                if ((r3 & 0xffu) == 1u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = (u32)param_4;
                    a.r[2] = 1u;
                    (void)tc_call(0x8018ad6cu, &a);
                    break;
                }
                a.r[0] = (u32)param_2;
                a.r[1] = (u32)param_4;
                a.r[2] = 0u;
                (void)tc_call(0x8018ad6cu, &a);
                break;
            case 0x8018ac64u:
                r3 = tc_call(0x80081034u, &a);
                if ((r3 & 0xffu) == 2u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = (u32)param_4;
                    a.r[2] = 1u;
                    (void)tc_call(0x8018ad6cu, &a);
                    break;
                }
                a.r[0] = (u32)param_2;
                a.r[1] = (u32)param_4;
                a.r[2] = 0u;
                (void)tc_call(0x8018ad6cu, &a);
                break;
            case 0x8018ac9cu:
                r3 = tc_call(0x80081034u, &a);
                if ((r3 & 0xffu) == 3u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = (u32)param_4;
                    a.r[2] = 1u;
                    (void)tc_call(0x8018ad6cu, &a);
                    break;
                }
                a.r[0] = (u32)param_2;
                a.r[1] = (u32)param_4;
                a.r[2] = 0u;
                (void)tc_call(0x8018ad6cu, &a);
                break;
            case 0x8018abf8u:
                r3 = tc_call(0x80081034u, &a);
                if ((r3 & 0xffu) == 0u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = (u32)param_4;
                    a.r[2] = 1u;
                    (void)tc_call(0x8018ad6cu, &a);
                    break;
                }
                a.r[0] = (u32)param_2;
                a.r[1] = (u32)param_4;
                a.r[2] = 0u;
                (void)tc_call(0x8018ad6cu, &a);
                break;
            case 0x8018acd4u:
                r0 = r3 & 0xffu;
                if (r0 == 1u || r0 == 0x1eu) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = (u32)param_4;
                    a.r[2] = 1u;
                    (void)tc_call(0x8018ad6cu, &a);
                    break;
                }
                a.r[0] = (u32)param_2;
                a.r[1] = (u32)param_4;
                a.r[2] = 0u;
                (void)tc_call(0x8018ad6cu, &a);
                break;
            case 0x8018ad10u:
                r0 = r3 & 0xffu;
                if (r0 == 0xfu || r0 == 0x10u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = (u32)param_4;
                    a.r[2] = 1u;
                    (void)tc_call(0x8018ad6cu, &a);
                    break;
                }
                a.r[0] = (u32)param_2;
                a.r[1] = (u32)param_4;
                a.r[2] = 0u;
                (void)tc_call(0x8018ad6cu, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return;
            }
        }
    }
    return;
}
