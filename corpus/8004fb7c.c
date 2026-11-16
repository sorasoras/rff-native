#include "tc_rt.h"

void fn_8004fb7c(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803c65d0u;
    (void)tc_call(0x80303030u, &a);
    a.r[0] = 0x803c65d0u;
    a.r[1] = 0x8030334cu;
    a.r[2] = 0x803c65c0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c66c4u;
    (void)tc_call(0x802f8930u, &a);
    a.r[0] = 0x803c66c4u;
    a.r[1] = 0x802f897cu;
    a.r[2] = 0x803c66b8u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c6860u;
    (void)tc_call(0x80301190u, &a);
    a.r[0] = 0x803c6860u;
    a.r[1] = 0x8004fcacu;
    a.r[2] = 0x803c6850u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c6894u;
    (void)tc_call(0x8030576cu, &a);
    a.r[0] = 0x803c6894u;
    a.r[1] = 0x803057b4u;
    a.r[2] = 0x803c6888u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c68d0u;
    a.r[1] = 0x8030576cu;
    a.r[2] = 0x803057b4u;
    a.r[3] = 0x2cu;
    a.r[4] = 8u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8004fd0cu;
    a.r[2] = 0x803c68c0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c6dacu;
    a.r[1] = 0x8004f4dcu;
    a.r[2] = 0x8004f528u;
    a.r[3] = 4u;
    a.r[4] = 0x11u;
    (void)tc_call(0x80255624u, &a);
    wr32(0x803c6df0u, 0u);
    a.r[0] = 0x803c6a80u;
    a.r[1] = 0x8004fd28u;
    a.r[2] = 0x803c6a70u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c817cu;
    (void)tc_call(0x8030111cu, &a);
    a.r[0] = 0x803c817cu;
    a.r[1] = 0x8004fd9cu;
    a.r[2] = 0x803c8170u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
