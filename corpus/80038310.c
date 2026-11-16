#include "tc_rt.h"

void fn_80038310(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = rd32((u32)param_1 + 0x2cu);
    r30 = rd32(rd32(r29) + 0xcu);
    a.r[0] = 0x803af160u;
    a.r[1] = rd32(r29 + 0x14u);
    a.r[2] = rd32(r29 + 0x18u);
    a.r[3] = rd32(r29 + 0x1cu);
    (void)tc_call(0x80272d6cu, &a);
    r3 = rd32(r29);
    if (rd32(r3 + 0xcu) != 0u) {
        r3 = rd32(r3 + 8u);
    } else {
        r3 = 0u;
    }
    r3 = rd32(r3 + 0x14u);
    a.r[0] = 0x803af200u;
    a.r[1] = rd32(r3);
    a.r[2] = 0x6000u;
    (void)tc_call(0x80004338u, &a);
    r28 = 1u;
    r27 = 0x20u;
    while ((s32)r28 < (s32)r30) {
        r3 = rd32(r29);
        if (r28 < rd32(r3 + 0xcu)) {
            r3 = rd32(r3 + 8u) + r27;
        } else {
            r3 = 0u;
        }
        r3 = rd32(r3 + 0x14u);
        a.r[0] = ((r28 - 1u) * 0x1200u) - 0x7fc4ae00u;
        a.r[1] = rd32(r3);
        a.r[2] = 0x1200u;
        (void)tc_call(0x80004338u, &a);
        r4 = ((r28 - 1u) << 1u) & 0xfffffffeu;
        r0 = ((r4 & 0x20u) != 0u) ? 0u : ((u32)rd8(r28 + r29 + 0x1fu) << (r4 & 0x1fu));
        r28 = r28 + 1u;
        r27 = r27 + 0x20u;
        r0 = ((u32)rd16(0x803af168u) & ~(((r4 & 0x20u) != 0u) ? 0u : (3u << (r4 & 0x1fu)))) | r0;
        wr16(0x803af168u, (u16)r0);
    }
    if ((s32)(r30 - 1u) < 8) {
        r0 = ((r28 - 1u) << 1u) & 0xfffffffeu;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (3u << (r0 & 0x1fu));
        r0 = (u32)rd16(0x803af168u) & ~r0;
        wr16(0x803af168u, (u16)r0);
    }
    a.r[0] = 0x80335a07u;
    a.r[1] = 0x803af160u;
    a.r[2] = ((r30 - 1u) * 0x1200u) + 0x60a0u;
    a.r[3] = r29 + 0x2cu;
    r3 = tc_call(0x800381e4u, &a);
    wr32(r29 + 0x28u, r3);
    return;
}
