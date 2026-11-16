#include "tc_rt.h"

void fn_80271950(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    r31 = 0u;
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
    if ((u32)param_5 == 0u) {
        a.r[0] = 0x817fdfa8u;
        r3 = tc_call(0x80272118u, &a);
        if (r3 != 0u) {
            return;
        }
    }
    c0lt = (s32)param_2 < 2;
    if (param_2 == 2u) {
        r31 = 2u;
    } else if (!c0lt) {
        if ((s32)param_2 < 4) {
            r31 = 3u;
        }
    } else if ((s32)param_2 >= 1) {
        r31 = 1u;
    }
    if ((u32)param_4 == 0u) {
        a.r[0] = 0x817fdfa8u;
        a.r[1] = r31;
        (void)tc_call(0x8026e7d0u, &a);
    } else {
        a.r[0] = 0x817fdfa8u;
        a.r[1] = r31;
        a.r[2] = 0x80271c6cu;
        a.r[3] = param_3;
        (void)tc_call(0x8026e898u, &a);
    }
    return;
}
