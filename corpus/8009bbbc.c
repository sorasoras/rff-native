#include "tc_rt.h"

u32 fn_8009bbbc(s32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0;
    TcArgs a = {0};
    r27 = param_2;
    if ((u32)param_1 == 0u || (rd32((u32)param_1 + 0x50u) & 2u) == 0u) {
        r3 = 0u;
    } else {
        if (param_2 == 0u) {
            if ((u32)(s8)param_4 != 0u) {
                r0 = rd32((u32)param_1 + 0x68u);
                if (param_2 < r0) {
                    r27 = r0;
                }
            }
            if ((u32)(s8)param_5 != 0u) {
                r0 = rd32((u32)param_1 + 0x78u);
                if (r27 < r0) {
                    r27 = r0;
                }
            }
            if ((u32)(s8)param_6 != 0u) {
                r0 = rd32((u32)param_1 + 0x88u);
                if (r27 < r0) {
                    r27 = r0;
                }
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = (r27 & 0xfffffffcu) + 0x74u;
        r3 = tc_call(0x8009c050u, &a);
        if (r3 != 0u) {
            r4 = rd32((u32)param_1 + 0x4cu);
            r5 = 0u;
            while (r4 != 0u && rd32(r4 + 8u) <= param_3) {
                r5 = r4;
                r4 = rd32(r4 + 4u);
            }
            wr32(r3, r5);
            if (r5 == 0u) {
                wr32(r3 + 4u, rd32((u32)param_1 + 0x4cu));
                wr32((u32)param_1 + 0x4cu, r3);
            } else {
                wr32(r3 + 4u, rd32(r5 + 4u));
                wr32(r5 + 4u, r3);
            }
            r4 = rd32(r3 + 4u);
            if (r4 != 0u) {
                wr32(r4, r3);
            }
            wr32(r3 + 8u, param_3);
            wr32(r3 + 0xcu, (u32)param_1);
            wr32(r3 + 0x10u, 0u);
            wr32(r3 + 0x14u, r3 + 0x74u);
            wr32(r3 + 0x18u, (r27 >> 2u) & 0x3fffffffu);
            wr32(r3 + 0x1cu, 0u);
            wr32(r3 + 0x20u, 3u);
            wr32(r3 + 0x24u, 0u);
            wr32(r3 + 0x28u, 0u);
            wr32(r3 + 0x2cu, 0u);
            wr32(r3 + 0x30u, 0u);
            wr32(r3 + 0x34u, 0u);
            wr32(r3 + 0x38u, 0u);
            wr32(r3 + 0x3cu, 0u);
            wr32(r3 + 0x40u, 0u);
            wr32(r3 + 0x44u, 0u);
            wr32(r3 + 0x48u, 0u);
            wr32(r3 + 0x4cu, 0u);
            wr32(r3 + 0x50u, 0u);
            wr32(r3 + 0x54u, 0u);
            wr32(r3 + 0x58u, 1u);
            wr32(r3 + 0x5cu, 0u);
            wr32(r3 + 0x60u, 0u);
            wr32(r3 + 0x64u, 0xffffffffu);
            wr8(r3 + 0x68u, 0u);
            wr32(r3 + 0x6cu, 0u);
            wr8(r3 + 0x70u, (u8)param_4);
            wr8(r3 + 0x71u, (u8)param_5);
            wr8(r3 + 0x72u, (u8)param_6);
        }
    }
    return r3;
}
