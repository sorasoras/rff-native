#include "tc_rt.h"

u32 fn_8015b3a8(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, ca = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    r5 = rd32(param_1);
    if ((s32)r5 < 400 || (s32)r5 >= 533) {
        return param_2;
    }
    r0 = r5 - 0x191u;
    r6 = (r0 << 0x1eu) & 0xc0000000u;
    r7 = (r0 >> 0x1fu) & 1u;
    ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
    r0 = (u32)((s32)r0 >> 2);
    r6 = r6 - r7;
    r6 = (r6 << 2u) | (r6 >> 0x1eu);
    r6 = r6 + r7;
    wr32(0x804bf040u, (u32)((u64)r0 + (u64)ca));
    c0lt = (s32)r6 < 2;
    if (r6 == 2u) {
        r6 = 2u;
    } else if (!c0lt) {
        if ((s32)r6 < 4) {
            r6 = 5u;
        }
    } else {
        c0lt = (s32)r6 < 0;
        if (r6 == 0u) {
            r6 = 0u;
        } else if (!c0lt) {
            r6 = 1u;
        }
    }
    wr32(0x804bf044u, r6);
    wr32(0x804bf048u, rd32(param_2));
    wr32(param_1, 0x183u);
    return 0x804bf040u;
}
