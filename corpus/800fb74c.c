#include "tc_rt.h"

void fn_800fb74c(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = 0x24u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r29 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, r29);
        wr32(r30 + 0x20u, (u32)param_1);
        wr32(r30, 0x803605d4u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x24u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r29 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, r29);
        wr32(r30 + 0x20u, (u32)param_1);
        wr32(r30, 0x803605b0u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x28u;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r29 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, r29);
        wr32(r30 + 0x20u, (u32)param_1);
        wr32(r30, 0x8036058cu);
        wr32(r30 + 0x24u, 0u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x2cu;
    r3 = tc_call(0x800f80f8u, &a);
    r30 = r3;
    if (r3 != 0u) {
        r29 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r30 + 0x1cu, r29);
        wr32(r30 + 0x20u, (u32)param_1);
        wr32(r30, 0x80360568u);
        wr32(r30 + 0x24u, 0u);
        wr32(r30 + 0x28u, 0u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8348u, &a);
    r3 = tc_call(0x80040b64u, &a);
    wr32((u32)param_1 + 0x60u, r3 - (((ppc_mulhwu(0x88888889u, r3) >> 5u) & 0x7ffffffu) * 0x3cu));
    return;
}
