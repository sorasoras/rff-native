#include "tc_rt.h"

void fn_802449d4(u32 param_1)
{
    u32 r3 = 0;
    r3 = param_1;
    if (param_1 > 0x8000u) {
        r3 = 0x8000u;
    }
    wr16(0x8057183eu, (u16)r3);
    return;
}
