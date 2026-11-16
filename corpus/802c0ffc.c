#include "tc_rt.h"

void fn_802c0ffc(u32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32(param_1);
    if ((s32)r5 < 4) {
        if ((u32)rd8(param_1 + 0x1cu) == 0u) {
            return;
        }
        wr8(param_1 + 0x1cu, 0u);
        a.r[0] = r5;
        a.r[1] = 0u;
        (void)tc_call(0x8027a740u, &a);
        return;
    }
    return;
}
