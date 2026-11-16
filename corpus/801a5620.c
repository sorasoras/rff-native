#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a5620(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    if ((u32)param_2 != 0u) {
        if ((u32)param_2 == 1u) {
            r0 = rd32(param_1 + 0xd04u);
            if (r0 <= 9u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r4 = rd32(r0 - 0x7fc8edfcu);
                sw_ = r4;
                switch (sw_) {
                case 0x801a56d8u:
                    a.r[0] = param_1;
                    (void)tc_call(0x801a39dcu, &a);
                    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32(param_1 + 0xd7cu)), (f64)rdf32(0x805758bcu));
                    a.r[0] = param_1;
                    (void)tc_call(0x801a23d8u, &a);
                    if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 0xf9bu;
                    f1 = tc_callf(0x8010a74cu, &a);
                    r5 = rd32(0x804890d4u);
                    r4 = rd32(0x804890d8u);
                    r0 = rd32(0x804890dcu);
                    r12 = rd32(rd32(param_1) + 0x2cu);
                    wr32(0x817fdfc0u, r5);
                    wr32(0x817fdfc4u, r4);
                    wr32(0x817fdfc8u, r0);
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = 0x804890d4u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    f1 = tc_callf(r12, &a);
                    f31 = f1;
                    r3 = rd32(0x817fdfc4u);
                    r0 = rd32(0x817fdfc8u);
                    wr32(0x817fdfa8u, rd32(0x817fdfc0u));
                    wr32(0x817fdfacu, r3);
                    wr32(0x817fdfb0u, r0);
                    a.f[0] = f1;
                    f1 = tc_callf(0x80262704u, &a);
                    f30 = (f64)(f32)f1;
                    a.f[0] = f31;
                    f1 = tc_callf(0x80262b10u, &a);
                    f2 = (f64)(f32)f1;
                    f1 = (f64)rdf32(0x817fdfb0u);
                    r0 = 0u;
                    f4 = (f64)rdf32(0x817fdfa8u);
                    f0 = (f64)(f32)(f1 * f30);
                    f3 = (f64)(f32)(f1 * f2);
                    wr32(0x817fdfb8u, rd32(0x817fdfc4u));
                    f2 = -f2;
                    f1 = (f64)rdf32(0x80575868u);
                    f3 = ppc_fmadds(f4, f30, f3);
                    f0 = ppc_fmadds(f4, f2, f0);
                    wrf32d(0x817fdfc0u, f3);
                    r3 = rd32(0x817fdfc0u);
                    wrf32d(0x817fdfc8u, f0);
                    wr32(0x817fdfb4u, r3);
                    f0 = (f64)rdf32(0x817fdfb4u);
                    wr32(0x817fdfbcu, rd32(0x817fdfc8u));
                    if (f1 == f0 && f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        f1 = (f64)rdf32(0x80575868u);
                        r0 = 0u;
                        if (f1 == (f64)rdf32(0x817fdfb4u) && f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu)) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            a.r[0] = 0x817fdfb4u;
                            a.r[1] = 0x817fdfb4u;
                            (void)tc_call(0x802343e4u, &a);
                        }
                    }
                    a.f[0] = (f64)rdf32(0x80575970u);
                    a.r[0] = 0x817fdfb4u;
                    a.r[1] = 0x817fdfb4u;
                    (void)tc_call(0x802343c8u, &a);
                    a.f[0] = (f64)rdf32(0x817fdfc0u);
                    a.f[1] = (f64)rdf32(0x817fdfc8u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    if (!((f64)rdf32(0x805758b8u) < f1)) {
                        a.f[0] = (f64)rdf32(0x817fdfc0u);
                        a.f[1] = (f64)rdf32(0x817fdfc8u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f0 = (f64)rdf32(0x805758c4u);
                        if (!((f0 > f1) || (f0 == f1))) {
                            a.f[0] = (f64)rdf32(0x817fdfc0u);
                            a.f[1] = (f64)rdf32(0x817fdfc8u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f2 = (f64)(f32)f1;
                        } else {
                            a.f[0] = (f64)rdf32(0x817fdfc0u);
                            a.f[1] = (f64)rdf32(0x817fdfc8u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f1 = (f64)(f32)f1;
                            f2 = (f64)(f32)((f64)rdf32(0x805758c0u) + f1);
                        }
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfc0u);
                        a.f[1] = (f64)rdf32(0x817fdfc8u);
                        f1 = tc_callf(0x80262c68u, &a);
                        f1 = (f64)(f32)f1;
                        f2 = (f64)(f32)(f1 - (f64)rdf32(0x805758c0u));
                    }
                    a.f[0] = (f64)rdf32(0x80575934u);
                    a.f[1] = f2;
                    a.f[2] = (f64)rdf32(param_1 + 0xd2cu);
                    a.f[3] = (f64)rdf32(0x80575868u);
                    a.r[0] = param_1;
                    a.r[1] = 5u;
                    a.r[2] = 0x817fdfb4u;
                    a.r[3] = 0xbu;
                    (void)tc_call(0x800a9298u, &a);
                    f0 = (f64)rdf32(0x80575868u);
                    wr32(param_1 + 0xd04u, 1u);
                    wr32(param_1 + 0xd00u, 0u);
                    wrf32d(param_1 + 0xdf4u, f0);
                    a.r[0] = param_1;
                    a.r[1] = 8u;
                    (void)tc_call(0x801a2fdcu, &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 0xfa6u;
                    (void)tc_call(0x8010a74cu, &a);
                    wrf32d(param_1 + 0x188u, (f64)rdf32(0x80575868u));
                    break;
                case 0x801a5920u:
                    r4 = rd32(param_1 + 0xdd0u);
                    wr32(0x817fdfd0u, 0x43300000u);
                    f3 = (f64)rdf32(param_1 + 0xda8u);
                    wr32(0x817fdfd4u, r4 ^ 0x80000000u);
                    f2 = (f64)(f32)((f64)rdf32(0x8057587cu) * f3);
                    f0 = (f64)(f32)(rdf64(0x817fdfd0u) - rdf64(0x805758a8u));
                    if (!((f0 > f2) || (f0 == f2))) break;
                    wr32(param_1 + 0x2b0u, 1u);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a2ab8u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 8u;
                    (void)tc_call(0x801a3958u, &a);
                    wr32(param_1 + 0x260u, 0xau);
                    break;
                case 0x801a5ac8u:
                    break;
                case 0x801a5980u:
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a37d0u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a2ab8u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 8u;
                    (void)tc_call(0x801a3958u, &a);
                    a.f[0] = (f64)rdf32(0x80575934u);
                    a.r[0] = param_1;
                    a.r[1] = 6u;
                    a.r[2] = 0u;
                    (void)tc_call(0x800a94c0u, &a);
                    f0 = (f64)rdf32(0x80575868u);
                    r0 = rd32(param_1 + 0x9cu) & 0xfdffffffu;
                    wrf32d(param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
                    wrf32d(param_1 + 0x180u, (f64)rdf32(0x804890ccu));
                    wrf32d(param_1 + 0x184u, (f64)rdf32(0x804890d0u));
                    wr32(param_1 + 0xd04u, 7u);
                    wr32(param_1 + 0xd00u, 0u);
                    wr32(param_1 + 0x9cu, r0);
                    wrf32d(param_1 + 0xde0u, f0);
                    break;
                case 0x801a59fcu:
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a37d0u, &a);
                    if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
                    a.f[0] = (f64)rdf32(0x80575934u);
                    a.r[0] = param_1;
                    a.r[1] = 7u;
                    a.r[2] = 1u;
                    (void)tc_call(0x800a94c0u, &a);
                    wr32(param_1 + 0xd04u, 8u);
                    wr32(param_1 + 0xd00u, 0u);
                    a.r[0] = param_1;
                    a.r[1] = 3u;
                    (void)tc_call(0x801a2fdcu, &a);
                    wr32(param_1 + 0xeecu, 0u);
                    break;
                case 0x801a5a48u:
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a37d0u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 3u;
                    (void)tc_call(0x801a2fdcu, &a);
                    if ((s32)rd32(param_1 + 0xd00u) > (s32)(rd32(param_1 + 0xdb4u) - 1u)) {
                        a.r[0] = param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x801a3958u, &a);
                    }
                    if ((s32)rd32(param_1 + 0xd00u) <= (s32)rd32(param_1 + 0xdb4u)) break;
                    a.f[0] = (f64)rdf32(0x80575934u);
                    a.r[0] = param_1;
                    a.r[1] = 8u;
                    a.r[2] = 0u;
                    (void)tc_call(0x800a94c0u, &a);
                    wr32(param_1 + 0xd04u, 9u);
                    wr32(param_1 + 0xd00u, 0u);
                    break;
                case 0x801a5ab4u:
                    if ((s32)rd32(param_1 + 0xd00u) <= 0) break;
                    wr32(param_1 + 0x2b0u, 1u);
                    break;
                default:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
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
    } else {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = param_1;
        a.r[1] = 4u;
        a.r[2] = 0u;
        (void)tc_call(0x800a94c0u, &a);
        wr32(param_1 + 0xdd0u, 0u);
        wr32(param_1 + 0xd04u, 0u);
        wrf32d(param_1 + 0xde8u, (f64)rdf32(0x804890d4u));
        wrf32d(param_1 + 0xdecu, (f64)rdf32(0x804890d8u));
        wrf32d(param_1 + 0xdf0u, (f64)rdf32(0x804890dcu));
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801a2ab8u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
    }
    return;
}
