#include "tc_rt.h"

void fn_80293cdc(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r6 = 0;
    r6 = 0x8053d98cu;
    if ((u32)rd8(param_1) == 0u) {
        r4 = ((u32)rd8(param_1 + 1u) + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u)) & 0xffffu;
        ctr = 4u;
        do {
            if ((u32)rd8(r6 + 0x119u) != 0u && (u32)rd16(r6) == r4) {
                wr8(r6 + 0x118u, rd8(param_1 + 3u));
                wr16(r6 + 0x10au, (u16)((u32)rd8(param_1 + 4u) + (((u32)rd8(param_1 + 5u) << 8u) & 0xffffff00u)));
                wr16(r6 + 0x10cu, (u16)((u32)rd8(param_1 + 6u) + (((u32)rd8(param_1 + 7u) << 8u) & 0xffffff00u)));
                return;
            }
            r6 = r6 + 0x11cu;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
