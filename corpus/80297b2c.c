#include "tc_rt.h"

u64 fn_80297b2c(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0;
    r4 = 0u;
    r3 = 0x8053f03cu;
    ctr = 2u;
    do {
        if ((u32)rd8(r3 + 0x1au) != 0u) {
            r3 = r3 + 8u;
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + 0x36u) != 0u) {
            r3 = r3 + 0x24u;
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + 0x52u) != 0u) {
            r3 = r3 + 0x40u;
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + 0x6eu) != 0u) {
            r3 = r3 + 0x5cu;
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + 0x8au) != 0u) {
            r3 = r3 + 0x78u;
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + 0xa6u) != 0u) {
            r3 = r3 + 0x94u;
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 1u;
        r3 = r3 + 0xa8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (u64)r4;
}
