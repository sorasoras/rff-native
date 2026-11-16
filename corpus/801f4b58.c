#include "tc_rt.h"

void fn_801f4b58(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x8013f39cu, &a);
    wr32(0x817fdfd8u, r3);
    a.r[0] = param_2;
    r3 = tc_call(0x8013f2f8u, &a);
    r31 = 0u;
    if (r3 != 0u) {
        r31 = 2u;
    }
    wr32(0x817fdfe4u, 0u);
    a.r[0] = param_2;
    r3 = tc_call(0x8013f288u, &a);
    if (r3 != 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x8014001cu, &a);
        if ((s32)(s8)r3 > 0) {
            wr32(0x817fdfe4u, 1u);
        }
    }
    wr32(0x817fdfdcu, r31);
    a.r[0] = param_2;
    r3 = tc_call(0x8013ff20u, &a);
    wr32(0x817fdfe0u, r3);
    wr32(0x817fdfe8u, param_2);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x801f4b4cu, &a);
    return;
}
