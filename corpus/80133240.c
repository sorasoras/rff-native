#include "tc_rt.h"

void fn_80133240(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
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
        wr32(r30, 0x80363938u);
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
        wr32(r30, 0x80363860u);
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
        wr32(r30, 0x8036383cu);
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
        wr32(r30, 0x803637f4u);
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
        wr32(r30, 0x80363914u);
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
        wr32(r30, 0x803638f0u);
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
        wr32(r30, 0x80363818u);
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
        wr32(r30, 0x803638ccu);
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
        wr32(r30, 0x80363884u);
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
        wr32(r30, 0x803638a8u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    r4 = 1u;
    if ((s32)rd32(rd32((u32)param_1 + 0x1cu) + 0x8f0u) > 0) {
        r4 = 6u;
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r4;
    (void)tc_call(0x800f8348u, &a);
    wr32((u32)param_1 + 0x5cu, 0u);
    return;
}
