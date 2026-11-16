#include "tc_rt.h"

void fn_800b3fd8(s32 param_1)
{
    u32 c0lt = 0, r4 = 0;
    r4 = rd32((u32)param_1 + 0xe80u) + 1u;
    c0lt = (s32)r4 < (s32)rd32((u32)param_1 + 0xe84u);
    wr32((u32)param_1 + 0xe80u, r4);
    if (!c0lt) {
        r4 = rd32((u32)param_1 + 0xe88u);
        wr32((u32)param_1 + 0xe88u, r4 | (r4 ^ 0x10000u));
    }
    wr8((u32)param_1 + 0xebdu, 0u);
    wr8((u32)param_1 + 0xebcu, 0u);
    return;
}
