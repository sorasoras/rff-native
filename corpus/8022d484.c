#include "tc_rt.h"

void fn_8022d484(void)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr16(0xcc004020u, 0u);
    r30 = r3;
    wr16(0xcc004010u, 0xffu);
    a.r[0] = 0xf0000000u;
    (void)tc_call(0x8022c640u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8022cd8cu;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 1u;
    a.r[1] = 0x8022cd8cu;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x8022cd8cu;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 3u;
    a.r[1] = 0x8022cd8cu;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 4u;
    a.r[1] = 0x8022cd8cu;
    (void)tc_call(0x8022c2fcu, &a);
    a.r[0] = 0x8037a848u;
    (void)tc_call(0x8022d8b8u, &a);
    (void)tc_call(0x8022d334u, &a);
    a.r[0] = 0x8000000u;
    (void)tc_call(0x8022c6c0u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
