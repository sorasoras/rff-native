#include "tc_rt.h"

static void px_rec(u32 sp_, s32 param_1)
{
    u32 r1 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    wr32(r1 + 0x1cu, 0u);
    wr32(r1 + 0x18u, 0u);
    wr32(r1 + 0x14u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800625b8u, &a);
    r30 = 0u;
    r31 = 0u;
    wr32((u32)param_1 + 0x164u, rd32((u32)param_1 + 0x164u) + 1u);
    while (r30 < rd32((u32)param_1 + 0x328u)) {
        r3 = rd32(rd32((u32)param_1 + 0x324u) + r31);
        if (r3 != 0u) {
            px_rec(r1, r3);
        }
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    return;
}

void fn_8007e5d0(s32 param_1)
{
    px_rec(0x817fe000u, param_1);
}
