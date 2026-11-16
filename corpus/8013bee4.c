#include "tc_rt.h"

void fn_8013bee4(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = 0x24u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        r30 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, r30);
        wr32(r31 + 0x20u, (u32)param_1);
        wr32(r31, 0x80363c38u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x24u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        r30 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, r30);
        wr32(r31 + 0x20u, (u32)param_1);
        wr32(r31, 0x80363c14u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = 0x24u;
    r3 = tc_call(0x800f80f8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        r30 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800f8170u, &a);
        wr32(r31 + 0x1cu, r30);
        wr32(r31 + 0x20u, (u32)param_1);
        wr32(r31, 0x80363bf0u);
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = r31;
    (void)tc_call(0x800f8658u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 2u;
    (void)tc_call(0x800f8348u, &a);
    return;
}
