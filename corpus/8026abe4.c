#include "tc_rt.h"

u32 fn_8026abe4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x805027acu, 1u);
    r3 = tc_call(0x80268b90u, &a);
    wr32(0x805027a0u, r3);
    wr32(0x80502c90u, 0xe0000000u);
    return 0u;
}
