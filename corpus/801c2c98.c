#include "tc_rt.h"

void fn_801c2c98(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0xd48u;
    a.r[1] = 0u;
    a.r[2] = 0x80u;
    f1 = tc_callf(0x8000443cu, &a);
    r4 = tc_lastr4();
    wr32(param_1 + 0xd40u, param_2);
    r29 = param_1;
    r28 = 0u;
    wr32(param_1 + 0xd44u, (u32)param_3);
    while ((s32)r28 < (s32)rd32(param_1 + 0xd40u)) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.f[0] = (f64)rdf32(0x80575cd8u);
        a.r[0] = 0x84u;
        a.r[1] = r3;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr32(r29 + 0xd48u, r3);
        r29 = r29 + 4u;
        r28 = r28 + 1u;
    }
    return;
}
