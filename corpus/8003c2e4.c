#include "tc_rt.h"

void fn_8003c2e4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003bf48u, &a);
    if (r3 == 1u) {
        a.r[0] = 1u;
        (void)tc_call(0x802c26e8u, &a);
    } else {
        a.r[0] = 0u;
        (void)tc_call(0x802c26e8u, &a);
    }
    return;
}
