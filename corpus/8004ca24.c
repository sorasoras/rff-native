#include "tc_rt.h"

s32 fn_8004ca24(s32 param_1)
{
    u32 r3 = 0, r6 = 0;
    r3 = rd32(0x803c62f4u);
    r6 = ((u32)param_1 + 0x1fu) & 0xffffffe0u;
    if ((r6 + (r3 - rd32(0x803c62f0u))) >= rd32(0x803c62f8u)) {
        return 0;
    }
    wr32(0x803c62f4u, r3 + r6);
    return (s32)r3;
}
