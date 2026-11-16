#include "tc_rt.h"

u32 fn_80061154(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if (rd32((u32)param_1 + 0x174u) != 3u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800611a4u, &a);
    } else {
        r31 = 0u;
        (void)tc_call(0x80059270u, &a);
        wr32(0x805706e0u, 0u);
    }
    return r31;
}
