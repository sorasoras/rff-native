#include "tc_rt.h"

void fn_8003cdc0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802302b4u, &a);
    wr32(0x80570ff0u, r3);
    (void)tc_call(0x8003abb8u, &a);
    (void)tc_call(0x8004d69cu, &a);
    (void)tc_call(0x80252904u, &a);
    (void)tc_call(0x8024ff34u, &a);
    (void)tc_call(0x8004ca04u, &a);
    if ((u32)param_1 != 0u) {
        (void)tc_call(0x80043290u, &a);
    }
    if ((u32)param_1 != 0u) {
        (void)tc_call(0x8004f224u, &a);
    }
    (void)tc_call(0x80036e14u, &a);
    (void)tc_call(0x80036660u, &a);
    return;
}
