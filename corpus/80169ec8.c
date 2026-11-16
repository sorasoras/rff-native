#include "tc_rt.h"

void fn_80169ec8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdfecu, r3);
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80169d68u, &a);
    a.r[0] = 0x817fdfecu;
    a.r[1] = r3;
    r3 = tc_call(0x8014967cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    wr32(0x817fdfe8u, r3);
    r3 = rd32(param_2 + 0x15f4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    } else {
        r3 = 0u;
    }
    a.r[0] = param_2;
    a.r[1] = r3;
    f1 = tc_callf(0x800b32d0u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x3cu), &a);
    wr32(param_2 + 0xcf0u, r3);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x80149c14u, &a);
    a.f[0] = f1;
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    return;
}
