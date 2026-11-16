#include "tc_rt.h"

u32 fn_802dfac8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1cu, param_2);
    wr32((u32)param_1 + 0x20u, param_3);
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = 0x802df5a4u;
    r3 = tc_call(0x802392b8u, &a);
    if (r3 != 0u) {
        wr8((u32)param_1 + 0x24u, 1u);
    }
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
