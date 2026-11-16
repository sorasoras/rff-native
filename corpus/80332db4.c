#include "tc_rt.h"

s32 fn_80332db4(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x3cu);
    while (r5 != 0u && rd32(r5 + 0xcu) != 1u) {
        r4 = (u32)rd16((u32)param_1 + 0x42u);
        r5 = rd32(r5 + r4);
        while (r5 != 0u && rd32(r5 + 0xcu) != 1u) {
            r5 = rd32(r5 + r4);
        }
    }
    return (s32)r5;
}
