#include "tc_rt.h"

s32 fn_8027163c(u32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = 0x817fdfb0u;
    a.r[1] = param_1;
    (void)tc_call(0x8027231cu, &a);
    if ((u32)param_5 == 0u) {
        a.r[0] = 0x817fdfb0u;
        r3 = tc_call(0x8027214cu, &a);
        if (r3 != 0u) {
            r3 = 0xffffff9au;
            return (s32)r3;
        }
    }
    if ((u32)param_4 != 0u) {
        wr32(0x817fdf98u, (u32)param_3);
        a.r[0] = 0x817fdfb0u;
        a.r[1] = (u32)param_2;
        a.r[2] = (u32)param_2 + 4u;
        a.r[3] = (u32)param_3 + 0x20u;
        a.r[4] = (u32)param_3 + 0x24u;
        a.r[5] = (u32)param_3 + 0x28u;
        a.r[6] = (u32)param_3 + 0x2cu;
        a.r[7] = 0x80271790u;
        a.s[0] = rd32(0x817fdf98u);
        r3 = tc_call(0x8026e1d4u, &a);
    } else {
        wr32(0x817fdfacu, 0u);
        wr32(0x817fdfa8u, 0u);
        wr32(0x817fdfa4u, 0u);
        wr32(0x817fdfa0u, 0u);
        a.r[0] = 0x817fdfb0u;
        a.r[1] = (u32)param_2;
        a.r[2] = (u32)param_2 + 4u;
        a.r[3] = 0x817fdfacu;
        a.r[4] = 0x817fdfa8u;
        a.r[5] = 0x817fdfa4u;
        a.r[6] = 0x817fdfa0u;
        r3 = tc_call(0x8026e07cu, &a);
        r31 = r3;
        if (r3 == 0u) {
            a.r[0] = (u32)param_2 + 7u;
            a.r[1] = rd32(0x817fdfa8u);
            a.r[2] = rd32(0x817fdfa4u);
            a.r[3] = rd32(0x817fdfa0u);
            (void)tc_call(0x8027155cu, &a);
            wr8((u32)param_2 + 6u, (u8)rd32(0x817fdfacu));
        }
        r3 = r31;
    }
    return (s32)r3;
}
