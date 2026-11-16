#include "tc_rt.h"

void fn_802b06f4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = 1u;
    if ((u32)rd8(param_1 + 0x6du) == 0u) {
        r0 = 0u;
    }
    r30 = (r0 << 1u) & 0xfeu;
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    r31 = r3;
    if (r3 != 0u) {
        wr16(r3 + 4u, 9u);
        wr8(r3 + 0x11u, (u8)(r30 | 1u | ((param_2 << 2u) & 0x3fcu)));
        r30 = r3 + 0x15u;
        wr8(r3 + 0x12u, 0xffu);
        wr8(r3 + 0x13u, 1u);
        wr8(r3 + 0x14u, (u8)param_3);
        a.r[0] = 2u;
        a.r[1] = r3 + (u32)rd16(r3 + 4u) + 8u;
        r3 = tc_call(0x802b134cu, &a);
        wr8(r30, (u8)r3);
        wr16(r31 + 2u, 5u);
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x802b1ac8u, &a);
    }
    return;
}
