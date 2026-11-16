#include "tc_rt.h"

void fn_8016a018(u32 param_1, u32 param_2)
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
    a.f[0] = 0.0;
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
    r3 = tc_call(0x80149bfcu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x817fdfe8u;
        r3 = tc_call(0x80149bfcu, &a);
        a.r[0] = 0x817fdfecu;
        a.r[1] = r3 + 0xeu;
        r3 = tc_call(0x8014969cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0xffffffffu) {
            return;
        }
    }
    a.r[0] = param_2;
    a.r[1] = r4;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_2) + 0x1e0u), &a);
    return;
}
