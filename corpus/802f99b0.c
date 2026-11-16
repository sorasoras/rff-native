#include "tc_rt.h"

void fn_802f99b0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1);
    a.r[1] = ((param_2 + 0x1fu) & 0xffffffe0u) + 0x20u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x8026d0b8u, &a);
    c0eq = r3 == 0u;
    if (c0eq) {
        return;
    }
    r5 = r3;
    r31 = r3 + 0x20u;
    if (!c0eq) {
        wr32(r3, 0u);
        wr32(r3 + 4u, 0u);
        wr32(r3 + 8u, r31);
        wr32(r3 + 0xcu, param_2);
        wr32(r3 + 0x10u, param_3);
        wr32(r3 + 0x14u, param_4);
    }
    r3 = rd32(param_1 + 0xcu);
    r0 = r3 + 0xcu;
    r3 = r3 + 8u;
    wr32(0x817fdfd8u, r0);
    a.r[0] = r3;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = r5;
    (void)tc_call(0x802deba4u, &a);
    return;
}
