#include "tc_rt.h"

void fn_8028aed8(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r26 = 0, r29 = 0;
    TcArgs a = {0};
    if (param_r3 < 9u) {
        r26 = (param_r3 << 2u) & 0x3fcu;
        if (rd32(r26 - 0x7fac64e8u) != 0u) {
            (void)tc_call(0x8028b7a8u, &a);
            r3 = ((param_r3 << 4u) & 0xff0u) - 0x7fabef04u;
            if ((u32)rd16(r3 - 0x7668u) != 0u) {
                (void)tc_call(0x8028b7ecu, &a);
            } else {
                r29 = r26 - 0x7fabef04u;
                wr16(r3 - 0x766cu, 0u);
                wr16(r3 - 0x766au, 0u);
                wr16(r3 - 0x7668u, 0u);
                wr16(r3 - 0x7666u, 0u);
                wr32(r3 - 0x7674u, 0u);
                wr32(r3 - 0x7670u, 0u);
                a.r[0] = rd32(r29 - 0x75e4u);
                (void)tc_call(0x8028b81cu, &a);
                wr32(r29 - 0x75e4u, 0u);
                wr32(r26 - 0x7fac64c4u, 0u);
                r6 = 0u;
                wr16(((param_r3 << 1u) & 0x1feu) - 0x7fac64a0u, 0u);
                r4 = (u32)rd8(0x80539b83u);
                while ((r6 & 0xffu) < r4 && param_r3 != (u32)rd8((r6 & 0xffu) - 0x7fac6486u)) {
                    r6 = r6 + 1u;
                }
                while ((s32)(r6 & 0xffu) < (s32)((u32)rd8(0x80539b83u) - 1u)) {
                    r3 = r6 & 0xffu;
                    r6 = r6 + 1u;
                    r3 = r3 + 0x30000u;
                    r3 = r3 - 0x7582u;
                    r3 = r3 - 0x7faeef04u;
                    wr8(r3, rd8(r3 + 1u));
                }
                wr8(0x80539b83u, (u8)((u32)rd8(0x80539b83u) - 1u));
            }
            (void)tc_call(0x8028b784u, &a);
        }
    }
    return;
}
