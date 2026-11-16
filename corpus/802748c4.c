#include "tc_rt.h"

u32 fn_802748c4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
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
                f1 = tc_lastf();
            }
        }
    }
    if (r3 != 0u && (u32)rd8(0x817fdfd0u) == 0x60u) {
        r4 = rd32(0x817fdfe0u);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = rd32(0x817fdfd8u);
        r3 = tc_call(0x80004338u, &a);
        f1 = tc_lastf();
        r30 = 1u;
    }
    a.r[0] = r31;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return r30;
}
