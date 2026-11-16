#include "tc_rt.h"

void fn_802e3e20(void)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571d28u) == 0u) {
        a.r[0] = 0x80571d20u;
        (void)tc_call(0x802ded84u, &a);
        a.r[0] = 0x80571d20u;
        a.r[1] = 0x802ded94u;
        a.r[2] = 0x80548128u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d28u, 1u);
    }
    if ((u32)(s8)rd8(0x80571d29u) == 0u) {
        a.r[0] = 0x80571d24u;
        (void)tc_call(0x802df0ecu, &a);
        a.r[0] = 0x80571d24u;
        a.r[1] = 0x802df0fcu;
        a.r[2] = 0x80548134u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d29u, 1u);
    }
    return;
}
