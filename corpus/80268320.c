#include "tc_rt.h"

s32 fn_80268320(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x817fdfa4u;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000446cu, &a);
    wr8(0x817fdfa8u, 0xd4u);
    wr32(0x817fdfa4u, 0x40u);
    wr32(0x817fdfacu, param_1);
    wr32(0x817fdfb0u, rd32(param_2));
    wr8(0x817fdfb4u, (u8)param_3);
    a.r[0] = 0x817fdf9cu;
    a.r[1] = 0x817fdf98u;
    r3 = tc_call(0x80266d88u, &a);
    r31 = r3;
    if (r3 == 0u) {
        a.r[0] = rd32(0x817fdf98u);
        a.r[1] = 0x817fdfa4u;
        a.r[2] = 0x40u;
        r3 = tc_call(0x802669f4u, &a);
        r31 = r3;
    }
    if (r3 == 0u) {
        wr32(param_4, 0u);
        wr32(param_2, 0xffffffffu);
        a.r[0] = rd32(0x817fdf98u);
        a.r[1] = 0x817fdfa0u;
        a.r[2] = 3u;
        a.r[3] = 3u;
        a.r[4] = 0u;
        r3 = tc_call(0x80268634u, &a);
        r31 = r3;
        if (r3 == 0u) {
            a.r[0] = rd32(0x817fdfa0u);
            r3 = tc_call(0x80266d5cu, &a);
            if (r3 != 0u) {
                wr32(param_4, rd32(r3 + 0x20u));
                wr32(param_2, rd32(r3 + 0x28u));
            }
        }
        a.r[0] = rd32(0x817fdfa0u);
        (void)tc_call(0x80266cf8u, &a);
    }
    a.r[0] = rd32(0x817fdf9cu);
    (void)tc_call(0x80266cf8u, &a);
    return (s32)r31;
}
