#include "tc_rt.h"

void fn_8020339c(s32 param_1)
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
        wr32(r30, 0x803772c4u);
    }
    a.r[0] = (u32)param_1 + 0x28u;
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
        wr32(r30, 0x8037727cu);
    }
    a.r[0] = (u32)param_1 + 0x28u;
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
        wr32(r30, 0x803772a0u);
    }
    a.r[0] = (u32)param_1 + 0x28u;
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
        wr32(r30, 0x80377258u);
    }
    a.r[0] = (u32)param_1 + 0x28u;
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
        wr32(r30, 0x80377210u);
    }
    a.r[0] = (u32)param_1 + 0x28u;
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
        wr32(r30, 0x80377234u);
    }
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = r30;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8348u, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xbd0u;
    a.r[1] = 1u;
    (void)tc_call(0x8020f18cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0xau;
    (void)tc_call(0x8020f18cu, &a);
    return;
}
