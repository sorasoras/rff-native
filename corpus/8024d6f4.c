#include "tc_rt.h"

u32 fn_8024d6f4(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x80252588u, &a);
    r31 = r3;
    a.r[0] = param_1;
    r3 = tc_call(0x802525a8u, &a);
    r4 = ((u32)param_2 >> 0x1fu) & 1u;
    r0 = (((u32)param_2 << 0x1du) & 0xe0000000u) - r4;
    c0lt = (s32)r31 < 7;
    r0 = (r0 << 3u) | (r0 >> 0x1du);
    r30 = r0 + r4;
    if (r31 != 7u) {
        if (!c0lt) {
            if ((s32)r31 < 11) {
                r3 = rd32(0x80576c88u) + ((r30 << 4u) & 0xfffffff0u) + 0x258u;
                return r3;
            }
        } else if ((s32)r31 >= 6) {
            if ((r3 & 0xffu) == 0u) {
                r3 = rd32(0x80576c88u) + ((r30 << 4u) & 0xfffffff0u) + 0x2d8u;
                return r3;
            }
            r3 = rd32(0x80576c88u) + ((r30 << 4u) & 0xfffffff0u) + 0x358u;
            return r3;
        }
    }
    if ((r3 & 0xffu) == 0u) {
        r3 = rd32(0x80576c88u) + ((r30 << 4u) & 0xfffffff0u) + 0x258u;
    } else {
        r3 = rd32(0x80576c88u) + ((r30 << 4u) & 0xfffffff0u) + 0x2d8u;
    }
    return r3;
}
