#include "tc_rt.h"

void fn_800748d4(s32 param_1)
{
    u32 r5 = 0, r6 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x48u) != 0u) {
        r6 = rd32(0x8046ad4cu);
        while (r6 != 0u) {
            r5 = r6;
            r6 = rd32(r6);
            if ((u32)param_1 == rd32(r5 + 8u)) {
                return;
            }
        }
        a.r[0] = 0x8046ad4cu;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8007b03cu, &a);
        return;
    }
    return;
}
