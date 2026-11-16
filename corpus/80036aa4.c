#include "tc_rt.h"

s32 fn_80036aa4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r29 = 0;
    TcArgs a = {0};
    if (rd32(param_1 + 4u) == 0u) {
        r29 = rd32(rd32(0x803a3ea0u) + 4u) + ((rd32(param_1) << 4u) & 0xfffffff0u);
        if (rd32(r29 + 4u) != 0u) {
            if (param_2 != 0u) {
                wr32(param_2, (rd32(r29) + 0x1fu) & 0xffffffe0u);
            }
            if (param_3 != 0u) {
                wr32(param_3, (rd32(r29 + 4u) + 0x1fu) & 0xffffffe0u);
            }
        } else {
            if (param_2 != 0u) {
                wr32(param_2, 0u);
            }
            if (param_3 != 0u) {
                wr32(param_3, (rd32(r29) + 0x1fu) & 0xffffffe0u);
            }
        }
        if (param_4 != 0u) {
            wr32(param_4, rd32(r29 + 8u));
        }
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = param_4;
        (void)tc_call(0x80036a44u, &a);
        r3 = rd32(0x803a3ea4u) + (rd32(r29 + 0xcu) * 0x3cu);
    } else {
        if (param_3 != 0u) {
            wr32(param_3, (rd32(rd32(param_1 + 0x30u) + 0x34u) + 0x1fu) & 0xffffffe0u);
        }
        if (param_4 != 0u) {
            wr32(param_4, 0u);
        }
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = param_4;
        (void)tc_call(0x80036a44u, &a);
        r3 = rd32(param_1 + 0x30u);
    }
    return (s32)r3;
}
