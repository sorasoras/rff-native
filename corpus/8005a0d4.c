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

void fn_8005a0d4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x2c0u) == 0u) {
        f2 = rdf64(0x805723c8u);
        r5 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        f31 = (f64)(f32)(px_b2f((u64)rd16(r5 + 0xf4u) | 0x4330000000000000ull) - f2);
        f30 = (f64)(f32)(px_b2f((u64)rd16(r5 + 0xf6u) | 0x4330000000000000ull) - f2);
        a.r[0] = 0u;
        a.r[1] = (u32)px_f2b(px_ctiw(f31, ppc_fctiwz(f31)));
        a.r[2] = (u32)px_f2b(px_ctiw(f30, ppc_fctiwz(f30)));
        r3 = tc_call(0x8004528cu, &a);
        r30 = r3;
        r3 = tc_call(0x8005a0c8u, &a);
        r6 = r3;
        if (r30 == 0u) {
            r3 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r30;
                    r3 = tc_call(0x80094e80u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                }
            }
        }
        a.r[0] = (u32)param_1 + 0xc4u;
        a.r[1] = 0u;
        a.r[2] = (u32)px_f2b(px_ctiw(f31, ppc_fctiwz(f31)));
        a.r[3] = (u32)px_f2b(px_ctiw(f30, ppc_fctiwz(f30)));
        a.r[4] = r3;
        (void)tc_call(0x8004515cu, &a);
        wr32((u32)param_1 + 0x2c0u, 1u);
        wr32((u32)param_1 + 0x2bcu, 1u);
        wr8((u32)param_1 + 0x2c4u, 0x80u);
    }
    if (rd32((u32)param_1 + 0xc0u) == 0u) {
        a.r[0] = 2u;
        r3 = tc_call(0x8004e424u, &a);
        r30 = r3;
        r3 = tc_call(0x8005a0c8u, &a);
        r6 = r3;
        if (r30 == 0u) {
            r4 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r30;
                    r3 = tc_call(0x80094e80u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                }
            }
            r4 = r3;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = 2u;
        (void)tc_call(0x8004e498u, &a);
        wr32((u32)param_1 + 0xc0u, 1u);
        wr32((u32)param_1 + 0xbcu, 1u);
        wr8((u32)param_1 + 0xb8u, 1u);
    }
    a.r[0] = (u32)param_1 + 0x2c8u;
    (void)tc_call(0x800cdb14u, &a);
    wr32((u32)param_1 + 0x2e8u, 0u);
    return;
}
