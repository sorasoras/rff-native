#include "tc_rt.h"

void fn_80030c18(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r26 = 1u;
    r4 = (ppc_mulhwu(0x38e38e39u, rd32(param_1)) >> 1u) & 0x7fffffffu;
    while ((s32)r26 < (s32)r4) {
        r26 = ((r26 << 2u) & 0xfffffffcu) - r26 + 1u;
    }
    while ((s32)r26 > 0) {
        r25 = rd32(param_1 + 4u);
        r24 = r26;
        while (r24 < rd32(param_1)) {
            r3 = r24;
            while ((s32)r3 >= (s32)r26) {
                r29 = r3 - r26;
                r27 = (r3 << 2u) & 0xfffffffcu;
                r28 = (r29 << 2u) & 0xfffffffcu;
                r4 = rd32(rd32(r25 + r27) + 0x3cu);
                r3 = rd32(rd32(r25 + r28) + 0x3cu);
                r0 = (u32)rd8(r4 + 0x63u);
                r5 = (u32)rd8(r3 + 0x63u);
                c0lt = r5 < r0;
                if (r5 <= r0) {
                    if (!c0lt) {
                        a.r[0] = r3;
                        a.r[1] = r4;
                        r3 = tc_call(0x8025ecd8u, &a);
                    } else {
                        r3 = 0xffffffffu;
                    }
                } else {
                    r3 = 1u;
                }
                if ((s32)r3 <= 0) break;
                r4 = rd32(r25 + r28);
                r3 = r29;
                wr32(r25 + r28, rd32(r25 + r27));
                wr32(r25 + r27, r4);
            }
            r24 = r24 + 1u;
        }
        r3 = ppc_mulhw(1431655766, (s32)r26);
        r26 = r3 + ((r3 >> 0x1fu) & 1u);
    }
    return;
}
