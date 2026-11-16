#include "tc_rt.h"

void fn_80213570(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_2 >= 0) {
        if (param_2 >= (s32)rd32(rd32((u32)param_1 + 0x4ecu))) {
            return;
        }
        a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x60u);
        (void)tc_call(0x80219c1cu, &a);
        return;
    }
    return;
}
