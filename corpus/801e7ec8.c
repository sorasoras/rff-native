#include "tc_rt.h"

void fn_801e7ec8(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x1bcu);
    if ((r4 == 0x43u || r4 == 0x63u) || r4 == 0x67u) {
        wr32((u32)param_1 + 0x340u, 0u);
        wr32((u32)param_1 + 0x344u, 1u);
        return;
    }
    if ((r4 == 0x44u || r4 == 0x6bu) || r4 == 0x6eu) {
        wr32((u32)param_1 + 0x340u, 2u);
        wr32((u32)param_1 + 0x344u, 3u);
        return;
    }
    if ((r4 == 0x45u || r4 == 0x71u) || r4 == 0x76u) {
        wr32((u32)param_1 + 0x340u, 4u);
        wr32((u32)param_1 + 0x344u, 5u);
        return;
    }
    if (r4 == 0x46u || (r4 - 0x7bu) <= 1u) {
        wr32((u32)param_1 + 0x340u, 6u);
        wr32((u32)param_1 + 0x344u, 7u);
        return;
    }
    if (r4 == 0x47u || (r4 - 0x7du) <= 1u) {
        wr32((u32)param_1 + 0x340u, 8u);
        wr32((u32)param_1 + 0x344u, 9u);
        return;
    }
    if ((r4 == 0x48u || r4 == 0x7fu) || r4 == 0x81u) {
        wr32((u32)param_1 + 0x340u, 0xau);
        wr32((u32)param_1 + 0x344u, 0xbu);
        return;
    }
    if ((r4 == 0x4au || r4 == 0x83u) || r4 == 0x85u) {
        wr32((u32)param_1 + 0x340u, 0x12u);
        wr32((u32)param_1 + 0x344u, 0x13u);
        return;
    }
    if (r4 == 0x4du || (r4 - 0x89u) <= 1u) {
        wr32((u32)param_1 + 0x340u, 0xcu);
        wr32((u32)param_1 + 0x344u, 0xdu);
        return;
    }
    if ((r4 == 0x4eu || r4 == 0x8bu) || r4 == 0x90u) {
        wr32((u32)param_1 + 0x340u, 0xeu);
        wr32((u32)param_1 + 0x344u, 0xfu);
        return;
    }
    if (r4 == 0x4cu || (r4 - 0x87u) <= 1u) {
        wr32((u32)param_1 + 0x340u, 0x10u);
        wr32((u32)param_1 + 0x344u, 0x11u);
        return;
    }
    return;
}
