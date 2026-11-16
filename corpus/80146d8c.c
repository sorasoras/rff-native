#include "tc_rt.h"

void fn_80146d8c(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = (u32)param_1 + ((u32)param_2 * 0x94u);
    wr32(r3 + 0x744u, 0xffffffffu);
    wr16(r3 + 0x748u, 0u);
    wr8(r3 + 0x7cau, 0xffu);
    wr32(r3 + 0x740u, 0xffffffffu);
    wr8(r3 + 0x7cbu, 3u);
    wr8(r3 + 0x7ccu, 3u);
    return;
}
