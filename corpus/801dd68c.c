#include "tc_rt.h"

u64 fn_801dd68c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0;
    r3 = (u32)param_1;
    r4 = 0u;
    ctr = 0x10u;
    do {
        if (rd32(r3 + 0x1a0u) == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r0 = rd32(r3 + 0x364u);
        r3 = r3 + 0x1c4u;
        if (r0 == 0u && rd32(r3 + 0x48u) == 0u) {
            return ((u64)r3 << 0x20ull) | (u64)r4;
        }
        r4 = r4 + 7u;
        r3 = r3 + 0x1c4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (u64)r4;
}
