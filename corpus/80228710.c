#include "tc_rt.h"

u32 fn_80228710(u32 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r9 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = (param_1 << 2u) & 0x3fffcu;
    r30 = rd32(r0 - 0x7fb20150u);
    r29 = r3;
    wr32(r0 - 0x7fb20150u, (u32)param_2);
    if (param_1 == 0x10u) {
        r3 = tc_call(0x80225068u, &a);
        r31 = r3;
        r3 = r3 | 0x2000u;
        a.r[0] = r3;
        (void)tc_call(0x80225070u, &a);
        r3 = tc_call(0x802250ecu, &a);
        if ((u32)param_2 != 0u) {
            r9 = rd32(0x800000dcu);
            while (r9 != 0u) {
                wr32(r9 + 0x19cu, rd32(r9 + 0x19cu) | 0x900u);
                r6 = (u32)rd16(r9 + 0x1a2u);
                if ((r6 & 1u) == 0u) {
                    r4 = r6 | 1u;
                    r6 = r9 + 0x90u;
                    wr16(r9 + 0x1a2u, (u16)r4);
                    r4 = r9 + 0x1c8u;
                    ctr = 2u;
                    do {
                        wr32(r6 + 4u, 0xffffffffu);
                        wr32(r6, 0xffffffffu);
                        wr32(r4 + 4u, 0xffffffffu);
                        wr32(r4, 0xffffffffu);
                        wr32(r6 + 0xcu, 0xffffffffu);
                        wr32(r6 + 8u, 0xffffffffu);
                        wr32(r4 + 0xcu, 0xffffffffu);
                        wr32(r4 + 8u, 0xffffffffu);
                        wr32(r6 + 0x14u, 0xffffffffu);
                        wr32(r6 + 0x10u, 0xffffffffu);
                        wr32(r4 + 0x14u, 0xffffffffu);
                        wr32(r4 + 0x10u, 0xffffffffu);
                        wr32(r6 + 0x1cu, 0xffffffffu);
                        wr32(r6 + 0x18u, 0xffffffffu);
                        wr32(r4 + 0x1cu, 0xffffffffu);
                        wr32(r4 + 0x18u, 0xffffffffu);
                        wr32(r6 + 0x24u, 0xffffffffu);
                        wr32(r6 + 0x20u, 0xffffffffu);
                        wr32(r4 + 0x24u, 0xffffffffu);
                        wr32(r4 + 0x20u, 0xffffffffu);
                        wr32(r6 + 0x2cu, 0xffffffffu);
                        wr32(r6 + 0x28u, 0xffffffffu);
                        wr32(r4 + 0x2cu, 0xffffffffu);
                        wr32(r4 + 0x28u, 0xffffffffu);
                        wr32(r6 + 0x34u, 0xffffffffu);
                        wr32(r6 + 0x30u, 0xffffffffu);
                        wr32(r4 + 0x34u, 0xffffffffu);
                        wr32(r4 + 0x30u, 0xffffffffu);
                        wr32(r6 + 0x3cu, 0xffffffffu);
                        wr32(r6 + 0x38u, 0xffffffffu);
                        wr32(r4 + 0x3cu, 0xffffffffu);
                        wr32(r4 + 0x38u, 0xffffffffu);
                        wr32(r6 + 0x44u, 0xffffffffu);
                        wr32(r6 + 0x40u, 0xffffffffu);
                        wr32(r4 + 0x44u, 0xffffffffu);
                        wr32(r4 + 0x40u, 0xffffffffu);
                        wr32(r6 + 0x4cu, 0xffffffffu);
                        wr32(r6 + 0x48u, 0xffffffffu);
                        wr32(r4 + 0x4cu, 0xffffffffu);
                        wr32(r4 + 0x48u, 0xffffffffu);
                        wr32(r6 + 0x54u, 0xffffffffu);
                        wr32(r6 + 0x50u, 0xffffffffu);
                        wr32(r4 + 0x54u, 0xffffffffu);
                        wr32(r4 + 0x50u, 0xffffffffu);
                        wr32(r6 + 0x5cu, 0xffffffffu);
                        wr32(r6 + 0x58u, 0xffffffffu);
                        wr32(r4 + 0x5cu, 0xffffffffu);
                        wr32(r4 + 0x58u, 0xffffffffu);
                        wr32(r6 + 0x64u, 0xffffffffu);
                        wr32(r6 + 0x60u, 0xffffffffu);
                        wr32(r4 + 0x64u, 0xffffffffu);
                        wr32(r4 + 0x60u, 0xffffffffu);
                        wr32(r6 + 0x6cu, 0xffffffffu);
                        wr32(r6 + 0x68u, 0xffffffffu);
                        wr32(r4 + 0x6cu, 0xffffffffu);
                        wr32(r4 + 0x68u, 0xffffffffu);
                        wr32(r6 + 0x74u, 0xffffffffu);
                        wr32(r6 + 0x70u, 0xffffffffu);
                        wr32(r4 + 0x74u, 0xffffffffu);
                        wr32(r4 + 0x70u, 0xffffffffu);
                        wr32(r6 + 0x7cu, 0xffffffffu);
                        wr32(r6 + 0x78u, 0xffffffffu);
                        r6 = r6 + 0x80u;
                        wr32(r4 + 0x7cu, 0xffffffffu);
                        wr32(r4 + 0x78u, 0xffffffffu);
                        r4 = r4 + 0x80u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    wr32(r9 + 0x194u, 4u);
                }
                wr32(r9 + 0x194u, (rd32(r9 + 0x194u) | (rd32(0x80570a58u) & 0xf8u)) & 0x6005f8ffu);
                r9 = rd32(r9 + 0x2fcu);
            }
            r31 = r31 | 0x900u;
            r4 = r3 | (rd32(0x80570a58u) & 0xf8u);
        } else {
            r6 = rd32(0x800000dcu);
            while (r6 != 0u) {
                wr32(r6 + 0x19cu, rd32(r6 + 0x19cu) & 0xfffff6ffu);
                wr32(r6 + 0x194u, rd32(r6 + 0x194u) & 0x6005f807u);
                r6 = rd32(r6 + 0x2fcu);
            }
            r4 = r3 & 0xffffff07u;
            r31 = r31 & 0xfffff6ffu;
        }
        a.r[0] = r4 & 0x6005f8ffu;
        (void)tc_call(0x8022510cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x80225070u, &a);
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
