#include "tc_rt.h"

void fn_80130830(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    do {
        r3 = rd32(r31 + 0x2cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fec80u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 3);
    r3 = rd32((u32)param_1 + 0x860u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fec80u, &a);
    }
    r31 = (u32)param_1 + 0x688u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x801e6364u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x74u;
    } while ((s32)r30 < 3);
    a.r[0] = (u32)param_1 + 0x7ecu;
    (void)tc_call(0x801e6364u, &a);
    r31 = (u32)param_1 + 0x5a8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020f030u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 4);
    if (rd32((u32)param_1 + 0x864u) != 0u) {
        a.r[0] = (u32)param_1 + 0x868u;
        a.r[1] = 1u;
        (void)tc_call(0x801f0fa0u, &a);
        a.r[0] = (u32)param_1 + 0x868u;
        r3 = tc_call(0x801f1144u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1 + 0x868u;
            a.r[1] = 0x8033a114u;
            (void)tc_call(0x801f100cu, &a);
            a.r[0] = (u32)param_1 + 0x868u;
            a.r[1] = 0u;
            (void)tc_call(0x801f10b8u, &a);
        }
    }
    return;
}
