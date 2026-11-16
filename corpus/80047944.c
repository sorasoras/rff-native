#include "tc_rt.h"

void fn_80047944(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = (rd32(0x803c273cu) << 3u) & 0xfffffff8u;
    wr32(r0 - 0x7fc3d8ecu, param_2);
    wr32(r0 - 0x7fc3d8f0u, param_1);
    r0 = rd32(0x803c273cu) + 1u;
    wr32(0x803c273cu, r0);
    if ((s32)r0 >= 5) {
        wr32(0x803c273cu, 0u);
        return;
    }
    return;
}
