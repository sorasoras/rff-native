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

void fn_802c3970(u32 param_r3)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r27 = 0, r30 = 0;
    f64 f0 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8027c6c8u, &a);
    f0 = (f64)(f32)((f64)rdf32(0x80348980u) + (f64)(f32)((f64)rdf32(0x80348984u) * (f64)(f32)(px_b2f((u64)(r3 & 0xffu) | 0x4330000000000000ull) - rdf64(0x80348968u))));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32(param_r3 + 0x84u, (u32)px_f2b(f0));
    a.r[0] = 0x7fu;
    (void)tc_call(0x8027c6fcu, &a);
    f30 = rdf64(0x80348990u);
    r25 = param_r3;
    f31 = (f64)rdf32(0x80348988u);
    r27 = 0u;
    do {
        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_r3 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f30), f31);
        a.r[0] = rd32(r25 + 0x2acu);
        (void)tc_call(0x802c0c38u, &a);
        a.r[0] = rd32(r25 + 0x2acu);
        (void)tc_call(0x802c0c24u, &a);
        r27 = r27 + 1u;
        r25 = r25 + 4u;
    } while ((s32)r27 < 4);
    r30 = 0u;
    do {
        if ((s32)r30 >= (s32)rd32(param_r3 + 0x84u)) {
            r5 = 0x803486e8u;
            r3 = r30 + 0x15u;
            r4 = 0u;
            ctr = 0x25u;
            for (;;) {
                if (r3 == rd32(r5) && rd32(r5 + 4u) == 9u) {
                    fl_ = 3u;
                    break;
                }
                r4 = r4 + 1u;
                if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 9u) {
                    fl_ = 2u;
                    break;
                }
                r5 = r5 + 0x10u;
                r4 = r4 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    r4 = 0xffffffffu;
                    fl_ = 1u;
                    break;
                }
            }
            if (fl_ == 3u) {
                fl_ = 0u;
            } else if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
            }
            r25 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
            a.r[0] = r25;
            (void)tc_call(0x802bed24u, &a);
            wr32(r25 + 0x14u, 1u);
        } else {
            r5 = 0x803486e8u;
            r3 = r30 + 0x15u;
            r4 = 0u;
            ctr = 0x25u;
            while (r3 != rd32(r5) || rd32(r5 + 4u) != 0xau) {
                r4 = r4 + 1u;
                if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0xau) break;
                r5 = r5 + 0x10u;
                r4 = r4 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    r4 = 0xffffffffu;
                    break;
                }
            }
            r25 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u);
            a.r[0] = r25;
            (void)tc_call(0x802bed24u, &a);
            wr32(r25 + 0x14u, 1u);
        }
        r30 = r30 + 1u;
    } while ((s32)r30 < 10);
    return;
}
