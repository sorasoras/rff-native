#include "tc_rt.h"

void fn_8003d628(void)
{
    u32 r3 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004d970u, &a);
    r30 = r3;
    wr32(0x803be600u, 0u);
    r29 = 0x803be2f8u;
    r26 = 0u;
    wr32(0x803be604u, 0u);
    do {
        r28 = ((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu));
        if ((rd32(0x803be5f8u) & r28) != 0u) {
            a.r[0] = r26;
            a.r[1] = r30 + 0x28u;
            (void)tc_call(0x8003d520u, &a);
            wr32(0x803be5fcu, rd32(0x803be5fcu) & ~r28);
            r3 = ((rd32(r29) << 2u) & 0xfffffffcu) - 0x7fc41d08u;
            wr32(r3 + 0x308u, rd32(r3 + 0x308u) | r28);
        }
        r26 = r26 + 1u;
        r29 = r29 + 0x60u;
    } while ((s32)r26 < 8);
    return;
}
