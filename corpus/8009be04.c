#include "tc_rt.h"

u32 fn_8009be04(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r28 = 0u;
    if ((u32)param_1 != 0u && ((u32)param_2 != 0u || (u32)(s8)rd8((u32)param_1 + 0x70u) != 0u)) {
        if ((u32)param_2 != 1u || (u32)(s8)rd8((u32)param_1 + 0x71u) != 0u) {
            if ((u32)param_2 != 2u || (u32)(s8)rd8((u32)param_1 + 0x72u) != 0u) {
                r0 = rd32((u32)param_1 + 0xcu);
                if (r0 != 0u) {
                    r29 = ((u32)param_2 << 2u) & 0xfffffffcu;
                    r3 = rd32(r0 + r29 + 0xc0u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8009f2f4u, &a);
                        if (r3 > param_3 && rd32((u32)param_1 + 0x58u) == 1u) {
                            wr32((u32)param_1 + 0x10u, rd32(rd32((u32)param_1 + 0xcu) + r29 + 0xc0u));
                            wr32((u32)param_1 + 0x1cu, 0u);
                            wr32((u32)param_1 + 0x24u, param_3);
                            wr32((u32)param_1 + 0x50u, 0u);
                            wr32((u32)param_1 + 0x54u, 0u);
                            wr32((u32)param_1 + 0x58u, 4u);
                            wr32((u32)param_1 + 0x5cu, 0u);
                            wr32((u32)param_1 + 0x60u, 0u);
                            if ((u32)(s8)param_4 != 0u) {
                                a.r[0] = (u32)param_1;
                                a.r[1] = 0u;
                                (void)tc_call(0x8009f3a4u, &a);
                            }
                            r28 = 1u;
                        }
                    }
                }
            }
        }
    }
    return r28;
}
