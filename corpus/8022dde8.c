#include "tc_rt.h"

void fn_8022dde8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802266a4u, &a);
    r31 = r3;
    (void)tc_call(0x802314d4u, &a);
    (void)tc_call(0x80230de0u, &a);
    r0 = r31 & 0xffu;
    if (r0 == 0x81u) {
        (void)tc_call(0x8022eff0u, &a);
        a.r[0] = 4u;
        (void)tc_call(0x8022d9f0u, &a);
        (void)tc_call(0x8022f02cu, &a);
        a.r[0] = param_1;
        (void)tc_call(0x80232e24u, &a);
    } else {
        if (r0 == 0x80u) {
            (void)tc_call(0x8022eff0u, &a);
            a.r[0] = 4u;
            (void)tc_call(0x8022d9f0u, &a);
            (void)tc_call(0x8022f02cu, &a);
            a.r[0] = param_1;
            a.r[1] = rd32(0x805714f8u);
            (void)tc_call(0x8022d838u, &a);
        }
    }
    (void)tc_call(0x8022eff0u, &a);
    a.r[0] = 1u;
    f1 = tc_callf(0x8022d9f0u, &a);
    if (rd32(0x8057144cu) != 0u || rd32(0x805714bcu) != 0u) {
        f1 = tc_callf(0x80230ae8u, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x80230c78u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x8037a858u;
    a.r[1] = 0x3d3u;
    a.r[2] = 0x8037a864u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802285e4u, &a);
    return;
}
