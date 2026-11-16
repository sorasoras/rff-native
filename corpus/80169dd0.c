#include "tc_rt.h"

void fn_80169dd0(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80169d68u, &a);
    a.r[0] = param_2 + 0x428u;
    a.r[1] = r3;
    f1 = tc_callf(0x8014c1b4u, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdfecu, r3);
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80169d68u, &a);
    a.r[0] = 0x817fdfecu;
    a.r[1] = r3;
    r3 = tc_call(0x8014967cu, &a);
    wr32(0x817fdfe8u, r3);
    a.r[0] = 0x817fdfe8u;
    r3 = tc_call(0x80149c5cu, &a);
    f1 = tc_lastf();
    c0lt = (s32)r3 < 2;
    if (r3 == 2u) {
        r4 = rd32(param_2 + 0xf78u);
        wr32(param_2 + 0xf78u, r4 | (r4 ^ 1u));
        a.r[0] = 0x817fdfe8u;
        f1 = tc_callf(0x80149c74u, &a);
        wrf32d(param_2 + 0xd50u, f1);
    } else if (c0lt && (s32)r3 >= 1) {
        a.r[0] = 0x817fdfe8u;
        f1 = tc_callf(0x80149c74u, &a);
        r4 = rd32(param_2 + 0xf78u);
        wrf32d(param_2 + 0xf7cu, f1);
        wr32(param_2 + 0xf78u, r4 | (r4 ^ 0x4000u));
        a.r[0] = 0x817fdfe8u;
        f1 = tc_callf(0x80149c74u, &a);
        wrf32d(param_2 + 0xd50u, f1);
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x30u), &a);
    return;
}
