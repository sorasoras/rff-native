#include "tc_rt.h"

void fn_8009561c(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x110u);
    if (r4 != 0xffffffffu) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0x110u, 0xffffffffu);
    }
    a.r[0] = (u32)param_1 + 0xd4u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + 0xd0u, 0u);
    a.r[0] = (u32)param_1 + 0xd8u;
    (void)tc_call(0x8007ae84u, &a);
    wr32((u32)param_1 + 0xfcu, 0u);
    wr32((u32)param_1 + 0xf4u, 0u);
    wr32((u32)param_1 + 0xf8u, 0u);
    return;
}
