#include "tc_rt.h"

void fn_8029b8a4(void)
{
    TcArgs a = {0};
    if ((u32)rd8(0x8053f2d0u) == 3u) {
        a.r[0] = 1u;
        (void)tc_call(0x802a173cu, &a);
        a.r[0] = 1u;
        (void)tc_call(0x802a17b0u, &a);
    }
    return;
}
