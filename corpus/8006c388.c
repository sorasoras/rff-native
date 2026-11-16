#include "tc_rt.h"

void fn_8006c388(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x290u);
    if (r0 != 0x11u) {
        if (r0 == 0x12u && rd32((u32)param_1 + 0xa58u) != 0x20u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9808u, &a);
        }
    } else {
        if (rd32((u32)param_1 + 0xa58u) != 0x20u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9808u, &a);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        r3 = tc_call(0x800c134cu, &a);
        wr32((u32)param_1 + 0x290u, r3);
        if (r3 == 0x12u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9808u, &a);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006c418u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800672c4u, &a);
    return;
}
