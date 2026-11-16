#include "tc_rt.h"

void fn_801bfac0(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801bf940u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 34);
    a.r[0] = 7u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    a.r[0] = 8u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    a.r[0] = 0x1bu;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r31 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = r31 + 0x66fu;
        (void)tc_call(0x801bfa04u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 72);
    r30 = 0u;
    r31 = 0x8033bad8u;
    do {
        a.r[0] = r30 + 0x48u;
        a.r[1] = rd32(r31);
        (void)tc_call(0x801bfa04u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 13);
    return;
}
