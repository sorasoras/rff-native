#include "tc_rt.h"

u32 fn_8025e9a4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fbfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = (u32)param_1;
    a.r[0] = 0x817fbfe8u;
    a.r[1] = 0u;
    a.r[2] = 0x2000u;
    (void)tc_call(0x8000443cu, &a);
    if ((u32)param_1 == 0u) {
        r29 = rd32(param_3);
        if (r29 == 0u) {
            r3 = 0u;
            return r3;
        }
    }
    r7 = (u32)param_2 - 2u;
    for (;;) {
        r7 = r7 + 2u;
        r0 = (u32)rd16(r7);
        if (r0 == 0u) break;
        r6 = (r0 >> 3u) & 0x1fffu;
        r0 = r0 & 7u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = (u32)rd8(r6 - 0x7e804018u) | r0;
        wr8(r6 - 0x7e804018u, (u8)r0);
    }
    r7 = r29 - 2u;
    do {
        r7 = r7 + 2u;
        r6 = (u32)rd16(r7);
        if (r6 == 0u) break;
        r0 = r6 & 7u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = (u32)(s8)rd8(((r6 >> 3u) & 0x1fffu) - 0x7e804018u) & r0;
    } while (r0 != 0u);
    if (r6 != 0u) {
        r3 = r7;
        do {
            r7 = r7 + 2u;
            r8 = (u32)rd16(r7);
            if (r8 == 0u) break;
            r0 = r8 & 7u;
            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
            r0 = (u32)(s8)rd8(((r8 >> 3u) & 0x1fffu) - 0x7e804018u) & r0;
        } while (r0 == 0u);
        if (r8 != 0u) {
            r4 = r7 + 2u;
            wr16(r7, 0u);
        } else {
            r4 = rd32(0x80570c08u);
        }
        if (r3 != 0u) {
            wr32(param_3, r4);
        } else {
            wr32(param_3, 0u);
        }
    } else {
        r3 = 0u;
        wr32(param_3, 0u);
    }
    return r3;
}
