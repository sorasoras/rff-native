#include "tc_rt.h"

void fn_80317888(s32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, s32 param_6, s32 param_7)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r4 = param_2;
    r0 = (u32)rd8((u32)param_1 + 2u);
    if (r0 == 0u) {
        r4 = (u32)param_1 + 0xcu;
    } else {
        r0 = r0 & 2u;
        c0eq = r0 == 0u;
        wr32(0x817fdfe8u, ((u32)param_7 * 0x7b929u) + ((u32)rd16((u32)param_1 + 0xcu) * 0x371097e7u) + ((param_2 * 0x3f81f635u) + ((u32)rd16((u32)param_3 + 6u) * 0x30a74193u) + 0x4bf53u));
        r5 = (u32)rd8(0x817fdfeau) ^ (u32)rd8(0x817fdfebu);
        r0 = (u32)rd8(0x817fdfe8u);
        r3 = (u32)rd8(0x817fdfe9u) ^ r5;
        wr8(0x817fdfeau, (u8)r5);
        r0 = r0 ^ r3;
        wr8(0x817fdfe9u, (u8)r3);
        wr8(0x817fdfe8u, (u8)r0);
        if (!c0eq) {
            r4 = (u32)rd16(param_5);
            if (r4 == 0u) {
                return;
            }
            r3 = (rd32(0x817fdfe8u) >> 0x10u) & 0xffffu;
            r3 = param_5 + ((r3 - (ppc_divwu(r3, r4) * r4)) * 0xcu);
            r4 = r3 + 4u;
        }
    }
    r6 = rd32((u32)param_4 + (((u32)rd16(r4 + 0xau) << 2u) & 0xfffffffcu) + 4u);
    if (r6 != 0u) {
        if ((u32)rd8(r4 + 6u) == 0u) {
            a.r[0] = rd32(rd32(rd32(rd32((u32)param_6 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
            a.r[1] = r4;
            a.r[2] = (u32)param_6;
            a.r[3] = r6;
            a.r[4] = (u32)rd16((u32)param_6 + 0xe2u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            (void)tc_call(0x803215f8u, &a);
        } else {
            a.r[0] = rd32(rd32(rd32(rd32((u32)param_6 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
            a.r[1] = r4;
            a.r[2] = (u32)param_6;
            a.r[3] = r6;
            a.r[4] = (u32)rd16((u32)param_6 + 0xe2u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            (void)tc_call(0x80321774u, &a);
        }
    }
    return;
}
