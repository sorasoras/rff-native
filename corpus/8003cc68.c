#include "tc_rt.h"

void fn_8003cc68(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003a98cu, &a);
    r31 = r3;
    r3 = tc_call(0x8003c9d0u, &a);
    r30 = r3;
    a.r[0] = r3;
    (void)tc_call(0x8023e748u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8023f294u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80241510u, &a);
    (void)tc_call(0x8023f180u, &a);
    (void)tc_call(0x8023e1c8u, &a);
    (void)tc_call(0x8023f378u, &a);
    if ((rd32(r30) & 1u) != 0u) {
        (void)tc_call(0x8023e1c8u, &a);
    }
    (void)tc_call(0x8003ab98u, &a);
    r3 = tc_call(0x8023f378u, &a);
    wr32(0x80570ff4u, r3);
    return;
}
