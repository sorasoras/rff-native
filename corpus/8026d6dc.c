#include "tc_rt.h"

u32 fn_8026d6dc(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80225448u, &a);
    if ((r3 & 0x10000000u) == 0u) {
        r3 = 2u;
        wr32(0x80571a54u, 0u);
    } else {
        r3 = 0u;
        wr32(0x80571a54u, 0xa5ff005au);
    }
    return r3;
}
