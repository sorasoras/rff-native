#include "tc_rt.h"

void fn_8022f550(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, s32 param_6, u32 param_7)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    if (param_6 < 0 || param_6 > 31) {
    } else {
        r6 = param_4 & 0xfffffff8u;
        wr16(param_1 + 0x2c8u, 1u);
        wr16(param_1 + 0x2cau, (u16)(param_7 & 1u));
        wr32(param_1 + 0x2d4u, (u32)param_6);
        wr32(param_1 + 0x2d0u, (u32)param_6);
        wr32(param_1 + 0x2ccu, 1u);
        wr32(param_1 + 0x2d8u, 0xffffffffu);
        wr32(param_1 + 0x2f0u, 0u);
        wr32(param_1 + 0x2ecu, 0u);
        wr32(param_1 + 0x2e8u, 0u);
        wr32(param_1 + 0x2f8u, 0u);
        wr32(param_1 + 0x2f4u, 0u);
        wr32(r6 - 8u, 0u);
        wr32(r6 - 4u, 0u);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r6 - 8u;
        (void)tc_call(0x8022816cu, &a);
        r4 = param_4 - (u32)param_5;
        wr32(param_1 + 0x84u, 0x8022f7bcu);
        wr32(param_1 + 0xcu, param_3);
        wr32(param_1 + 0x304u, param_4);
        wr32(param_1 + 0x308u, r4);
        wr32(r4, 0xdeadbabeu);
        wr32(param_1 + 0x30cu, 0u);
        wr32(param_1 + 0x310u, 0u);
        wr32(param_1 + 0x314u, 0u);
        r3 = tc_call(0x8022c2b0u, &a);
        if (rd32(0x804dfef0u) != 0u) {
            r6 = param_1 + 0x90u;
            r7 = param_1 + 0x1c8u;
            r4 = (u32)rd16(param_1 + 0x1a2u) | 1u;
            wr32(param_1 + 0x19cu, rd32(param_1 + 0x19cu) | 0x900u);
            wr16(param_1 + 0x1a2u, (u16)r4);
            wr32(param_1 + 0x194u, (rd32(0x80570a58u) & 0xf8u) | 4u);
            ctr = 2u;
            do {
                wr32(r6 + 4u, 0xffffffffu);
                wr32(r6, 0xffffffffu);
                wr32(r7 + 4u, 0xffffffffu);
                wr32(r7, 0xffffffffu);
                wr32(r6 + 0xcu, 0xffffffffu);
                wr32(r6 + 8u, 0xffffffffu);
                wr32(r7 + 0xcu, 0xffffffffu);
                wr32(r7 + 8u, 0xffffffffu);
                wr32(r6 + 0x14u, 0xffffffffu);
                wr32(r6 + 0x10u, 0xffffffffu);
                wr32(r7 + 0x14u, 0xffffffffu);
                wr32(r7 + 0x10u, 0xffffffffu);
                wr32(r6 + 0x1cu, 0xffffffffu);
                wr32(r6 + 0x18u, 0xffffffffu);
                wr32(r7 + 0x1cu, 0xffffffffu);
                wr32(r7 + 0x18u, 0xffffffffu);
                wr32(r6 + 0x24u, 0xffffffffu);
                wr32(r6 + 0x20u, 0xffffffffu);
                wr32(r7 + 0x24u, 0xffffffffu);
                wr32(r7 + 0x20u, 0xffffffffu);
                wr32(r6 + 0x2cu, 0xffffffffu);
                wr32(r6 + 0x28u, 0xffffffffu);
                wr32(r7 + 0x2cu, 0xffffffffu);
                wr32(r7 + 0x28u, 0xffffffffu);
                wr32(r6 + 0x34u, 0xffffffffu);
                wr32(r6 + 0x30u, 0xffffffffu);
                wr32(r7 + 0x34u, 0xffffffffu);
                wr32(r7 + 0x30u, 0xffffffffu);
                wr32(r6 + 0x3cu, 0xffffffffu);
                wr32(r6 + 0x38u, 0xffffffffu);
                wr32(r7 + 0x3cu, 0xffffffffu);
                wr32(r7 + 0x38u, 0xffffffffu);
                wr32(r6 + 0x44u, 0xffffffffu);
                wr32(r6 + 0x40u, 0xffffffffu);
                wr32(r7 + 0x44u, 0xffffffffu);
                wr32(r7 + 0x40u, 0xffffffffu);
                wr32(r6 + 0x4cu, 0xffffffffu);
                wr32(r6 + 0x48u, 0xffffffffu);
                wr32(r7 + 0x4cu, 0xffffffffu);
                wr32(r7 + 0x48u, 0xffffffffu);
                wr32(r6 + 0x54u, 0xffffffffu);
                wr32(r6 + 0x50u, 0xffffffffu);
                wr32(r7 + 0x54u, 0xffffffffu);
                wr32(r7 + 0x50u, 0xffffffffu);
                wr32(r6 + 0x5cu, 0xffffffffu);
                wr32(r6 + 0x58u, 0xffffffffu);
                wr32(r7 + 0x5cu, 0xffffffffu);
                wr32(r7 + 0x58u, 0xffffffffu);
                wr32(r6 + 0x64u, 0xffffffffu);
                wr32(r6 + 0x60u, 0xffffffffu);
                wr32(r7 + 0x64u, 0xffffffffu);
                wr32(r7 + 0x60u, 0xffffffffu);
                wr32(r6 + 0x6cu, 0xffffffffu);
                wr32(r6 + 0x68u, 0xffffffffu);
                wr32(r7 + 0x6cu, 0xffffffffu);
                wr32(r7 + 0x68u, 0xffffffffu);
                wr32(r6 + 0x74u, 0xffffffffu);
                wr32(r6 + 0x70u, 0xffffffffu);
                wr32(r7 + 0x74u, 0xffffffffu);
                wr32(r7 + 0x70u, 0xffffffffu);
                wr32(r6 + 0x7cu, 0xffffffffu);
                wr32(r6 + 0x78u, 0xffffffffu);
                r6 = r6 + 0x80u;
                wr32(r7 + 0x7cu, 0xffffffffu);
                wr32(r7 + 0x78u, 0xffffffffu);
                r7 = r7 + 0x80u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        r5 = rd32(0x800000e0u);
        if (r5 == 0u) {
            wr32(0x800000dcu, param_1);
        } else {
            wr32(r5 + 0x2fcu, param_1);
        }
        wr32(param_1 + 0x300u, r5);
        wr32(param_1 + 0x2fcu, 0u);
        wr32(0x800000e0u, param_1);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
