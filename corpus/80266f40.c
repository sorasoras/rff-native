#include "tc_rt.h"

void fn_80266f40(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80266fa0u, &a);
    r31 = r3;
    if (r3 != 0xffffffffu) {
        a.r[0] = r3;
        (void)tc_call(0x80266d5cu, &a);
        a.r[0] = 0x817fdfe8u;
        a.r[1] = 2u;
        (void)tc_call(0x802662d4u, &a);
        wr32(0x817fdff0u, r31);
        wr32(0x805026f0u, 0xffffffffu);
        a.r[0] = 0x817fdfe8u;
        (void)tc_call(0x802662ecu, &a);
    }
    return;
}
