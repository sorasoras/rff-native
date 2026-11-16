#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801ad194(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0, t9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0, t5 = 0.0, t7 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
    f1 = tc_lastf();
    f3 = rdf64(0x80575ae8u);
    f31 = (f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f3);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = f3;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
    f0 = (f64)rdf32(0x80575af0u);
    f3 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80575ae8u)), f31);
    if ((f3 < f0) || (f3 == f0)) {
        wr32(param_1 + 0xd30u, 1u);
        wr32(param_1 + 0xf64u, 0x801ad8d4u);
        if ((u32)(s8)rd8(0x80571368u) == 0u) {
            wr32(0x804dbe84u, 0x80372350u);
            a.r[0] = 0x804dbe84u;
            r3 = tc_call(0x801c38acu, &a);
            wr32(0x804dbe88u, r3);
            wr32(0x804dbe84u, 0x80372330u);
            (void)tc_call(0x800f7080u, &a);
            a.r[0] = 0x804dbeb0u;
            (void)tc_call(0x8006f1b4u, &a);
            wr32(0x804dbeb0u, 0x803731e0u);
            a.r[0] = 0x804dbe84u;
            a.r[1] = 0x801aca34u;
            a.r[2] = 0x804dbe48u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571368u, 1u);
        }
        a.r[0] = param_1 + 0xcfcu;
        a.r[1] = rd32(0x804dbe88u);
        (void)tc_call(0x801c3608u, &a);
    } else {
        r31 = rd32(param_1 + 0xd04u);
        if ((u32)(s8)rd8(0x80571340u) == 0u) {
            wr32(0x804db65cu, 0x80371eb0u);
            a.r[0] = 0x804db65cu;
            r3 = tc_call(0x801c38acu, &a);
            wr32(0x804db660u, r3);
            wr32(0x804db65cu, 0x80373170u);
            wr8(0x80571340u, 1u);
        }
        if (r31 != rd32(0x804db660u)) {
            if ((u32)(s8)rd8(0x80571350u) == 0u) {
                wr32(0x804db668u, 0x80371e70u);
                a.r[0] = 0x804db668u;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804db66cu, r3);
                wr32(0x804db668u, 0x80373130u);
                wr8(0x80571350u, 1u);
            }
            if (r31 != rd32(0x804db66cu)) {
                if ((u32)(s8)rd8(0x80571351u) == 0u) {
                    wr32(0x804db674u, 0x80371e50u);
                    a.r[0] = 0x804db674u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804db678u, r3);
                    wr32(0x804db674u, 0x80373110u);
                    wr8(0x80571351u, 1u);
                }
                if (r31 != rd32(0x804db678u)) {
                    if ((u32)(s8)rd8(0x80571356u) == 0u) {
                        wr32(0x80571358u, 0x80371e30u);
                        a.r[0] = 0x80571358u;
                        r3 = tc_call(0x801c38acu, &a);
                        wr32(0x8057135cu, r3);
                        wr32(0x80571358u, 0x803730d0u);
                        wr8(0x80571356u, 1u);
                    }
                    if (r31 != rd32(0x8057135cu)) {
                        return;
                    }
                }
            }
        }
        r0 = rd32(param_1 + 0xf6cu) + 1u;
        wr32(param_1 + 0xf6cu, r0);
        if ((s32)r0 >= 16) {
            wr32(param_1 + 0xf6cu, 0u);
            r3 = tc_call(0x80040b64u, &a);
            r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
            r3 = r3 - 0x14u;
            if ((s32)r3 <= 0) {
                a.r[0] = param_1;
                r3 = tc_call(0x801c298cu, &a);
                if (r3 == 0u) {
                    if ((u32)(s8)rd8(0x8057136au) == 0u) {
                        wr32(0x804dc008u, 0x803721b0u);
                        a.r[0] = 0x804dc008u;
                        r3 = tc_call(0x801c38acu, &a);
                        wr32(0x804dc00cu, r3);
                        wr32(0x804dc008u, 0x80372190u);
                        a.r[0] = 0x804dc014u;
                        (void)tc_call(0x8006f1b4u, &a);
                        wr32(0x804dc014u, 0x80350198u);
                        a.r[0] = 0x804dc0f8u;
                        (void)tc_call(0x80157d94u, &a);
                        a.r[0] = 0x804dc008u;
                        a.r[1] = 0x801ad128u;
                        a.r[2] = 0x804dbe54u;
                        (void)tc_call(0x802551b8u, &a);
                        wr8(0x8057136au, 1u);
                    }
                    a.r[0] = param_1 + 0xcfcu;
                    a.r[1] = rd32(0x804dc00cu);
                    (void)tc_call(0x801c3608u, &a);
                    return;
                }
                if ((u32)(s8)rd8(0x8057136bu) == 0u) {
                    wr32(0x804dc14cu, 0x80372290u);
                    a.r[0] = 0x804dc14cu;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804dc150u, r3);
                    wr32(0x804dc14cu, 0x80372270u);
                    wr8(0x8057136bu, 1u);
                }
                a.r[0] = param_1 + 0xcfcu;
                a.r[1] = rd32(0x804dc150u);
                (void)tc_call(0x801c3608u, &a);
            } else {
                r3 = r3 - 0x14u;
                if ((s32)r3 <= 0) {
                    if ((u32)(s8)rd8(0x8057136bu) == 0u) {
                        wr32(0x804dc14cu, 0x80372290u);
                        a.r[0] = 0x804dc14cu;
                        r3 = tc_call(0x801c38acu, &a);
                        wr32(0x804dc150u, r3);
                        wr32(0x804dc14cu, 0x80372270u);
                        wr8(0x8057136bu, 1u);
                    }
                    a.r[0] = param_1 + 0xcfcu;
                    a.r[1] = rd32(0x804dc150u);
                    (void)tc_call(0x801c3608u, &a);
                } else {
                    r3 = r3 - 0x14u;
                    if ((s32)r3 <= 0) {
                        if ((u32)(s8)rd8(0x8057136eu) == 0u) {
                            wr32(0x804dc180u, 0x80372390u);
                            a.r[0] = 0x804dc180u;
                            r3 = tc_call(0x801c38acu, &a);
                            f0 = (f64)rdf32(0x80575af4u);
                            wr32(0x804dc184u, r3);
                            wr32(0x804dc180u, 0x80372370u);
                            wrf32d(0x804dc198u, f0);
                            wrf32d(0x804dc194u, f0);
                            wrf32d(0x804dc190u, f0);
                            wrf32d(0x804dc1a4u, f0);
                            wrf32d(0x804dc1a0u, f0);
                            wrf32d(0x804dc19cu, f0);
                            wr8(0x8057136eu, 1u);
                        }
                        r3 = rd32(((rd32(0x804dc184u) << 2u) & 0xfffffffcu) - 0x7fb23668u);
                        t5 = (f64)rdf32(0x804890ccu);
                        t7 = (f64)rdf32(0x804890d0u);
                        t9 = r3 + 0x1cu;
                        wrf32d(t9, (f64)rdf32(0x804890c8u));
                        wrf32d(t9 + 4u, t5);
                        wrf32d(r3 + 0x24u, t7);
                        wrf32d(r3 + 0x28u, (f64)rdf32(0x80575af4u));
                        if ((u32)(s8)rd8(0x8057136eu) == 0u) {
                            wr32(0x804dc180u, 0x80372390u);
                            a.r[0] = 0x804dc180u;
                            r3 = tc_call(0x801c38acu, &a);
                            f0 = (f64)rdf32(0x80575af4u);
                            wr32(0x804dc184u, r3);
                            wr32(0x804dc180u, 0x80372370u);
                            wrf32d(0x804dc198u, f0);
                            wrf32d(0x804dc194u, f0);
                            wrf32d(0x804dc190u, f0);
                            wrf32d(0x804dc1a4u, f0);
                            wrf32d(0x804dc1a0u, f0);
                            wrf32d(0x804dc19cu, f0);
                            wr8(0x8057136eu, 1u);
                        }
                        a.r[0] = param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804dc184u);
                        (void)tc_call(0x801c3608u, &a);
                        if ((u32)(s8)rd8(0x8057136fu) == 0u) {
                            wr32(0x804dc1acu, 0x80372310u);
                            a.r[0] = 0x804dc1acu;
                            r3 = tc_call(0x801c38acu, &a);
                            wr32(0x804dc1b0u, r3);
                            wr32(0x804dc1acu, 0x803722f0u);
                            a.r[0] = 0x804dc1c4u;
                            a.r[1] = 0x801ac944u;
                            a.r[2] = 0x801ac980u;
                            a.r[3] = 0xecu;
                            a.r[4] = 2u;
                            (void)tc_call(0x80255624u, &a);
                            a.r[0] = 0x804dc39cu;
                            (void)tc_call(0x8006f1b4u, &a);
                            wr32(0x804dc39cu, 0x80350198u);
                            a.r[0] = 0x804dc1acu;
                            a.r[1] = 0x801ad85cu;
                            a.r[2] = 0x804dbe60u;
                            (void)tc_call(0x802551b8u, &a);
                            wr8(0x8057136fu, 1u);
                        }
                        a.r[0] = param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804dc1b0u);
                        (void)tc_call(0x801c36bcu, &a);
                        if ((u32)(s8)rd8(0x80571370u) == 0u) {
                            wr32(0x804dc480u, 0x803721d0u);
                            a.r[0] = 0x804dc480u;
                            r3 = tc_call(0x801c38acu, &a);
                            f0 = (f64)rdf32(0x80575af4u);
                            wr32(0x804dc484u, r3);
                            wr32(0x804dc480u, 0x80372f10u);
                            wrf32d(0x804dc49cu, f0);
                            wrf32d(0x804dc498u, f0);
                            wrf32d(0x804dc494u, f0);
                            wrf32d(0x804dc4a8u, f0);
                            wrf32d(0x804dc4a4u, f0);
                            wrf32d(0x804dc4a0u, f0);
                            wr8(0x80571370u, 1u);
                        }
                        a.r[0] = param_1 + 0xcfcu;
                        a.r[1] = rd32(0x804dc484u);
                        (void)tc_call(0x801c36bcu, &a);
                    } else {
                        if ((s32)(r3 - 0x14u) <= 0) {
                            r3 = tc_call(0x801ac3e0u, &a);
                            if (r3 == 0u) {
                                if ((u32)(s8)rd8(0x8057136du) == 0u) {
                                    wr32(0x804dc16cu, 0x803722d0u);
                                    a.r[0] = 0x804dc16cu;
                                    r3 = tc_call(0x801c38acu, &a);
                                    wr32(0x804dc170u, r3);
                                    wr32(0x804dc16cu, 0x803722b0u);
                                    wr8(0x8057136du, 1u);
                                }
                                a.r[0] = param_1 + 0xcfcu;
                                a.r[1] = rd32(0x804dc170u);
                                (void)tc_call(0x801c3608u, &a);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
