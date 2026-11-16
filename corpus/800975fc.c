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

void fn_800975fc(void)
{
    u32 c0lt = 0, r3 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x23u;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a51f8u, &a);
    if ((s32)r3 >= 0 && (r3 - 0xau) == 7u) {
        f28 = rdf64(0x80572aa8u);
        f29 = (f64)rdf32(0x80572a9cu);
        f30 = (f64)rdf32(0x80572a98u);
        r28 = 1u;
        f31 = (f64)rdf32(0x80572aa0u);
        r31 = 0x38u;
        do {
            a.r[0] = r28;
            a.r[1] = 0xbu;
            r3 = tc_call(0x8014da9cu, &a);
            r27 = r3;
            a.r[0] = r28;
            a.r[1] = 0xau;
            a.r[2] = r3;
            (void)tc_call(0x8014dadcu, &a);
            a.r[0] = r28;
            a.r[1] = 0xcu;
            a.r[2] = 1u;
            (void)tc_call(0x8014dadcu, &a);
            if (r27 == 2u) {
                f27 = (f64)(f32)((f64)rdf32(0x80572a94u) + (f64)(f32)(f30 * (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd16(r31 - 0x7fb65000u) | 0x4330000000000000ull) - f28), f29)));
                f1 = tc_callf(0x80040a00u, &a);
                f0 = (f64)(f32)(f31 * f1);
                c0lt = f0 < f27;
                if (((((c0lt << 0x1fu) | ((f0 > f27) << 0x1eu) | ((c0lt || (f0 == f27)) << 0x1du) | (((f0 != f0) || (f27 != f27)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
                    a.r[0] = r28;
                    a.r[1] = 0xcu;
                    a.r[2] = 2u;
                    (void)tc_call(0x8014dadcu, &a);
                }
            }
            r28 = r28 + 1u;
            r31 = r31 + 0x38u;
        } while ((s32)r28 < 33);
    }
    return;
}
