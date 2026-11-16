#include "tc_rt.h"

void fn_800a2560(f64 param_1, u32 param_2, s32 param_3)
{
    u32 r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_3 < (s32)rd32(param_2 + 0xcu)) {
        r31 = rd32(param_2 + 4u) + ((u32)param_3 * 0xe4u);
    } else {
        r31 = rd32(param_2 + 4u);
    }
    if (rd32(r31 + 0x48u) == 0u) {
        wrf32d(r31 + 0x24u, param_1);
        r5 = rd32(param_2 + 8u) + ((u32)param_3 * 0x14u);
        r6 = r5 + 4u;
        r5 = rd32(r5);
        a.r[0] = r31;
        a.r[1] = rd32(rd32(param_2) + 0x70u);
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80070170u, &a);
        a.r[0] = r31;
        (void)tc_call(0x8006ff58u, &a);
    }
    return;
}
