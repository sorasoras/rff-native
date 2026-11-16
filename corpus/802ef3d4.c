#include "tc_rt.h"

void fn_802ef3d4(u32 param_1)
{
    u32 c0eq = 0;
    TcArgs a = {0};
    c0eq = rd32(param_1 + 4u) == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = rd32(0x80571d40u);
            (void)tc_call(0x8026d4a0u, &a);
        }
        wr32(param_1 + 4u, 0u);
        wr8(param_1, 0u);
        wr8(param_1 + 1u, 0u);
    }
    return;
}
