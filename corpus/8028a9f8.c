#include "tc_rt.h"

s32 fn_8028a9f8(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8028b7a8u, &a);
    if (param_1 == 0u || (u32)rd16(param_1 + 8u) == 0u) {
        (void)tc_call(0x8028b784u, &a);
        r3 = 0u;
    } else {
        r31 = rd32(param_1);
        r3 = rd32(r31 - 8u);
        if (r3 != 0u) {
            wr32(param_1, r3 + 8u);
        } else {
            wr32(param_1, 0u);
            wr32(param_1 + 4u, 0u);
        }
        wr16(param_1 + 8u, (u16)((u32)rd16(param_1 + 8u) - 1u));
        wr32(r31 - 8u, 0u);
        wr8(r31 - 2u, 1u);
        (void)tc_call(0x8028b784u, &a);
        r3 = r31;
    }
    return (s32)r3;
}
