#include "tc_rt.h"

void fn_80244d88(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r8 = tc_argr(5u), r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r31 = (u32)rd16(0x80570b74u);
    r8 = (u32)rd16(0x80570b70u);
    r0 = (u32)rd16(0x80570b72u);
    wr32(0x804ea464u, 0u);
    wr32(0x80571880u, 0u);
    wr32(0x804ea46cu, 0x8038a500u);
    wr32(0x804ea470u, r31);
    wr32(0x804ea474u, 0u);
    wr32(0x804ea478u, 0x804ea4c0u);
    wr32(0x804ea47cu, 0x40u);
    wr32(0x804ea480u, 0xcd2u);
    wr16(0x804ea484u, (u16)r8);
    wr16(0x804ea486u, (u16)r0);
    wr32(0x804ea488u, 0x80244d14u);
    wr32(0x804ea48cu, 0x80244d20u);
    wr32(0x804ea490u, 0x80244d74u);
    wr32(0x804ea494u, 0x80244d84u);
    wr32(0x8057187cu, 0u);
    a.r[0] = 0x80571870u;
    r3 = tc_call(0x8022efd4u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8024cc9cu, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = tc_call(0x8024cbdcu, &a);
        f1 = tc_lastf();
    }
    a.r[0] = 0x804ea460u;
    r3 = tc_call(0x8024cca4u, &a);
    f1 = tc_lastf();
    do {
    } while (rd32(0x80571880u) == 0u);
    return;
}
