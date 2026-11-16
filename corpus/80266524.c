#include "tc_rt.h"

s32 fn_80266524(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr8(0x817fdfe8u, 0x12u);
    r31 = 0u;
    wr8(0x817fdfe9u, 0x34u);
    wr8(0x817fdfeau, 0x56u);
    wr8(0x817fdfebu, 0x78u);
    r3 = rd32(0x817fdfe8u);
    wr32(0x80500d38u, 1u);
    if ((r3 - 0x12340000u) == 0x5678u) {
        wr32(0x80500d38u, 1u);
    } else {
        if ((r3 - 0x78560000u) == 0x3412u) {
            wr32(0x80500d38u, 0u);
        } else {
            r31 = 1u;
        }
    }
    if (r31 == 0u) {
        (void)tc_call(0x80267070u, &a);
    }
    if (r31 == 0u) {
        r3 = tc_call(0x80266480u, &a);
        r31 = r3;
    }
    if (r31 == 0u) {
        r3 = tc_call(0x80266e50u, &a);
        r31 = r3;
    }
    if (r31 == 0u) {
        r3 = tc_call(0x8026723cu, &a);
        r31 = r3;
    }
    (void)tc_call(0x8026aea4u, &a);
    if (r31 == 0u) {
        r3 = tc_call(0x80266eccu, &a);
        r31 = r3;
    }
    if (r31 == 0u) {
        r3 = tc_call(0x8026abe4u, &a);
        r31 = r3;
    }
    if (r31 == 0u) {
        a.r[3] = 0x80571a18u;
        r3 = tc_call(0x8026b07cu, &a);
        r0 = r3;
        a.r[0] = rd32(0x80571a18u);
        (void)tc_call(0x80268f6cu, &a);
        if (r0 != 0u) {
            r31 = r0;
        }
    }
    return (s32)r31;
}
