#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8010c5a8(u32 param_r3)
{
    u32 r3 = 0, r27 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802302b4u, &a);
    f1 = tc_lastf();
    f30 = rdf64(0x805740f8u);
    f31 = (f64)rdf32(0x805740f0u);
    r27 = r3;
    for (;;) {
        if (param_r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x805707b0u;
            a.r[1] = 0xd2u;
            a.r[2] = 0x80361b88u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802e41c0u, &a);
        }
        if ((u32)rd16(param_r3 + 8u) == 0u) break;
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a3460u, &a);
        if (r3 != 0u) {
            return;
        }
        r3 = tc_call(0x802302b4u, &a);
        r3 = r3 - r27;
        f0 = (f64)(f32)(px_b2f((u64)ppc_divwu(r3, (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) | 0x4330000000000000ull) - f30);
        if ((f0 > f31) || (f0 == f31)) {
            return;
        }
        a.r[0] = param_r3;
        f1 = tc_callf(0x8010c4d0u, &a);
    }
    return;
}
