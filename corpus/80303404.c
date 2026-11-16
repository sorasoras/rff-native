#include "tc_rt.h"

void fn_80303404(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8030679cu, &a);
    if (r3 == 0u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    r3 = tc_call(0x8030368cu, &a);
    if (r3 == 0u) {
        return;
    }
    r31 = 0u;
    a.r[0] = param_2;
    a.r[1] = 0x817fdfc4u;
    r3 = tc_call(0x80301514u, &a);
    if (r3 != 0u) {
        r31 = rd32(0x817fdfd4u);
    }
    if (param_6 < (r31 * 0xa000u)) {
        r0 = 0u;
    } else {
        r31 = 0u;
        a.r[0] = param_2;
        a.r[1] = 0x817fdfa8u;
        r3 = tc_call(0x80301514u, &a);
        if (r3 != 0u) {
            r31 = rd32(0x817fdfb8u);
        }
        a.r[0] = param_1 + 0xc4u;
        a.r[1] = param_5;
        a.r[2] = param_6;
        a.r[3] = r31;
        (void)tc_call(0x80306e44u, &a);
        r0 = 1u;
    }
    if (r0 == 0u) {
        return;
    }
    wr32(param_1 + 0x2cu, param_1 + 0xb8u);
    return;
}
