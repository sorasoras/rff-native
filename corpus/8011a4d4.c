#include "tc_rt.h"

u32 fn_8011a4d4(void)
{
    TcArgs a = {0};
    wr32(0x80571274u, 0u);
    wr32(0x80571278u, 0u);
    wr32(0x8057127cu, 1u);
    a.r[0] = 0x804bc300u;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x804bc340u;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x804bc300u;
    a.r[1] = rd32(0x805707f4u);
    (void)tc_call(0x8025e7c0u, &a);
    a.r[0] = 0x804bc340u;
    a.r[1] = rd32(0x805707f8u);
    (void)tc_call(0x8025e7c0u, &a);
    wr32(0x80571270u, 0u);
    return 1u;
}
