#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801b269c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    c0lt = param_2 < 1;
    r5 = 0xffffffffu;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r28 = 0u;
    if ((u32)param_2 == 1u) {
        r31 = 5u;
        r28 = 1u;
        r5 = 0x1114u;
        wr32((u32)param_1 + 0x6f8u, rd32((u32)param_1 + 0x6f8u) - 1u);
    } else if (!c0lt) {
        if (param_2 < 3) {
            r31 = 1u;
            r28 = 0u;
            r5 = 0x1114u;
            wr32((u32)param_1 + 0x6f8u, rd32((u32)param_1 + 0x6f8u) - 1u);
        }
    } else if (param_2 >= 0) {
        r31 = 0xau;
        r28 = 2u;
        r5 = 0x1113u;
    }
    if (r5 != 0xffffffffu) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = r5;
        (void)tc_call(0x8010a74cu, &a);
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b2e30u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u && rd32((u32)param_1 + 0x6f8u) == 0u) {
        r4 = rd32((u32)param_1 + 0x708u);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = r4;
            f1 = tc_callf(0x8010a74cu, &a);
            r4 = tc_lastr4();
            wr32((u32)param_1 + 0x6f8u, rd32((u32)param_1 + 0x6f4u));
        }
    }
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r10 = rd32(0x8033b4a0u);
    r11 = rd32(r3 + 4u);
    r9 = rd32(0x8033b4a4u);
    r8 = rd32(0x8033b4a8u);
    wr32(0x817fdfd4u, rd32(r3));
    f1 = (f64)rdf32(0x80575ba0u);
    wr32(0x817fdfd8u, r11);
    r3 = rd32(r3 + 8u);
    wr32(0x817fdfc8u, r10);
    wr32(0x817fdfccu, r9);
    wr32(0x817fdfd0u, r8);
    wr32(0x817fdfdcu, r3);
    a.f[0] = f1;
    a.r[0] = rd32(((r28 << 2u) & 0xfffffffcu) - 0x7e802038u);
    a.r[1] = 0x817fdfd4u;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    wr32((u32)param_1 + 0x80u, rd32((u32)param_1 + 0x80u) + r31);
    a.r[0] = (u32)param_1 + 0x38u;
    a.r[1] = 0x803724f0u;
    r3 = tc_call(0x80255880u, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801b2e30u, &a);
        if (r3 != 0u && (u32)param_2 == 0u) {
            r3 = tc_call(0x801b0c80u, &a);
            a.r[0] = r3;
            (void)tc_call(0x801830b8u, &a);
            r4 = rd32((u32)param_1 + 0x710u);
            wr32(0x817fdfe0u, 0x43300000u);
            f2 = rdf64(0x80575bc8u);
            wr32(0x817fdfe4u, r4 ^ 0x80000000u);
            f0 = (f64)(f32)((f64)rdf32(0x80575bc0u) * (f64)(f32)(rdf64(0x817fdfe0u) - f2));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe8u, f0);
            wr32((u32)param_1 + 0x70cu, rd32(0x817fdfecu));
            a.r[0] = (u32)param_1;
            a.r[1] = 3u;
            (void)tc_call(0x801b2928u, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x1133u;
            (void)tc_call(0x8010a74cu, &a);
        }
    }
    return;
}
