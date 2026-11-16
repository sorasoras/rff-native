#include "tc_rt.h"

void fn_801c9ed8(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r7 = 0u;
    r6 = (u32)param_2;
    ctr = 5u;
    do {
        r8 = rd32(r6 + 0x1694u);
        if (r8 != 0u) {
            r5 = rd32(r8 + 0xe88u);
            wr32(r8 + 0xe88u, r5 | (r5 ^ 0x80000000u));
            wr32(r6 + 0x1694u, 0u);
        }
        r8 = rd32(r6 + 0x1698u);
        if (r8 != 0u) {
            r5 = rd32(r8 + 0xe88u);
            wr32(r8 + 0xe88u, r5 | (r5 ^ 0x80000000u));
            wr32(r6 + 0x1698u, 0u);
        }
        r8 = rd32(r6 + 0x169cu);
        if (r8 != 0u) {
            r5 = rd32(r8 + 0xe88u);
            wr32(r8 + 0xe88u, r5 | (r5 ^ 0x80000000u));
            wr32(r6 + 0x169cu, 0u);
        }
        r8 = rd32(r6 + 0x16a0u);
        if (r8 != 0u) {
            r5 = rd32(r8 + 0xe88u);
            wr32(r8 + 0xe88u, r5 | (r5 ^ 0x80000000u));
            wr32(r6 + 0x16a0u, 0u);
        }
        r8 = rd32(r6 + 0x16a4u);
        if (r8 != 0u) {
            r5 = rd32(r8 + 0xe88u);
            wr32(r8 + 0xe88u, r5 | (r5 ^ 0x80000000u));
            wr32(r6 + 0x16a4u, 0u);
        }
        r8 = rd32(r6 + 0x16a8u);
        if (r8 != 0u) {
            r5 = rd32(r8 + 0xe88u);
            wr32(r8 + 0xe88u, r5 | (r5 ^ 0x80000000u));
            wr32(r6 + 0x16a8u, 0u);
        }
        r6 = r6 + 0x18u;
        r7 = r7 + 5u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = rd32((u32)param_2 + 0x9cu);
    wr32((u32)param_2 + 0x1b0u, 0u);
    r0 = r0 & 0xfbffffffu;
    r0 = r0 & 0xdfffffffu;
    wr32((u32)param_2 + 0xed4u, 0u);
    wr32((u32)param_2 + 0x9cu, r0);
    a.r[0] = (u32)param_2;
    a.r[1] = 0x15u;
    (void)tc_call(0x800b31a0u, &a);
    a.r[0] = 0x80486da8u;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x800bca34u, &a);
    a.r[0] = (u32)param_1 + 0x17cu;
    (void)tc_call(0x8020bf8cu, &a);
    return;
}
