#include "tc_rt.h"

u64 fn_80297be4(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0;
    if ((u32)param_1 != 0u) {
        r0 = (u32)param_1 + 0x7fac0fbcu;
        r0 = ppc_mulhw(-1840700269, (s32)r0) + r0;
        r0 = (u32)((s32)r0 >> 4);
        r0 = r0 + ((r0 >> 0x1fu) & 1u) + 1u;
        r4 = r0 & 0xffffu;
        r3 = (r4 * 0x1cu) - 0x7fac0fc4u;
        ctr = 0xcu - r4;
        if (r4 < 0xcu) {
            do {
                if ((u32)rd8(r3 + 0x1au) != 0u) {
                    r3 = r3 + 8u;
                    return ((u64)r3 << 0x20ull) | (u64)r4;
                }
                r4 = r4 + 1u;
                r3 = r3 + 0x1cu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        return (u64)r4;
    }
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
