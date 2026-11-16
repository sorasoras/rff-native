#include "tc_rt.h"

void fn_80243750(void)
{
    u32 ctr = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x80571828u, 0u);
    r7 = 0x804e6480u;
    r8 = 0x804e7680u;
    wr32(0x80571824u, 0u);
    r6 = 0x804e8880u;
    wr32(0x80571820u, 0u);
    wr32(0x8057181cu, 0u);
    wr32(0x80571818u, 0u);
    wr32(0x80571814u, 0u);
    wr32(0x805717f8u, 0u);
    wr32(0x805717f4u, 1u);
    wr32(0x805717f0u, 2u);
    ctr = 0x20u;
    do {
        wr32(r7, 0u);
        wr32(r8, 0u);
        wr32(r6, 0u);
        wr32(r7 + 4u, 0u);
        wr32(r8 + 4u, 0u);
        wr32(r6 + 4u, 0u);
        wr32(r7 + 8u, 0u);
        wr32(r8 + 8u, 0u);
        wr32(r6 + 8u, 0u);
        wr32(r7 + 0xcu, 0u);
        wr32(r8 + 0xcu, 0u);
        wr32(r6 + 0xcu, 0u);
        wr32(r7 + 0x10u, 0u);
        wr32(r8 + 0x10u, 0u);
        wr32(r6 + 0x10u, 0u);
        wr32(r7 + 0x14u, 0u);
        wr32(r8 + 0x14u, 0u);
        wr32(r6 + 0x14u, 0u);
        wr32(r7 + 0x18u, 0u);
        wr32(r8 + 0x18u, 0u);
        wr32(r6 + 0x18u, 0u);
        wr32(r7 + 0x1cu, 0u);
        wr32(r8 + 0x1cu, 0u);
        wr32(r6 + 0x1cu, 0u);
        wr32(r7 + 0x20u, 0u);
        r7 = r7 + 0x24u;
        wr32(r8 + 0x20u, 0u);
        r8 = r8 + 0x24u;
        wr32(r6 + 0x20u, 0u);
        r6 = r6 + 0x24u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = 0x80571834u;
    a.r[1] = 0u;
    a.r[2] = 3u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x80571830u;
    a.r[1] = 0u;
    a.r[2] = 3u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = 0x8057182cu;
    a.r[1] = 0u;
    a.r[2] = 3u;
    (void)tc_call(0x8000443cu, &a);
    return;
}
