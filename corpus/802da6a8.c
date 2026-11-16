#include "tc_rt.h"

void fn_802da6a8(void)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80547550u) == 0u) {
        a.r[0] = 0x80547548u;
        (void)tc_call(0x802d84ecu, &a);
        a.r[0] = 0x80547548u;
        a.r[1] = 0x802d84fcu;
        a.r[2] = 0x80547530u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80547550u, 1u);
    }
    if ((u32)(s8)rd8(0x80547551u) == 0u) {
        a.r[0] = 0x8054754cu;
        (void)tc_call(0x802d88d4u, &a);
        a.r[0] = 0x8054754cu;
        a.r[1] = 0x802d88e4u;
        a.r[2] = 0x8054753cu;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80547551u, 1u);
    }
    return;
}
