#include "tc_rt.h"

void fn_8012ceb4(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x3cu;
    r30 = 0u;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = r31;
        (void)tc_call(0x8012dbfcu, &a);
        r31 = r31 + 0x114u;
        r30 = r30 + 1u;
    }
    a.r[0] = rd32((u32)param_1 + 0x814u);
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = (u32)param_1 + 0x834u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = (u32)param_1 + 0x88cu;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    a.r[0] = (u32)param_1 + 0x834u;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x834u;
        a.r[1] = 0x80339ff3u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x834u;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    a.r[0] = (u32)param_1 + 0x88cu;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x88cu;
        a.r[1] = 0x80339ff3u;
        (void)tc_call(0x801f100cu, &a);
        a.r[0] = (u32)param_1 + 0x88cu;
        a.r[1] = 0u;
        (void)tc_call(0x801f10b8u, &a);
    }
    a.r[0] = (u32)param_1 + 0x7ccu;
    a.r[1] = 1u;
    (void)tc_call(0x800f857cu, &a);
    return;
}
