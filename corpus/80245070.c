#include "tc_rt.h"

void fn_80245070(void)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(0x80571884u, 0u);
    r30 = r3;
    a.r[0] = 0x804ea460u;
    (void)tc_call(0x8024cd14u, &a);
    a.r[0] = 0x80571870u;
    (void)tc_call(0x8022ffe4u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80242bc0u, &a);
    (void)tc_call(0x80242c94u, &a);
    wr32(0x80571858u, 0u);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
