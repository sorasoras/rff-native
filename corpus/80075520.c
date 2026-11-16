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

void fn_80075520(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571148u) != 0u) {
        (void)tc_call(0x80076d88u, &a);
    }
    a.r[0] = 1u;
    (void)tc_call(0x80076fa8u, &a);
    wr32(0x80492c58u, 0u);
    (void)tc_call(0x80076994u, &a);
    (void)tc_call(0x80081160u, &a);
    (void)tc_call(0x80075908u, &a);
    a.r[0] = 0x80471ed0u;
    a.r[1] = (u32)rd8(0x80492b98u);
    a.r[2] = (u32)rd8(0x80492b9au);
    (void)tc_call(0x80090f6cu, &a);
    (void)tc_call(0x80075810u, &a);
    f1 = tc_callf(0x80040a00u, &a);
    f1 = (f64)(f32)((f64)rdf32(0x80572754u) * f1);
    a.f[0] = f1;
    r3 = tc_call(0x802558e4u, &a);
    r28 = r3 + 0x1eu;
    if (r28 < 0x3cu) {
        r30 = 8u;
    } else {
        r30 = 7u;
    }
    f1 = tc_callf(0x80040a00u, &a);
    f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)r30 | 0x4330000000000000ull) - rdf64(0x80572760u)) * f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r30 = ((u32)px_f2b(f0) + 6u) & 0xffu;
    f1 = tc_callf(0x80040a00u, &a);
    f3 = rdf64(0x80572760u);
    f0 = (f64)rdf32(0x80572758u);
    wr8(0x80492828u, (u8)r30);
    r3 = ppc_mulhwu(0x88888889u, r28);
    f0 = (f64)(f32)(f0 - (f64)(f32)(px_b2f((u64)(r28 - (((ppc_mulhwu(0x88888889u, r28) >> 5u) & 0x7ffffffu) * 0x3cu)) | 0x4330000000000000ull) - f3));
    wr8(0x8049282au, (u8)(r30 + ((r3 >> 5u) & 0xffu)));
    f0 = (f64)(f32)(f0 * f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r5 = (u32)px_f2b(f0);
    wr8(0x80492829u, (u8)r5);
    if (r28 < 0x3cu) {
        wr8(0x8049282bu, (u8)(r5 + (r28 & 0xffu)));
    } else {
        wr8(0x8049282bu, (u8)(r5 + ((r28 - (((r3 >> 5u) & 0x7ffffffu) * 0x3cu)) & 0xffu)));
    }
    r31 = 0u;
    r6 = 0u;
    r3 = 0u;
    ctr = 0x11u;
    do {
        if (r6 < 1u || r6 > 0xdu) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r31 = r31 + (u32)rd16(r3 - 0x7fb65000u);
        }
        r6 = r6 + 1u;
        r3 = r3 + 0x38u;
        if (r6 < 1u || r6 > 0xdu) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r31 = r31 + (u32)rd16(r3 - 0x7fb65000u);
        }
        r6 = r6 + 1u;
        r3 = r3 + 0x38u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = tc_call(0x80040b64u, &a);
    if ((r3 - (((ppc_mulhwu(0xd9ba4257u, r3) >> 8u) & 0xffffffu) * 0x12du)) < r31) {
        r27 = 0u;
        r30 = 0u;
        do {
            if (r27 < 1u || r27 > 0xdu) {
                r0 = 0u;
            } else {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r28 = (u32)rd16(r30 - 0x7fb65000u);
                r3 = tc_call(0x80040b64u, &a);
                r4 = r31 + 1u;
                if ((r3 - (ppc_divwu(r3, r4) * r4)) < r28) {
                    wr32(0x8049b738u, r27);
                    a.r[0] = 0x804bb758u;
                    (void)tc_call(0x80163170u, &a);
                    a.r[0] = 0x804bb758u;
                    a.r[1] = r27;
                    (void)tc_call(0x80163818u, &a);
                    a.r[0] = 0x804b9da0u;
                    (void)tc_call(0x8010a6e0u, &a);
                    break;
                }
                if (r31 < r28) {
                    r31 = 0u;
                } else {
                    r31 = r31 - r28;
                }
            }
            r27 = r27 + 1u;
            r30 = r30 + 0x38u;
        } while (r27 <= 0x21u);
    }
    a.r[0] = rd32(0x804863d8u);
    (void)tc_call(0x800c4f20u, &a);
    wr32(0x80571144u, 0x46u);
    (void)tc_call(0x80075a7cu, &a);
    a.r[0] = 0x80475e24u;
    (void)tc_call(0x8017d28cu, &a);
    return;
}
