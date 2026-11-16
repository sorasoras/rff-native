#include "tc_rt.h"

void fn_80255f8c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80570be8u);
    if (r3 != 0xfffffffeu) {
        a.r[0] = r3;
        (void)tc_call(0x80255ff4u, &a);
        wr32(0x80570be8u, 0xfffffffeu);
    }
    return;
}
