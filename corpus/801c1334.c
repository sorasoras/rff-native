#include "tc_rt.h"

void fn_801c1334(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20cu;
    a.r[1] = param_2;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_1 + 0x114u;
    (void)tc_call(0x801c1198u, &a);
    a.r[0] = (u32)param_1 + 0x98u;
    a.r[1] = (u32)param_1 + 0x1cu;
    a.r[2] = 0x7cu;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x801c11acu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x98u;
        a.r[1] = r3;
        a.r[2] = param_2;
        (void)tc_call(0x801a78c8u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = r31;
    a.r[2] = (u32)param_1 + 0x190u;
    (void)tc_call(0x801c1198u, &a);
    return;
}
