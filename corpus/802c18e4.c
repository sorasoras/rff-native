#include "tc_rt.h"

void fn_802c18e4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd8(param_1 + 0x1ecu) != 0u) {
        a.r[0] = param_1 + 0x1d0u;
        a.r[1] = param_3;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x80275cb8u, &a);
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80276134u, &a);
        r30 = r3;
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80276148u, &a);
        r31 = r3;
        (void)tc_call(0x80276150u, &a);
        r3 = param_1 + (param_2 * 0x68u);
        wr8(r3 + 0x5eu, 0u);
        wr32(r3 + 0x58u, param_3);
        wr32(r3 + 0x54u, r31);
        wr8(r3 + 0x5du, (u8)param_4);
        wr32(r3 + 0x50u, r30);
    }
    return;
}
