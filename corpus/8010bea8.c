#include "tc_rt.h"

u32 fn_8010bea8(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7460u, &a);
    a.r[0] = 1u;
    a.r[1] = r3;
    r3 = tc_call(0x800a51f8u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 1u;
    a.r[1] = 0x15u;
    a.r[2] = 0x8010ba00u;
    a.r[3] = 1u;
    a.r[4] = r3;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x800a6fccu, &a);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
