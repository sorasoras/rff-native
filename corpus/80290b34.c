#include "tc_rt.h"

void fn_80290b34(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    if ((u32)rd8(0x8053d6aau) != 0u && param_1 == 0x8053d68cu) {
        wr8(0x8053d6aau, 0u);
    } else {
        r30 = 1u;
        if ((u32)rd8(0x8053d6cau) != 0u && param_1 == 0x8053d6acu) {
            wr8(0x8053d6cau, 0u);
        } else {
            r30 = 2u;
            if ((u32)rd8(0x8053d6eau) != 0u && param_1 == 0x8053d6ccu) {
                wr8(0x8053d6eau, 0u);
            } else {
                r30 = 3u;
            }
        }
    }
    if (r30 != 3u) {
        a.r[0] = 0xeu;
        r3 = tc_call(0x8028a0d4u, &a);
        r31 = r3;
        if (r3 != 0u) {
            wr16(r3, 0x10au);
            r3 = r3 + 8u;
            a.r[0] = r3;
            a.r[1] = ((r30 << 5u) & 0x1fe0u) - 0x7fac295cu;
            (void)tc_call(0x8028d2a4u, &a);
            a.r[0] = r31;
            (void)tc_call(0x8028d750u, &a);
        }
    }
    return;
}
