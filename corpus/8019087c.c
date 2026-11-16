#include "tc_rt.h"

void fn_8019087c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xc4u) != 0u) {
        r3 = rd32((u32)param_1 + 0xcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fec80u, &a);
        }
        a.r[0] = (u32)param_1 + 0x18u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        a.r[0] = (u32)param_1 + 0x70u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        a.r[0] = (u32)param_1 + 0x18u;
        r3 = tc_call(0x801f1144u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1 + 0x18u;
            a.r[1] = 0x8033ac36u;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = (u32)param_1 + 0x18u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
        }
        a.r[0] = (u32)param_1 + 0x70u;
        r3 = tc_call(0x801f1144u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1 + 0x70u;
            a.r[1] = 0x8033ac36u;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = (u32)param_1 + 0x70u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
        }
    }
    return;
}
