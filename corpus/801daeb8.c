#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801daeb8(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r5 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
    if ((u32)param_2 <= 0x10u) {
        r3 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fc8af80u);
        sw_ = r3;
        switch (sw_) {
        case 0x801daf34u:
            if ((u32)rd8(param_1 + 0xd10u) != 4u || (s32)r5 < 75) {
                f1 = (f64)rdf32(param_1 + 0x2e0u);
                if (!(f1 < (f64)rdf32(0x8057612cu))) {
                    f0 = (f64)rdf32(0x80576188u);
                    if (!((f1 > f0) || (f1 == f0))) {
                        r3 = tc_call(0x80040b64u, &a);
                        f1 = tc_lastf();
                        r4 = 0x51ec0000u;
                        r5 = 2u;
                        if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) > 0x32u) {
                            r5 = 1u;
                        }
                        wr32(param_1 + 0xd0cu, r5);
                        break;
                    }
                    wr32(param_1 + 0xd0cu, 2u);
                    break;
                }
                if ((s32)r5 < 80) {
                    if ((s32)r5 < 50) {
                        wr32(param_1 + 0xd0cu, 0xdu);
                        break;
                    }
                    wr32(param_1 + 0xd0cu, 1u);
                    break;
                }
                wr32(param_1 + 0xd0cu, 2u);
                break;
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
            f1 = rdf64(0x80576190u);
            f31 = (f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f1);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
            f31 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576190u)), f31);
            r3 = tc_call(0x801dae7cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            if ((s32)r3 <= 2) {
                f0 = (f64)rdf32(0x805760b8u);
                if ((f31 < f0) || (f31 == f0)) {
                    wr32(param_1 + 0xd0cu, 0x10u);
                    break;
                }
            }
            wr32(param_1 + 0xd0cu, 0xcu);
            break;
        case 0x801db110u:
            r3 = 4u;
            r4 = rd32(param_1 + 0xdf4u);
            if ((u32)rd8(param_1 + 0xd10u) == 4u) {
                r3 = 6u;
            }
            if ((s32)r4 < (s32)r3) {
                wr32(param_1 + 0xd0cu, 0u);
                break;
            }
            if ((s32)r5 < 30) {
                wr32(param_1 + 0xd0cu, 0u);
                break;
            }
            wr32(param_1 + 0xd0cu, 9u);
            break;
        case 0x801db158u:
            break;
        case 0x801db0ccu:
            wr32(param_1 + 0xd0cu, 0u);
            break;
        case 0x801db0d8u:
            wr32(param_1 + 0xd0cu, 8u);
            break;
        case 0x801db0e4u:
            wr32(param_1 + 0xd0cu, 4u);
            break;
        case 0x801db074u:
            wr32(param_1 + 0xd0cu, 0xau);
            break;
        case 0x801db080u:
            if ((s32)r5 < 20) {
                r3 = tc_call(0x80040b64u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = 0u;
                if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) <= 0x32u) {
                    wr32(param_1 + 0xd0cu, 7u);
                    break;
                }
                wr32(param_1 + 0xd0cu, 6u);
                break;
            }
            wr32(param_1 + 0xd0cu, 4u);
            break;
        case 0x801db0f0u:
            if ((s32)r5 < 100) {
                wr32(param_1 + 0xd0cu, 0u);
                break;
            }
            wr32(param_1 + 0xd0cu, 9u);
            break;
        case 0x801daf28u:
            wr32(param_1 + 0xd0cu, 0u);
            break;
        case 0x801daf1cu:
            wr32(param_1 + 0xd0cu, 0xeu);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = f1;
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
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = (f64)px_w2f(rd32(r3 + 8u));
    f0 = (f64)rdf32(0x80576148u);
    if (((f1 > f0) || (f1 == f0)) && (u32)param_2 != 0xeu && (u32)param_2 != 0xfu && (u32)param_2 != 6u && (u32)param_2 != 7u) {
        if ((u32)rd8(param_1 + 0xd10u) != 4u) {
            wr32(param_1 + 0xd0cu, 0xfu);
        } else {
            wr32(param_1 + 0xd0cu, 0xeu);
        }
        wr8(param_1 + 0xd10u, 4u);
    }
    return;
}
