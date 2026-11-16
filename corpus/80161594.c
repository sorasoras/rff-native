#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80161594(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r28 = rd32(param_r3);
    if (r28 != 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x802547e8u, &a);
        a.r[0] = 2u;
        (void)tc_call(0x80250e3cu, &a);
        a.r[0] = 0u;
        a.r[1] = 0x11u;
        a.r[2] = 0u;
        (void)tc_call(0x802537d4u, &a);
        r29 = rd32(0x805710ecu);
        wr32(0x805710e8u, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8004e22cu, &a);
        wr32(0x805710ecu, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8003d790u, &a);
        wr32(0x803d2704u, 0u);
        a.r[0] = rd32(0x803d26d8u);
        a.r[1] = 0u;
        (void)tc_call(0x8003d7b0u, &a);
        wr32(0x803d277cu, 0u);
        a.r[0] = rd32(0x803d2758u);
        a.r[1] = 0u;
        (void)tc_call(0x8003d7b0u, &a);
        a.r[0] = 0x803d2678u;
        a.r[1] = 2u;
        (void)tc_call(0x8005768cu, &a);
        f2 = (f64)px_w2f(rd32(param_r3 + 0x158u));
        f1 = (f64)px_w2f(rd32(param_r3 + 0x15cu));
        f0 = (f64)px_w2f(rd32(param_r3 + 0x160u));
        wrf32d(0x803d27a0u, (f64)px_w2f(rd32(param_r3 + 0x154u)));
        wrf32d(0x803d27a4u, f2);
        wrf32d(0x803d27a8u, f1);
        wrf32d(0x803d27acu, f0);
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
        a.r[0] = param_r3 + 0x1cu;
        a.r[1] = 2u;
        (void)tc_call(0x8004d368u, &a);
        a.r[0] = 4u;
        a.r[1] = 0u;
        (void)tc_call(0x80044e50u, &a);
        while (r28 != 0u) {
            r3 = r28;
            r28 = rd32(r28);
            r30 = rd32(r3 + 8u);
            a.r[0] = r30;
            (void)tc_call(0x800515dcu, &a);
            a.r[0] = 1u;
            a.r[1] = 3u;
            a.r[2] = 1u;
            (void)tc_call(0x80253f64u, &a);
            a.r[0] = 2u;
            (void)tc_call(0x80250e3cu, &a);
            a.r[0] = r30;
            a.r[1] = 7u;
            (void)tc_call(0x800518b8u, &a);
        }
        wr32(0x805710ecu, r29);
        a.r[0] = (((0u - r29) | r29) >> 0x1fu) & 1u;
        (void)tc_call(0x8003d790u, &a);
    }
    return;
}
