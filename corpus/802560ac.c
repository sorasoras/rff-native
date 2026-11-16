#include "tc_rt.h"

void fn_802560ac(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(param_2, 0u);
    wr32(param_2 + 8u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfd8u;
    r3 = tc_call(0x80256024u, &a);
    if (r3 != 0u) {
        r7 = 0u;
        wr32(param_2 + 0xcu, rd32(0x817fdfe0u));
        wr32(param_2 + 0x10u, rd32(0x817fdfe8u));
        wr32(param_2 + 0x14u, rd32(0x817fdff0u));
        r5 = rd32(0x817fdfd8u);
        r0 = (u32)param_1 - rd32(0x817fdfe0u);
        r3 = (u32)((s32)ppc_mulhw(715827883, (s32)(rd32(0x817fdfdcu) - r5)) >> 1);
        r9 = r3 + ((r3 >> 0x1fu) & 1u);
        for (;;) {
            if ((s32)r7 > (s32)r9) {
                return;
            }
            r4 = r7 + r9;
            r8 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
            r3 = r8 * 0xcu;
            r4 = rd32(r5 + r3);
            r6 = r5 + r3;
            if (r0 >= r4) {
                if (r0 <= (r4 + (rd32(r6 + 4u) & 0x7fffffffu))) break;
                r7 = r8 + 1u;
            } else {
                r9 = r8 - 1u;
            }
        }
        wr32(param_2 + 4u, rd32(0x817fdfe0u) + r4);
        if (((rd32(r6 + 4u) >> 0x1fu) & 1u) == 0u) {
            r5 = rd32(0x817fdfe8u) + rd32(r6 + 8u);
        } else {
            r5 = r6 + 8u;
        }
        wr32(param_2, r5);
        r0 = r0 - rd32(r6);
        if ((((u32)rd16(r5) >> 3u) & 1u) == 0u) {
            r4 = r5 + 2u;
            for (;;) {
                r3 = (u32)rd16(r4);
                if (r3 == 0u) {
                    return;
                }
                if (r3 <= r0 && (u32)rd16(r4 + 2u) >= r0) break;
                r4 = r4 + 6u;
            }
            wr32(param_2 + 8u, r5 + (u32)rd16(r4 + 4u));
        } else {
            r6 = r5 + 4u;
            for (;;) {
                r4 = rd32(r6);
                if (r4 == 0u) {
                    return;
                }
                r3 = r4 + (((u32)rd16(r6 + 4u) << 2u) & 0xfffffffcu);
                if (r4 <= r0 && r3 >= r0) break;
                r6 = r6 + 8u;
            }
            wr32(param_2 + 8u, r5 + (u32)rd16(r6 + 6u));
        }
    }
    return;
}
