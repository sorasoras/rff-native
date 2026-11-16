#include "tc_rt.h"

u32 fn_8026f22c(void)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r3 = tc_call(0x8026ed38u, &a);
    r29 = r3;
    r31 = r3 + 0x800u;
    r3 = tc_call(0x8026ed30u, &a);
    if (r31 > r3) {
        r30 = 0xffffffeau;
    } else {
        a.r[0] = r29;
        a.r[1] = 0x800u;
        r3 = tc_call(0x802705d0u, &a);
        wr32(0x80570c3cu, r3);
        a.r[0] = r31;
        (void)tc_call(0x8026ed40u, &a);
    }
    return r30;
}
