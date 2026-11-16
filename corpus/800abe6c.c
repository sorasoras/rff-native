#include "tc_rt.h"

void fn_800abe6c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x10u) == 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x30u);
        a.r[0] = r3;
        (void)tc_call(0x8015d1ecu, &a);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x40u);
        a.r[0] = r3;
        (void)tc_call(0x8015b9e4u, &a);
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x30u);
        wr32(r3 + 0x4b8u, 1u);
        if (rd32((u32)param_1 + 0x14u) == 0u) {
            wr32((u32)param_1 + 0x14u, 1u);
            (void)tc_call(0x800ab6f4u, &a);
            a.r[0] = 1u;
            (void)tc_call(0x800ab460u, &a);
            (void)tc_call(0x800ab4e0u, &a);
            (void)tc_call(0x800ab534u, &a);
        }
    }
    return;
}
