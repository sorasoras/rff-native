#include "tc_rt.h"

void fn_8024d660(u32 param_1)
{
    u32 r0 = 0;
    wr32(param_1 + 8u, 0u);
    wr32(param_1, 3u);
    if (rd32(0x80571948u) == param_1) {
        r0 = rd32(param_1 + 0x38u);
        if (r0 != 0u) {
            wr32(0x80571948u, r0);
            wr32(rd32(param_1 + 0x38u) + 0x3cu, 0u);
            return;
        }
        wr32(0x8057194cu, 0u);
        wr32(0x80571944u, 0u);
        wr32(0x80571948u, 0u);
        return;
    }
    if (rd32(0x80571944u) == param_1) {
        wr32(0x80571944u, rd32(param_1 + 0x3cu));
        wr32(rd32(param_1 + 0x3cu) + 0x38u, 0u);
        wr32(0x8057194cu, rd32(0x80571948u));
        return;
    }
    wr32(0x8057194cu, rd32(param_1 + 0x38u));
    wr32(rd32(param_1 + 0x3cu) + 0x38u, rd32(param_1 + 0x38u));
    wr32(rd32(param_1 + 0x38u) + 0x3cu, rd32(param_1 + 0x3cu));
    return;
}
