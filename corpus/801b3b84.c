#include "tc_rt.h"

void fn_801b3b84(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    wr32(0x80571380u, r3);
    wr32(0x80571384u, 0x80372588u);
    a.r[0] = 0x80571380u;
    a.r[1] = 0x801b3b44u;
    a.r[2] = 0x804dc4d0u;
    (void)tc_call(0x802551b8u, &a);
    r3 = tc_call(0x8005a0c8u, &a);
    wr32(0x80571388u, r3);
    wr32(0x8057138cu, 0x80372588u);
    a.r[0] = 0x80571388u;
    a.r[1] = 0x801b3b44u;
    a.r[2] = 0x804dc4dcu;
    (void)tc_call(0x802551b8u, &a);
    r3 = tc_call(0x800545e4u, &a);
    wr32(0x80571390u, r3);
    wr32(0x80571394u, 0x80372588u);
    a.r[0] = 0x80571390u;
    a.r[1] = 0x801b3b44u;
    a.r[2] = 0x804dc4e8u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
