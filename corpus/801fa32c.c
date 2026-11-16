#include "tc_rt.h"

void fn_801fa32c(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0;
    r0 = rd32(param_2);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (c0lt) {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                wr32(param_1 + 0x14u, rd32(param_1));
                wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
                return;
            }
            if (!c0lt) {
                wr32(param_1 + 0x14u, rd32(param_1 + 4u));
                wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
                return;
            }
            wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
            return;
        }
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            wr32(param_1 + 0x14u, rd32(param_1 + 0x10u));
            wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
            return;
        }
        if (!c0lt) {
            wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
            return;
        }
        wr32(param_1 + 0x14u, rd32(param_1 + 0xcu));
        wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
        return;
    }
    wr32(param_1 + 0x14u, rd32(param_1 + 8u));
    wr32(rd32(param_1 + 0x14u) + 0x64u, rd32(param_2 + 0x10u));
    return;
}
