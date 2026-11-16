#include "tc_rt.h"

s32 fn_8012d6e0(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    if (rd32((u32)param_1 + 0xcu) != 6u) {
        return (s32)rd32((u32)param_1 + 0x810u);
    }
    r5 = rd32((u32)param_1 + 0x810u);
    r3 = ppc_mulhw(1431655766, (s32)r5);
    r3 = r5 - ((r3 + ((r3 >> 0x1fu) & 1u)) * 3u);
    return (s32)r3;
}
