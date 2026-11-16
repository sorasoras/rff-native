#include "tc_rt.h"

void fn_8022d8b8(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32(0x80571500u);
    while (r5 != 0u && rd32(r5 + 4u) <= rd32((u32)param_1 + 4u)) {
        r5 = rd32(r5 + 8u);
    }
    if (r5 == 0u) {
        r4 = rd32(0x80571504u);
        if (r4 == 0u) {
            wr32(0x80571500u, (u32)param_1);
        } else {
            wr32(r4 + 8u, (u32)param_1);
        }
        wr32((u32)param_1 + 0xcu, r4);
        wr32((u32)param_1 + 8u, 0u);
        wr32(0x80571504u, (u32)param_1);
        return;
    }
    wr32((u32)param_1 + 8u, r5);
    r4 = rd32(r5 + 0xcu);
    wr32(r5 + 0xcu, (u32)param_1);
    wr32((u32)param_1 + 0xcu, r4);
    if (r4 == 0u) {
        wr32(0x80571500u, (u32)param_1);
        return;
    }
    wr32(r4 + 8u, (u32)param_1);
    return;
}
