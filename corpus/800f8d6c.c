#include "tc_rt.h"

s32 fn_800f8d6c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr16(0x817fdfb8u, 0x30u);
    wr16(0x817fdfbau, 0x30u);
    wr16(0x817fdfbcu, 0x30u);
    wr16(0x817fdfbeu, 0x30u);
    wr16(0x817fdfc0u, 0x30u);
    wr16(0x817fdfc2u, 0x30u);
    wr16(0x817fdfc4u, 0x30u);
    wr16(0x817fdfc6u, 0x30u);
    wr16(0x817fdfc8u, 0x30u);
    wr16(0x817fdfcau, 0x30u);
    wr16(0x817fdfccu, 0x30u);
    wr16(0x817fdfceu, 0x30u);
    wr16(0x817fdfd0u, 0x30u);
    wr16(0x817fdfd2u, 0x30u);
    wr16(0x817fdfd4u, 0x30u);
    wr16(0x817fdfd6u, 0x30u);
    wr16(0x817fdfd8u, 0x30u);
    wr16(0x817fdfdau, 0x30u);
    wr16(0x817fdfdcu, 0x30u);
    wr16(0x817fdfdeu, 0x30u);
    wr16(0x817fdfe0u, 0x30u);
    wr16(0x817fdfe2u, 0x30u);
    wr16(0x817fdfe4u, 0x30u);
    wr16(0x817fdfe6u, 0x30u);
    wr16(0x817fdfe8u, 0x30u);
    wr16(0x817fdfeau, 0x30u);
    wr16(0x817fdfecu, 0x30u);
    wr16(0x817fdfeeu, 0x30u);
    wr16(0x817fdff0u, 0x30u);
    wr16(0x817fdff2u, 0x30u);
    wr16(0x817fdff4u, 0x30u);
    wr16(0x817fdff6u, 0u);
    if (param_1 != 0u) {
        r5 = (u32)((s32)param_1 >> 31);
        r6 = 0x817fdff4u;
        r7 = (r5 ^ param_1) - r5;
        r31 = 0x1eu;
        while (r7 != 0u) {
            r0 = ppc_mulhw(1717986919, (s32)r7);
            r31 = r31 - 1u;
            r3 = (u32)((s32)r0 >> 2);
            r0 = (u32)((s32)r0 >> 2);
            r3 = r3 + ((r3 >> 0x1fu) & 1u);
            r4 = r7 - (r3 * 0xau);
            r7 = r0 + ((r0 >> 0x1fu) & 1u);
            wr16(r6, (u16)(r4 + 0x30u));
            r6 = r6 - 2u;
        }
        a.r[0] = param_2;
        a.r[1] = (((r31 + 1u) << 1u) & 0xfffffffeu) - 0x7e802048u;
        a.r[2] = ((0x1fu - r31) << 1u) & 0xfffffffeu;
        (void)tc_call(0x80004338u, &a);
    } else {
        a.r[0] = param_2;
        a.r[1] = 0x817fdff4u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        r31 = 0x1du;
    }
    return (s32)(0x1fu - r31);
}
