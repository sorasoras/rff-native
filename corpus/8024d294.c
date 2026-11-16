#include "tc_rt.h"

void fn_8024d294(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x18u);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = rd32((u32)param_1 + 0x20u);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
    }
    a.r[0] = rd32(param_2 + 0xcu);
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = rd32(param_2 + 0x10u);
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    a.r[0] = rd32(param_2 + 0x14u);
    (void)tc_call(0x8024cbc8u, &a);
    do {
        r3 = tc_call(0x8024cb94u, &a);
    } while (r3 != 0u);
    if (rd32(param_2) == 0u) {
        a.r[0] = (u32)rd16(param_2 + 0x24u);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
    } else {
        a.r[0] = (u32)rd16(param_2 + 0x26u);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = rd32(param_2 + 0x18u);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = rd32(param_2 + 0x1cu);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
        a.r[0] = rd32(param_2 + 0x20u);
        (void)tc_call(0x8024cbc8u, &a);
        do {
            r3 = tc_call(0x8024cb94u, &a);
        } while (r3 != 0u);
    }
    return;
}
