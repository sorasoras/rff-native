#include "tc_rt.h"

void fn_803055bc(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(rd32(param_1 + 4u) + 0x10u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x80301480u, &a);
    }
    if (r3 == 0u) {
        return;
    }
    a.r[0] = rd32(param_1 + 4u);
    a.r[1] = param_8;
    r3 = tc_call(0x80304038u, &a);
    r31 = r3;
    if (r3 == 0u) {
        return;
    }
    a.r[0] = 0x817fdfc8u;
    a.r[1] = param_5;
    (void)tc_call(0x8030f178u, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = param_2;
    a.r[2] = param_6;
    r3 = tc_call(0x8030f208u, &a);
    if (r3 == 0u) {
        return;
    }
    a.r[0] = 0x817fdfc8u;
    a.r[1] = param_3;
    a.r[2] = param_6;
    a.r[3] = param_7;
    r3 = tc_call(0x8030f328u, &a);
    if (r3 == 0u) {
        return;
    }
    a.r[0] = 0x817fdfc8u;
    a.r[1] = rd32(param_3);
    a.r[2] = param_4;
    a.r[3] = r31;
    (void)tc_call(0x8030f440u, &a);
    return;
}
