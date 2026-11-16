#include "tc_rt.h"

void fn_8024d438(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    do {
        r3 = tc_call(0x8024cba4u, &a);
    } while (r3 == 0u);
    (void)tc_call(0x8024cbb4u, &a);
    a.r[0] = 0x80f3a001u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = rd32((u32)param_1 + 0xcu);
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = 0x80f3c002u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = rd32((u32)param_1 + 0x14u) & 0xffffu;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = 0x80f3a002u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = rd32((u32)param_1 + 0x10u);
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = 0x80f3b002u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = 0x80f3d001u;
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = (u32)rd16((u32)param_1 + 0x24u);
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    (void)tc_call(0x8024ce10u, &a);
    (void)tc_call(0x8024ce10u, &a);
    (void)tc_call(0x8024ce10u, &a);
    (void)tc_call(0x8024ce10u, &a);
    (void)tc_call(0x8024ce10u, &a);
    (void)tc_call(0x8024ce10u, &a);
    return;
}
