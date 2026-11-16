#include "tc_rt.h"

u64 fn_8022794c(void)
{
    u32 ctr = 0, r3 = tc_argr(0u);
    r3 = 0xe0000000u;
    ctr = 0x200u;
    do {
        r3 = r3 + 0x20u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (u64)r3 << 0x20ull;
}
