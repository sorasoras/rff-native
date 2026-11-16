#include "tc_rt.h"

void fn_802f3ce4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, s32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r26 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = (u32)param_5;
    a.r[0] = 0x817fdfb8u;
    a.r[1] = (u32)param_6;
    a.r[2] = 0x20u;
    (void)tc_call(0x80004338u, &a);
    r4 = (u32)rd16((u32)param_6 + 0x22u);
    r6 = (u32)param_5;
    r3 = (u32)rd16((u32)param_6 + 0x24u);
    r0 = (u32)rd16((u32)param_6 + 0x26u);
    wr16(0x817fdfd8u, rd16((u32)param_6 + 0x20u));
    wr16(0x817fdfdau, (u16)r4);
    wr16(0x817fdfdcu, (u16)r3);
    wr16(0x817fdfdeu, (u16)r0);
    if ((u32)param_5 != 0u) {
        r6 = (u32)param_5 - 0x80000000u;
    }
    r31 = ((r6 << 1u) & 0xfffffffeu) + 2u;
    if ((u32)param_5 != 0u) {
        r26 = (u32)param_5 - 0x80000000u;
    }
    r4 = ppc_mulhwu(0x24924925u, param_4);
    r4 = (((param_4 - r4) >> 1u) & 0x7fffffffu) + r4;
    r3 = (r4 << 1u) & 0xfffffff0u;
    r4 = param_4 - (((r4 >> 3u) & 0x1fffffffu) * 0xeu);
    r30 = r4 + ((r26 << 1u) & 0xfffffffeu) + r3 + 2u;
    while (r31 < r30) {
        if ((r31 & 0xfu) == 0u) {
            r3 = (r31 >> 1u) & 0x7fffffffu;
            r31 = r31 + 2u;
            r3 = r3 - 0x80000000u;
            wr16(0x817fdfdau, (u16)rd8(r3));
        }
        r4 = (u32)rd8(((r31 >> 1u) & 0x7fffffffu) - 0x80000000u);
        r0 = (u32)((s32)r4 >> 4);
        if ((r31 & 1u) != 0u) {
            r0 = r4 & 0xfu;
        }
        a.r[0] = 0x817fdfb8u;
        a.r[1] = r0 & 0xffu;
        (void)tc_call(0x8031061cu, &a);
        r31 = r31 + 1u;
    }
    wr16(param_1, rd16(0x817fdfdau));
    wr16(param_2, rd16(0x817fdfdcu));
    wr16(param_3, rd16(0x817fdfdeu));
    return;
}
