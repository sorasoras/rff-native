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

u32 fn_80155028(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    r4 = 0x80470000u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r30 = rd32(0x8046ad74u);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r29 = rd32(r3 + 8u);
        if (rd32(r29 + 0xb8u) == 2u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r29) + 0x13cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u && (u32)((s32)rd32(r29 + 0x9cu) >> 31) != 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r29) + 0x140u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 != 0u) {
                    a.r[0] = r29;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    r3 = tc_call(rd32(rd32(r29) + 0x70u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u && rd32(r29 + 0x1b0u) == 0u) {
                        r31 = r29;
                        break;
                    }
                }
            }
        }
    }
    if (r31 != 0u) {
        r7 = rd32((u32)param_1 + 4u);
        r0 = rd32(r7 + 0xcf8u);
        wr32(0x817fdfc8u, rd32(r7 + 0xcf4u));
        wr32(0x817fdfccu, r0);
        wr32(0x817fdfd0u, rd32(r7 + 0xcfcu));
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r31 + 0xcf4u;
        a.r[2] = 0x817fdfc8u;
        f1 = tc_callf(0x802343a4u, &a);
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r7 = rd32((u32)param_1 + 4u);
        r0 = rd32(r7 + 0xcf8u);
        wr32(0x817fdfd4u, rd32(r7 + 0xcf4u));
        wr32(0x817fdfd8u, r0);
        wr32(0x817fdfdcu, rd32(r7 + 0xcfcu));
        a.r[0] = 0x817fdfd4u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfd4u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x817fdfdcu);
        f0 = (f64)rdf32(0x817fdfd0u);
        f3 = (f64)(f32)(f1 * f1);
        f2 = (f64)rdf32(0x817fdfd4u);
        f1 = (f64)(f32)(f0 * f0);
        f0 = (f64)rdf32(0x817fdfc8u);
        f2 = ppc_fmadds(f2, f2, f3);
        f0 = ppc_fmadds(f0, f0, f1);
        f0 = (f64)(f32)(f0 - f2);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfe0u, f0);
        if ((s32)rd32(0x817fdfe4u) < 0) {
            r3 = r31;
            return r3;
        }
    }
    r3 = rd32(0x804863d8u);
    return r3;
}
