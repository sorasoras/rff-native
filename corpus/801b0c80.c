#include "tc_rt.h"

s32 fn_801b0c80(void)
{
    u32 r4 = 0, r5 = 0;
    if (rd32(0x805706e8u) != 7u) {
        return 0;
    }
    r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r4 = rd32(r4 + 8u);
        if (rd32(r4 + 0x84u) == 0x1f41u && rd32(r4 + 0x88u) == 1u) {
            return (s32)r4;
        }
    }
    return 0;
}
