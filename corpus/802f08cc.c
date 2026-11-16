#include "tc_rt.h"

u32 fn_802f08cc(void)
{
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571d70u) == 0u) {
        a.r[0] = 0x80548270u;
        (void)tc_call(0x802f03acu, &a);
        a.r[0] = 0x80548270u;
        a.r[1] = 0x802f0930u;
        a.r[2] = 0x80548260u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d70u, 1u);
    }
    return 0x80548270u;
}
