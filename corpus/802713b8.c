#include "tc_rt.h"

void fn_802713b8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, s32 param_6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
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
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_1;
    (void)tc_call(0x8027231cu, &a);
    if ((u32)param_6 == 0u) {
        a.r[0] = 0x817fdfa8u;
        r3 = tc_call(0x80272118u, &a);
        if (r3 != 0u) {
            return;
        }
    }
    if ((param_2 & 0x10u) == 0u) {
        return;
    }
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdf98u, 0u);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfa0u;
    a.r[2] = 0x817fdf9cu;
    a.r[3] = 0x817fdf98u;
    (void)tc_call(0x802715b0u, &a);
    if ((u32)param_5 != 0u) {
        a.r[0] = 0x817fdfa8u;
        a.r[1] = param_3;
        a.r[2] = rd32(0x817fdfa0u);
        a.r[3] = rd32(0x817fdf9cu);
        a.r[4] = rd32(0x817fdf98u);
        a.r[5] = 0x80272990u;
        a.r[6] = param_4;
        (void)tc_call(0x8026dcecu, &a);
    } else {
        a.r[0] = 0x817fdfa8u;
        a.r[1] = param_3;
        a.r[2] = rd32(0x817fdfa0u);
        a.r[3] = rd32(0x817fdf9cu);
        a.r[4] = rd32(0x817fdf98u);
        (void)tc_call(0x8026dbf8u, &a);
    }
    return;
}
