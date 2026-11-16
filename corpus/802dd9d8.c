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

void fn_802dd9d8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r28 = param_2;
    f28 = rdf64(0x80348b68u);
    r26 = (u32)param_3;
    f29 = (f64)rdf32(0x80348b70u);
    r29 = param_1 + 0x241cu;
    f30 = (f64)rdf32(0x80348b58u);
    f31 = (f64)rdf32(0x80348b54u);
    while (r26 != 0u) {
        for (;;) {
            r3 = rd32(r28);
            r27 = rd32(r28 + 4u);
            r28 = r28 + 8u;
            if ((r3 - 0x4d540000u) == 0x726bu) break;
            r28 = r28 + r27;
        }
        wr32(r29, param_1);
        wr32(r29 + 4u, r28);
        wr32(r29 + 8u, r28 + r27);
        wr32(r29 + 0xcu, r28);
        a.f[0] = (f64)(f32)(f31 * (f64)(f32)px_fdiv(f30, (f64)(f32)px_fdiv(f29, (f64)(f32)(px_b2f((u64)((u32)(s16)rd16(param_1 + 0xau) ^ 0x80000000u) | 0x4330000000000000ull) - f28))));
        r3 = tc_call(0x802558e4u, &a);
        wr32(r29 + 0x18u, r3);
        r28 = r28 + r27;
        wr32(r29 + 0x24u, 0u);
        r26 = r26 - 1u;
        r29 = r29 + 0x28u;
    }
    return;
}
