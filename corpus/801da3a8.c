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

void fn_801da3a8(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0xd00u, 0u);
    wr32(param_1 + 0xd04u, 0u);
    wr32(param_1 + 0xd08u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x800a9284u, &a);
    wr32(param_1 + 0xcfcu, (u32)param_2);
    f0 = (f64)rdf32(0x80576090u);
    wrf32d(param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 0x184u, (f64)rdf32(0x804890d0u));
    wrf32d(param_1 + 0x170u, (f64)rdf32(0x804890c8u));
    wrf32d(param_1 + 0x174u, (f64)rdf32(0x804890ccu));
    f1 = (f64)rdf32(0x804890d0u);
    wrf32d(param_1 + 0x178u, f1);
    wrf32d(param_1 + 0x188u, f0);
    wrf32d(param_1 + 0x18cu, f0);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x804890c8u;
    a.r[2] = 0x80490000u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    f1 = tc_callf(rd32(rd32(r3) + 0x28u), &a);
    r4 = tc_lastr4();
    r0 = rd32(param_1 + 0xcfcu);
    if (r0 <= 0x10u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc8afc4u);
        sw_ = r3;
        switch (sw_) {
        case 0x801da530u:
            r0 = rd32(param_1 + 0x9cu);
            wr32(param_1 + 0xda8u, 0u);
            r0 = r0 | 0x2000000u;
            f1 = (f64)rdf32(0x80576128u);
            wr32(param_1 + 0x9cu, r0);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 0xau;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da558u:
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 3u;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da570u:
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 4u;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da8f0u:
            break;
        case 0x801da714u:
            f1 = (f64)rdf32(0x80576128u);
            r6 = param_1 + ((u32)rd8(param_1 + 0xd10u) * 0xcu);
            f3 = (f64)rdf32(r6 + 0xd14u);
            wrf32d(param_1 + 0x84u, f3);
            f2 = (f64)rdf32(r6 + 0xd18u);
            wrf32d(param_1 + 0x88u, f2);
            f0 = (f64)rdf32(r6 + 0xd1cu);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f3);
            wrf32d(param_1 + 8u, f2);
            wrf32d(param_1 + 0xcu, f0);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 0xbu;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da75cu:
            wr32(param_1 + 0xda0u, 0u);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xfb5u;
            r3 = tc_call(0x8010a74cu, &a);
            f3 = (f64)rdf32(param_1 + 0xd5cu);
            f2 = (f64)rdf32(param_1 + 0xd60u);
            f0 = (f64)rdf32(param_1 + 0xd64u);
            wr32(param_1 + 0xdacu, r3);
            f1 = (f64)rdf32(0x80576168u);
            wrf32d(param_1 + 0x84u, f3);
            wrf32d(param_1 + 0x88u, f2);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f3);
            wrf32d(param_1 + 8u, f2);
            wrf32d(param_1 + 0xcu, f0);
            a.f[0] = f1;
            f1 = tc_callf(0x8007edd4u, &a);
            if (!((f64)rdf32(0x805760e8u) < f1)) {
                f0 = (f64)rdf32(0x805760f0u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
            }
            f0 = (f64)rdf32(0x805760dcu);
            wrf32d(param_1 + 0x19cu, f1);
            f1 = (f64)rdf32(0x80576128u);
            wrf32d(param_1 + 0x188u, f0);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da7f8u:
            wr32(param_1 + 0xda0u, 0u);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xfb5u;
            r3 = tc_call(0x8010a74cu, &a);
            f3 = (f64)rdf32(param_1 + 0xd50u);
            f2 = (f64)rdf32(param_1 + 0xd54u);
            f0 = (f64)rdf32(param_1 + 0xd58u);
            wr32(param_1 + 0xdacu, r3);
            f1 = (f64)rdf32(0x8057616cu);
            wrf32d(param_1 + 0x84u, f3);
            wrf32d(param_1 + 0x88u, f2);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f3);
            wrf32d(param_1 + 8u, f2);
            wrf32d(param_1 + 0xcu, f0);
            a.f[0] = f1;
            f1 = tc_callf(0x8007edd4u, &a);
            if (!((f64)rdf32(0x805760e8u) < f1)) {
                f0 = (f64)rdf32(0x805760f0u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
            }
            f0 = (f64)rdf32(0x805760dcu);
            wrf32d(param_1 + 0x19cu, f1);
            f1 = (f64)rdf32(0x80576128u);
            wrf32d(param_1 + 0x188u, f0);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da894u:
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 0xbu;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da588u:
            r3 = (u32)rd8(param_1 + 0xd10u);
            if (r3 != 4u) {
                f1 = (f64)rdf32(0x80576160u);
                f2 = (f64)rdf32(0x80576164u);
                f3 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80576138u));
                f0 = (f64)rdf32(0x805760e8u);
                wr8(param_1 + 0xd11u, 4u);
                f1 = ppc_fmadds(f1, f3, f2);
                f0 = (f64)(f32)(f0 * f1);
                a.f[0] = (f64)(f32)px_fdiv(f0, f2);
                f1 = tc_callf(0x8007edd4u, &a);
                if (!((f64)rdf32(0x805760e8u) < f1)) {
                    f0 = (f64)rdf32(0x805760f0u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
                }
                wrf32d(param_1 + 0x19cu, f1);
            } else {
                r3 = tc_call(0x80040b64u, &a);
                if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) <= 0x32u) {
                    a.r[0] = param_1;
                    r3 = tc_call(0x801da948u, &a);
                    wr8(param_1 + 0xd11u, (u8)r3);
                } else {
                    r3 = tc_call(0x80040b64u, &a);
                    wr8(param_1 + 0xd11u, (u8)(r3 & 3u));
                }
                a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805760e8u) * (f64)(f32)((f64)rdf32(0x80576160u) * (f64)(f32)(px_b2f((u64)rd8(param_1 + 0xd11u) | 0x4330000000000000ull) - rdf64(0x80576138u)))), (f64)rdf32(0x80576164u));
                f1 = tc_callf(0x8007edd4u, &a);
                if (!((f64)rdf32(0x805760e8u) < f1)) {
                    f0 = (f64)rdf32(0x805760f0u);
                    if ((f0 > f1) || (f0 == f1)) {
                        f1 = (f64)(f32)((f64)rdf32(0x805760ecu) + f1);
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x805760ecu));
                }
                wrf32d(param_1 + 0x19cu, f1);
            }
            f1 = (f64)rdf32(0x80576128u);
            wrf32d(param_1 + 0x188u, (f64)rdf32(0x80576144u));
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 0xau;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da6dcu:
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xfb5u;
            r3 = tc_call(0x8010a74cu, &a);
            wr32(param_1 + 0xdacu, r3);
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 2u;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) & 0xffbfffffu);
            break;
        case 0x801da8acu:
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 5u;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da8c4u:
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 6u;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da4c4u:
            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            (void)tc_call(0x80056b64u, &a);
            f2 = (f64)rdf32(0x80576158u);
            f0 = (f64)rdf32(0x8057615cu);
            f1 = (f64)rdf32(0x80576128u);
            r6 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            wrf32d(r6 + 0x1d8u, (f64)rdf32(0x80576154u));
            wrf32d(r6 + 0x1d0u, f2);
            wrf32d(r6 + 0x1d4u, f0);
            wr32(param_1 + 0xdb0u, 0u);
            wr32(param_1 + 0xdb4u, 0u);
            wr32(param_1 + 0xdb8u, 0u);
            wr32(param_1 + 0xdbcu, 0u);
            wr32(param_1 + 0xdc0u, 0u);
            wr32(param_1 + 0xdc4u, 0u);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 8u;
            a.r[2] = 1u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da460u:
            f3 = (f64)rdf32(0x80576150u);
            f1 = (f64)rdf32(0x80576128u);
            r6 = param_1 + ((u32)rd8(param_1 + 0xd10u) * 0xcu);
            f2 = (f64)px_w2f(rd32(r6 + 0xd14u));
            f0 = (f64)px_w2f(rd32(r6 + 0xd1cu));
            wrf32d(param_1 + 0x84u, f2);
            wrf32d(param_1 + 0x88u, f3);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f2);
            wrf32d(param_1 + 8u, f3);
            wrf32d(param_1 + 0xcu, f0);
            a.f[0] = f1;
            a.r[0] = param_1;
            a.r[1] = 0xbu;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        case 0x801da8dcu:
            a.f[0] = (f64)rdf32(0x80576128u);
            a.r[0] = param_1;
            a.r[1] = 9u;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            r4 = tc_lastr4();
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
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
    if (rd32(param_1 + 0xda4u) == 1u) {
        f1 = (f64)rdf32(param_1 + 0xdf0u);
        if ((f64)rdf32(0x80576090u) != f1) {
            f1 = (f64)(f32)((f64)rdf32(0x805760d8u) * f1);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x50u), &a);
        }
    }
    return;
}
