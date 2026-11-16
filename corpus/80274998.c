#include "tc_rt.h"

u32 fn_80274998(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if (param_2 >= rd32(0x80571abcu)) {
        r3 = 0u;
    } else {
        r3 = rd32(0x80571ac0u);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = r3 - 0x7fafc6e0u;
            r0 = (u32)rd16(r3 + (((0u - param_2) << 1u) & 0xfffffffeu));
            if (r0 == 0u) {
                r3 = 0u;
            } else {
                r0 = (u32)rd16(r0 - 0x7fafc6e0u);
                a.r[0] = r0 - 0x7fafc6e0u;
                a.r[1] = 0x817fdfc8u;
                r3 = tc_call(0x80273f34u, &a);
            }
        }
    }
    if (r3 != 0u && (u32)rd8(0x817fdfd0u) == 0xa0u) {
        a.r[0] = param_1;
        a.r[1] = rd32(0x817fdfe0u);
        a.r[2] = rd32(0x817fdfd8u);
        (void)tc_call(0x80004338u, &a);
        r30 = 1u;
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
