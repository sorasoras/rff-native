#include "tc_rt.h"

u32 fn_80232034(void)
{
    u32 r0 = 0;
    r0 = rd32(0x8057158cu) | rd32(0x80571588u);
    return (u32)((u64)~(r0 - 1u) + (u64)r0 + (u64)((r0 - 1u) < r0));
}
