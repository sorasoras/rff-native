#include "tc_rt.h"

void fn_8030e384(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = param_r4 + 0x114u;
    r30 = r3;
    a.r[0] = param_r3 + 4u;
    a.r[1] = r29;
    (void)tc_call(0x802debd0u, &a);
    wr32(0x817fdfdcu, param_r3 + 0x14u);
    a.r[0] = param_r3 + 0x10u;
    a.r[1] = 0x817fdfdcu;
    a.r[2] = r29;
    (void)tc_call(0x802deba4u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    a.r[0] = param_r3 + 0x10u;
    a.r[1] = r29;
    (void)tc_call(0x802debd0u, &a);
    r5 = rd32(param_r3 + 8u);
    r3 = param_r3 + 8u;
    while (r3 != r5) {
        r6 = rd32(r3 + 4u);
        if ((s32)rd32(r6 - 0x70u) <= (s32)rd32(param_r4 + 0xa4u)) break;
        r3 = r6;
    }
    wr32(0x817fdfd8u, r3);
    a.r[0] = param_r3 + 4u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = r29;
    (void)tc_call(0x802deba4u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    r30 = param_r3 + 8u;
    while (r29 != r30) {
        r0 = rd32(r29 - 0x70u);
        r3 = r29 - 0x114u;
        if ((s32)r0 <= 1) break;
        if (r0 != 0xffu) {
            a.r[0] = r3;
            (void)tc_call(0x8030c8bcu, &a);
        }
        r29 = rd32(r29);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
