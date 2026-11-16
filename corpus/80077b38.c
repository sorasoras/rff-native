#include "tc_rt.h"

u32 fn_80077b38(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x805706e8u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 != 0u) {
        r3 = rd32(r3 + 4u);
    } else {
        r3 = 3u;
    }
    return r3;
}
