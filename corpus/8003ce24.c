#include "tc_rt.h"

void fn_8003ce24(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8003a98cu, &a);
    r31 = r3;
    r3 = tc_call(0x802302b4u, &a);
    wr32(0x80570fe8u, r3 - rd32(0x80570ff0u));
    (void)tc_call(0x8003abc0u, &a);
    (void)tc_call(0x80035bd4u, &a);
    (void)tc_call(0x800366e8u, &a);
    (void)tc_call(0x8003abbcu, &a);
    (void)tc_call(0x8003c9dcu, &a);
    a.r[0] = r31;
    a.r[1] = 1u;
    (void)tc_call(0x80251768u, &a);
    (void)tc_call(0x80250534u, &a);
    r3 = tc_call(0x802302b4u, &a);
    r0 = r3 - rd32(0x80570ff0u);
    r3 = rd32(0x80570664u);
    wr32(0x80570fecu, r0);
    a.r[0] = r3;
    (void)tc_call(0x8003ca88u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8023f294u, &a);
    if ((u32)rd8(0x80570660u) != 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x8023f300u, &a);
        wr8(0x80570660u, 0u);
    }
    (void)tc_call(0x8023f180u, &a);
    (void)tc_call(0x8023e1c8u, &a);
    r3 = tc_call(0x8023f378u, &a);
    wr32(0x80570ff4u, r3);
    (void)tc_call(0x8003ab98u, &a);
    (void)tc_call(0x80043d20u, &a);
    return;
}
