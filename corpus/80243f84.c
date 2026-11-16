#include "tc_rt.h"

u32 fn_80243f84(void)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32(0x80571850u);
    r3 = r4 + 1u;
    wr32(0x80571850u, r3 & 1u);
    wr32(0x8057184cu, ((r3 << 7u) & 0x80u) - 0x7fb16a00u);
    return ((r4 << 7u) & 0xffffff80u) - 0x7fb16a00u;
}
