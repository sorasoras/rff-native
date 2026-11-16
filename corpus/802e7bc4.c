#include "tc_rt.h"

void fn_802e7bc4(s32 param_1)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    c0eq = rd32((u32)param_1 + 0xd8u) == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = rd32(0x80571d40u);
            (void)tc_call(0x8026d4a0u, &a);
        }
        wr32((u32)param_1 + 0xd8u, 0u);
        wr16((u32)param_1 + 0xfcu, 0u);
    }
    return;
}
