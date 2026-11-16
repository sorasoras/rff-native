#include "tc_rt.h"

u32 fn_802a1acc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr16(r3 + 2u, 3u);
        wr16(r3 + 4u, 0u);
        wr8(r3 + 8u, 3u);
        wr8(r3 + 9u, 0x10u);
        wr8(r3 + 0xau, 0u);
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    }
    return r3;
}
