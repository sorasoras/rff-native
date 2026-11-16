#include "tc_rt.h"

void fn_800545f0(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803d18c8u;
    a.r[1] = 0x80054f0cu;
    a.r[2] = 0x800552c4u;
    a.r[3] = 0x6d0u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8005466cu;
    a.r[2] = 0x803d18b8u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803d2678u;
    (void)tc_call(0x80057260u, &a);
    a.r[0] = 0x803d2678u;
    a.r[1] = 0x80057430u;
    a.r[2] = 0x803d2668u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
