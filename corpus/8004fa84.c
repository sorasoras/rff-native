#include "tc_rt.h"

void fn_8004fa84(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x8057109cu, param_1);
    wr32(0x803c6da8u, 0u);
    wr32(0x803c6a8cu, param_2);
    wr32(0x80571098u, 0x803c6a80u);
    a.r[0] = 0x803c65d0u;
    a.r[1] = param_2;
    r3 = tc_call(0x803053a8u, &a);
    r31 = r3;
    a.r[0] = param_1;
    r3 = tc_call(0x8004f9acu, &a);
    f1 = tc_lastf();
    if ((s32)r31 > (s32)r3) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x803364f8u;
        a.r[1] = 0x65bu;
        a.r[2] = 0x8033652au;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802285e4u, &a);
    }
    a.r[0] = 0x803c6a90u;
    a.r[1] = 0x8004fa28u;
    a.r[2] = 0x80571098u;
    a.r[3] = 0x803c7e10u;
    a.r[4] = 0x1000u;
    a.r[5] = 5u;
    a.r[6] = 1u;
    r3 = tc_call(0x8022f550u, &a);
    if (r3 == 0u) {
        wr32(0x803c6da8u, 1u);
    } else {
        a.r[0] = 0x803c6a90u;
        (void)tc_call(0x8022fbb8u, &a);
    }
    return;
}
