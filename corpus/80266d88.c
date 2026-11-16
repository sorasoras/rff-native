#include "tc_rt.h"

s32 fn_80266d88(u32 param_1, u32 param_2)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0x300u;
    r29 = 0u;
    wr32(param_2, 0u);
    while ((s32)r29 < 3) {
        r31 = 0u;
        if ((s32)r29 >= 0 && (s32)r29 < 3) {
            r31 = (r29 * 0x890u) - 0x7faff2c0u;
        }
        (void)tc_call(0x802689dcu, &a);
        if (rd32(r31 + 4u) == 0u) {
            wr32(r31 + 8u, 0u);
            r30 = 0u;
            wr32(r31 + 0xcu, 0u);
            wr32(r31 + 4u, 1u);
            wr32(param_2, r31);
            wr32(param_1, r29);
            r29 = 3u;
        }
        (void)tc_call(0x802689d4u, &a);
        r29 = r29 + 1u;
    }
    if (r30 == 0x300u) {
        a.r[0] = 0x8033daa8u;
        (void)tc_call(0x80267074u, &a);
    }
    return (s32)r30;
}
