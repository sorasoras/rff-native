#include "tc_rt.h"

u32 fn_8014ea80(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x124u) == 2u) {
        r4 = rd32((u32)param_1 + 0x250u);
        wr32((u32)param_1 + 0x124u, 5u);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = r4;
            (void)tc_call(0x8010a74cu, &a);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
