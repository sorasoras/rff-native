#include "tc_rt.h"

void fn_800415d0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800469e4u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x8034f7f8u;
        a.r[1] = 0x8034f7fcu;
        (void)tc_call(0x800480ccu, &a);
        r3 = rd32(0x8034f7f8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = rd32(0x8034f814u);
            (void)tc_call(0x8024b04cu, &a);
        }
        r3 = rd32(0x8034f7fcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = rd32(0x8034f814u);
            (void)tc_call(0x8024b04cu, &a);
        }
        (void)tc_call(0x80046a58u, &a);
        wr32(0x8034f808u, 5u);
        (void)tc_call(0x800416a0u, &a);
    }
    return;
}
