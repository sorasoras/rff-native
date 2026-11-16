#include "tc_rt.h"

void fn_8027ae24(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r6 = r31 + (((ppc_cntlzw((u32)rd8(r31 + 0x8c8u)) >> 5u) & 0xffu) * 0x60u);
    r4 = (u32)rd16(r6 + 0xa0u);
    if ((r4 & 3u) == 3u) {
        wr16(r6 + 0xa0u, (u16)(r4 & 0xfffffffdu));
    }
    r4 = (u32)rd16(r6 + 0xa0u);
    if ((r4 & 0xcu) == 0xcu) {
        wr16(r6 + 0xa0u, (u16)(r4 & 0xfffffffbu));
    }
    if ((rd32(r31 + 0x8b8u) - 6u) <= 2u) {
        r5 = (u32)rd16(r6 + 0xcau);
        if ((r5 & 0x8002u) == 0x8002u) {
            wr16(r6 + 0xcau, (u16)(r5 & 0x7fffu));
        }
        r4 = (u32)rd16(r6 + 0xcau);
        if ((r4 & 0x4001u) == 0x4001u) {
            wr16(r6 + 0xcau, (u16)(r4 & 0xffffbfffu));
        }
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
