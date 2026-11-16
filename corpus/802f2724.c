#include "tc_rt.h"

void fn_802f2724(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    if (rd32(param_1) == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r4 = rd32(param_1);
        if (r4 == 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            r4 = (u32)(s16)rd16(r4 + 0x94u);
            r5 = r4 * 0x60u;
            r4 = rd32(param_1);
            r5 = (u32)rd16(param_1 + 8u) + r5;
            wr16(param_1 + 8u, (u16)r5);
            wr16(r4 + 0x92u, rd16(param_1 + 8u));
            wr16(rd32(param_1) + 0x94u, 0u);
            r4 = rd32(param_1);
            wr32(r4 + 0x1cu, rd32(r4 + 0x1cu) | 0x100u);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
        wr16(0x817fdfc8u, rd16(param_1 + 0x1eu));
        wr16(0x817fdfcau, 0u);
        wr16(0x817fdfccu, rd16(param_1 + 0x20u));
        wr16(0x817fdfceu, 0u);
        wr16(0x817fdfd0u, rd16(param_1 + 0x24u));
        wr16(0x817fdfd2u, 0u);
        wr16(0x817fdfd4u, rd16(param_1 + 0x26u));
        wr16(0x817fdfd6u, 0u);
        wr16(0x817fdfd8u, rd16(param_1 + 0x2au));
        wr16(0x817fdfdau, 0u);
        wr16(0x817fdfdcu, rd16(param_1 + 0x2cu));
        wr16(0x817fdfdeu, 0u);
        wr16(0x817fdfe0u, rd16(param_1 + 0x30u));
        wr16(0x817fdfe2u, 0u);
        wr16(0x817fdfe4u, rd16(param_1 + 0x32u));
        wr16(0x817fdfe6u, 0u);
        wr16(0x817fdfe8u, rd16(param_1 + 0x22u));
        wr16(0x817fdfeau, 0u);
        wr16(0x817fdfecu, rd16(param_1 + 0x28u));
        wr16(0x817fdfeeu, 0u);
        wr16(0x817fdff0u, rd16(param_1 + 0x2eu));
        wr16(0x817fdff2u, 0u);
        wr16(0x817fdff4u, rd16(param_1 + 0x34u));
        wr16(0x817fdff6u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 1u;
        (void)tc_call(0x802f3ff0u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
