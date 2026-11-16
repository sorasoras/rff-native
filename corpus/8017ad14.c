#include "tc_rt.h"

u32 fn_8017ad14(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r8 = rd32(0x8033a8c0u);
    r10 = rd32(0x8033a8b8u);
    r7 = rd32(0x8033a8c4u);
    r6 = rd32(0x8033a8c8u);
    r5 = rd32(0x8033a8ccu);
    r0 = rd32(0x8033a8d0u);
    wr32(0x817fdfdcu, rd32(0x8033a8bcu));
    r9 = rd32(0x80499430u);
    wr32(0x817fdfe0u, r8);
    r4 = rd32(0x80499524u);
    wr32(0x817fdfd8u, r10);
    wr32(0x817fdfe4u, r7);
    wr32(0x817fdfe8u, r6);
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r0);
    wr32(0x817fdfdcu, r9);
    wr32(0x817fdfe0u, r4);
    a.r[0] = param_r3;
    r3 = tc_call(0x8017ad0cu, &a);
    r3 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7e802028u);
    return r3;
}
