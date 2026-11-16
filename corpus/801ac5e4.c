#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801ac5e4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(param_1 + 0xcf8u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x801b12e8u, &a);
    a.r[0] = param_1;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = param_5;
    (void)tc_call(0x801e7148u, &a);
    wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x8000000u);
    a.r[0] = 0x804b9da0u;
    (void)tc_call(0x8010a6e0u, &a);
    a.r[0] = 0x40u;
    a.r[1] = 7u;
    a.r[2] = 0u;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 0x41u;
    a.r[1] = 4u;
    a.r[2] = 0u;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 9u;
    a.r[1] = 4u;
    a.r[2] = 0u;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 0x47u;
    a.r[1] = 4u;
    a.r[2] = 0u;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = rd32(param_1 + 0x70u);
    a.r[1] = 0x8033b380u;
    r3 = tc_call(0x80031be0u, &a);
    f1 = tc_lastf();
    r29 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801aa230u;
        f1 = tc_callf(0x8007b13cu, &a);
        wr32(r29 + 0x60u, param_1);
    }
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 0x1bcu);
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xc8u), &a);
    r0 = (rd32(param_1 + 0x1d4u) >> 1u) & 0x7fffffffu;
    wr32(param_1 + 0xf64u, 0x801acd3cu);
    wr32(param_1 + 0xf68u, r0);
    wr32(param_1 + 0x1d4u, r0);
    wr32(param_1 + 0x1d8u, r0);
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056b64u, &a);
    f2 = (f64)rdf32(0x8057092cu);
    f0 = (f64)rdf32(0x80570928u);
    c0eq = (u32)(s8)rd8(0x80571341u) == 0u;
    f3 = (f64)(f32)((f64)(f32)px_fdiv(f2, (f64)rdf32(0x80575ad8u)) * (f64)rdf32(0x80575adcu));
    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    wrf32d(r3 + 0x1d8u, f2);
    wrf32d(r3 + 0x1d0u, (f64)(f32)(f3 + f0));
    wrf32d(r3 + 0x1d4u, f0);
    if (c0eq) {
        wr32(0x80571348u, 0x80371e90u);
        a.r[0] = 0x80571348u;
        r3 = tc_call(0x801c38acu, &a);
        wr32(0x8057134cu, r3);
        wr32(0x80571348u, 0x80373150u);
        wr8(0x80571341u, 1u);
    }
    a.r[0] = param_1 + 0xcfcu;
    a.r[1] = rd32(0x8057134cu);
    (void)tc_call(0x801c3608u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x1eu;
    a.r[2] = 0x80371ed0u;
    (void)tc_call(0x801c2c98u, &a);
    a.r[0] = param_1 + 0xf70u;
    (void)tc_call(0x801ae394u, &a);
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
    r3 = rd32(((rd32(0x804dbe88u) << 2u) & 0xfffffffcu) - 0x7fb23668u);
    wr32(r3 + 0xcu, param_1 + 0xf70u);
    a.r[0] = r3;
    a.r[1] = param_1 + 0xff8u;
    f1 = tc_callf(0x801ae4b0u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
    r5 = rd32(0x8033b334u);
    r4 = rd32(0x8033b338u);
    r0 = rd32(0x8033b33cu);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfc8u, r5);
    wr32(0x817fdfccu, r4);
    wr32(0x817fdfd0u, r0);
    a.r[0] = 1u;
    r3 = tc_call(0x80074e90u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        r3 = rd32(0x804863dcu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        wrf32d(0x817fdfd4u, (f64)rdf32(r3));
        wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 4u));
        wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 8u));
    }
    if (rd32(param_1 + 0x150u) == 0x7fu) {
        wr32(param_1 + 0xf68u, 0u);
        wr32(param_1 + 0xf64u, 0x801ad194u);
        a.r[0] = param_1 + 0xf20u;
        a.r[1] = 1u;
        a.r[2] = rd32(0x804863d8u);
        a.r[3] = 0x817fdfd4u;
        a.r[4] = 0x817fdfc8u;
        (void)tc_call(0x801c1f7cu, &a);
    } else {
        a.r[0] = param_1 + 0xf20u;
        a.r[1] = 2u;
        a.r[2] = param_1;
        a.r[3] = 0x817fdfd4u;
        a.r[4] = 0x817fdfc8u;
        (void)tc_call(0x801c1f7cu, &a);
    }
    return;
}
