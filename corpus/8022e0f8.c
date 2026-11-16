#include "tc_rt.h"

void fn_8022e0f8(void)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x802317a0u, &a);
    wr8(0x817fdfdeu, 2u);
    wr8(0x817fdfddu, 3u);
    (void)tc_call(0x8022ebbcu, &a);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x802316bcu, &a);
    (void)tc_call(0x8022980cu, &a);
    (void)tc_call(0x8022eff0u, &a);
    f1 = tc_callf(0x802415c4u, &a);
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
    f1 = tc_callf(0x802285e4u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x8037a858u;
    a.r[1] = 0x3bbu;
    a.r[2] = 0x8037aa30u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802285e4u, &a);
    return;
}
