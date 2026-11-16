#include "tc_rt.h"

u32 fn_8004c248(u32 param_1, u32 param_2)
{
    u32 c0eq = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_1 + 0x14u);
    if (r31 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x8004bdb4u, &a);
        c0eq = r3 == 0u;
        if (c0eq) {
            a.r[0] = rd32(0x803c62c8u);
            a.r[1] = 0x30u;
            a.r[2] = 0x4e4f5320u;
            a.r[3] = 0x8034f94cu;
            r3 = tc_call(0x8003afb4u, &a);
            r9 = rd32(param_1);
            wr32(r3, rd32(r31));
            r8 = rd32(param_1 + 4u);
            r30 = r3;
            r7 = rd32(param_1 + 8u);
            wr8(r3 + 4u, rd8(r31 + 4u));
            r6 = rd32(param_1 + 0xcu);
            r5 = rd32(param_1 + 0x10u);
            wr8(r3 + 5u, rd8(r31 + 5u));
            wr16(r3 + 6u, rd16(r31 + 6u));
            wr16(r3 + 8u, rd16(r31 + 8u));
            wr16(r3 + 0xau, rd16(r31 + 0xau));
            wr32(r3 + 0xcu, rd32(r31 + 0xcu));
            wr32(r3 + 0x10u, r9);
            wr32(r3 + 0x14u, r8);
            wr32(r3 + 0x18u, r7);
            wr32(r3 + 0x1cu, r6);
            wr32(r3 + 0x20u, r5);
            wr16(r3 + 0x24u, 1u);
            wr16(r3 + 0x26u, 0u);
            wr32(r3 + 0x28u, 0u);
            wr32(r3 + 0x2cu, 0u);
            if ((param_2 & 1u) != 0u) {
                wr16(r3 + 0x26u, 1u);
            } else {
                a.r[0] = rd32(r31);
                a.r[1] = rd32(r31 + 0xcu);
                a.r[2] = r30 + 0x10u;
                r3 = tc_call(0x8004bd34u, &a);
                wr32(r30, r3);
            }
            a.r[0] = r30;
            (void)tc_call(0x8004c204u, &a);
        } else {
            if (!c0eq) {
                r30 = r3;
                wr16(r3 + 0x24u, (u16)((u32)(s16)rd16(r3 + 0x24u) + 1u));
            } else {
                r30 = 0u;
            }
        }
        r3 = r30;
    }
    return r3;
}
