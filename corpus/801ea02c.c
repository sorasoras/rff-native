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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_801ea02c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = (u32)rd8((u32)param_1 + 0x15a5u);
    wr32(0x817fdfd0u, 0x43300000u);
    c0lt = (s32)r0 < 2;
    wr32(0x817fdfd8u, 0x43300000u);
    if (r0 == 2u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801ea918u, &a);
        a.r[0] = 5u;
        r3 = tc_call(0x801ea4acu, &a);
        a.r[0] = 0u;
        a.r[1] = r3;
        r3 = tc_call(0x801ea440u, &a);
        if (r3 != 0u) {
            wr8((u32)param_1 + 0x15a5u, 3u);
        }
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            f2 = rdf64(0x80576400u);
            wr32(0x817fdfd4u, (u32)rd8((u32)param_1 + 0x15a6u));
            f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd0u) - f2) - (f64)rdf32(0x805763f0u));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe0u, f0);
            r0 = rd32(0x817fdfe4u);
            r4 = r0 & 0xffu;
            wr8((u32)param_1 + 0x15a6u, (u8)r0);
            if (r4 != 0u) {
                wr32(0x817fdfdcu, r4);
                if (!((f64)(f32)(rdf64(0x817fdfd8u) - f2) > (f64)rdf32(0x805763f8u))) {
                    a.r[0] = 0x817fdfc8u;
                    a.r[1] = (u32)param_1 + 0x250u;
                    (void)tc_call(0x801e9ee4u, &a);
                    f2 = rdf64(0x80576400u);
                    wr32(0x817fdfd4u, (u32)rd8((u32)param_1 + 0x15a6u));
                    f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfd0u) - f2), (f64)rdf32(0x805763f4u));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdfe0u, f0);
                    wr8(0x817fdfcbu, (u8)rd32(0x817fdfe4u));
                    a.r[0] = (u32)param_1 + 0x254u;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = 0x817fdfc8u;
                    a.r[3] = 0x817fdfc8u;
                    a.r[4] = 0x817fdfc8u;
                    (void)tc_call(0x801e9e50u, &a);
                    wr8(0x817fdfcau, 0xffu);
                    wr8(0x817fdfc9u, 0xffu);
                    wr8(0x817fdfc8u, 0xffu);
                    wr8(0x817fdfcbu, rd8((u32)param_1 + 0x15a6u));
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = 0x817fdfc8u;
                    a.r[3] = 0x817fdfc8u;
                    a.r[4] = 0x817fdfc8u;
                    (void)tc_call(0x801e9e50u, &a);
                    r30 = (u32)param_1 + 0x41cu;
                    r29 = (u32)param_1 + 0x544u;
                    r28 = 0u;
                    do {
                        a.r[0] = r30;
                        a.r[1] = 0x817fdfc8u;
                        a.r[2] = 0x817fdfc8u;
                        a.r[3] = 0x817fdfc8u;
                        a.r[4] = 0x817fdfc8u;
                        (void)tc_call(0x801e9e50u, &a);
                        a.r[0] = r29;
                        a.r[1] = 0x817fdfc8u;
                        a.r[2] = 0x817fdfc8u;
                        a.r[3] = 0x817fdfc8u;
                        a.r[4] = 0x817fdfc8u;
                        (void)tc_call(0x801e9e50u, &a);
                        r28 = r28 + 1u;
                        r29 = r29 + 0x378u;
                        r30 = r30 + 0x378u;
                    } while ((s32)r28 < 4);
                    a.r[0] = (u32)param_1 + 0x384u;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = 0x817fdfc8u;
                    a.r[3] = 0x817fdfc8u;
                    a.r[4] = 0x817fdfc8u;
                    (void)tc_call(0x801e9e50u, &a);
                    a.r[0] = (u32)param_1 + 0x2f0u;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = 0x817fdfc8u;
                    a.r[3] = 0x817fdfc8u;
                    a.r[4] = 0x817fdfc8u;
                    (void)tc_call(0x801e9e50u, &a);
                    a.r[0] = (u32)param_1 + 0x1200u;
                    a.r[1] = (u32)rd8((u32)param_1 + 0x15a6u);
                    (void)tc_call(0x801e9f08u, &a);
                    a.r[0] = (u32)param_1 + 0x1bcu;
                    a.r[1] = (u32)rd8((u32)param_1 + 0x15a6u);
                    (void)tc_call(0x801e9f08u, &a);
                    a.r[0] = (u32)param_1 + 0x94u;
                    a.r[1] = (u32)rd8((u32)param_1 + 0x15a6u);
                    (void)tc_call(0x801e9f08u, &a);
                    f2 = rdf64(0x80576400u);
                    wr32(0x817fdfdcu, (u32)rd8((u32)param_1 + 0x15a6u));
                    f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - f2) * (f64)rdf32(0x80576360u));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdfe0u, f0);
                    a.r[0] = (u32)param_1 + 0x128u;
                    a.r[1] = rd32(0x817fdfe4u) & 0xffu;
                    (void)tc_call(0x801e9f08u, &a);
                    r3 = 1u;
                    return r3;
                }
            }
            wr8((u32)param_1 + 0x15a5u, 0u);
            r3 = 0u;
            return r3;
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u && !c0lt) {
            f2 = rdf64(0x80576400u);
            wr32(0x817fdfd4u, (u32)rd8((u32)param_1 + 0x15a6u));
            f1 = (f64)rdf32(0x805763f0u);
            f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd0u) - f2) + f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe0u, f0);
            r0 = rd32(0x817fdfe4u);
            r4 = r0 & 0xffu;
            wr8((u32)param_1 + 0x15a6u, (u8)r0);
            if (r4 >= 0xffu) {
                wr8((u32)param_1 + 0x15a6u, 0xffu);
                wr8((u32)param_1 + 0x15a5u, 2u);
            } else {
                wr32(0x817fdfdcu, r4);
                if ((f64)(f32)(rdf64(0x817fdfd8u) - f2) < f1) {
                    wr8((u32)param_1 + 0x15a6u, 0xffu);
                    wr8((u32)param_1 + 0x15a5u, 2u);
                }
            }
            a.r[0] = 0x817fdfc8u;
            a.r[1] = (u32)param_1 + 0x250u;
            (void)tc_call(0x801e9ee4u, &a);
            f2 = rdf64(0x80576400u);
            wr32(0x817fdfd4u, (u32)rd8((u32)param_1 + 0x15a6u));
            f0 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfd0u) - f2), (f64)rdf32(0x805763f4u));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe0u, f0);
            wr8(0x817fdfcbu, (u8)rd32(0x817fdfe4u));
            a.r[0] = (u32)param_1 + 0x254u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfc8u;
            a.r[3] = 0x817fdfc8u;
            a.r[4] = 0x817fdfc8u;
            (void)tc_call(0x801e9e50u, &a);
            wr8(0x817fdfcau, 0xffu);
            wr8(0x817fdfc9u, 0xffu);
            wr8(0x817fdfc8u, 0xffu);
            wr8(0x817fdfcbu, rd8((u32)param_1 + 0x15a6u));
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfc8u;
            a.r[3] = 0x817fdfc8u;
            a.r[4] = 0x817fdfc8u;
            (void)tc_call(0x801e9e50u, &a);
            r29 = (u32)param_1 + 0x41cu;
            r30 = (u32)param_1 + 0x544u;
            r28 = 0u;
            do {
                a.r[0] = r29;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x817fdfc8u;
                a.r[3] = 0x817fdfc8u;
                a.r[4] = 0x817fdfc8u;
                (void)tc_call(0x801e9e50u, &a);
                a.r[0] = r30;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0x817fdfc8u;
                a.r[3] = 0x817fdfc8u;
                a.r[4] = 0x817fdfc8u;
                (void)tc_call(0x801e9e50u, &a);
                r28 = r28 + 1u;
                r30 = r30 + 0x378u;
                r29 = r29 + 0x378u;
            } while ((s32)r28 < 4);
            a.r[0] = (u32)param_1 + 0x384u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfc8u;
            a.r[3] = 0x817fdfc8u;
            a.r[4] = 0x817fdfc8u;
            (void)tc_call(0x801e9e50u, &a);
            a.r[0] = (u32)param_1 + 0x2f0u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfc8u;
            a.r[3] = 0x817fdfc8u;
            a.r[4] = 0x817fdfc8u;
            (void)tc_call(0x801e9e50u, &a);
            a.r[0] = (u32)param_1 + 0x1200u;
            a.r[1] = (u32)rd8((u32)param_1 + 0x15a6u);
            (void)tc_call(0x801e9f08u, &a);
            a.r[0] = (u32)param_1 + 0x1bcu;
            a.r[1] = (u32)rd8((u32)param_1 + 0x15a6u);
            (void)tc_call(0x801e9f08u, &a);
            a.r[0] = (u32)param_1 + 0x94u;
            a.r[1] = (u32)rd8((u32)param_1 + 0x15a6u);
            (void)tc_call(0x801e9f08u, &a);
            f2 = rdf64(0x80576400u);
            wr32(0x817fdfdcu, (u32)rd8((u32)param_1 + 0x15a6u));
            f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - f2) * (f64)rdf32(0x80576360u));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe0u, f0);
            a.r[0] = (u32)param_1 + 0x128u;
            a.r[1] = rd32(0x817fdfe4u) & 0xffu;
            (void)tc_call(0x801e9f08u, &a);
        }
    }
    r3 = 1u;
    return r3;
}
