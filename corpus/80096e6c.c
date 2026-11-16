#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80096e6c(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x4cu);
    (void)tc_call(0x800ab964u, &a);
    a.r[0] = rd32((u32)param_1 + 0x54u);
    (void)tc_call(0x8010c5a8u, &a);
    f31 = (f64)rdf32(0x80571118u);
    r3 = tc_call(0x80097da4u, &a);
    r31 = r3;
    a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(0x80572a90u), f31);
    r3 = tc_call(0x802558e4u, &a);
    a.r[0] = rd32(r31);
    a.r[1] = r3;
    (void)tc_call(0x800a2b38u, &a);
    if (rd32(rd32((u32)param_1 + 0x4cu) + 0x4cu) != 0u) {
        (void)tc_call(0x800efbd4u, &a);
    }
    r3 = 0u;
    if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
        r3 = 1u;
    }
    if (r3 != 0u) {
        r3 = tc_call(0x801567a0u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
        if (rd32(rd32((u32)param_1 + 0x4cu) + 0xcu) == 3u) {
            a.r[0] = rd32((u32)param_1 + 0x60u);
            (void)tc_call(0x80215018u, &a);
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x24u);
    (void)tc_call(0x80113740u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80096f60u, &a);
    a.r[0] = rd32((u32)param_1 + 0x4cu);
    (void)tc_call(0x800abb40u, &a);
    return;
}
