#include "tc_rt.h"

s32 fn_80031be0(s32 param_1, u32 param_r4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_r4;
    (void)tc_call(0x80042618u, &a);
    r3 = rd32((u32)param_1 + 0x4cu);
    if (rd32(r3 + 0x2cu) == 0u) {
        r0 = rd32((u32)param_1 + 0x34u);
        r11 = 0u;
        r6 = rd32(0x817fdfe8u);
        r7 = rd32(0x817fdfd8u);
        r8 = rd32(0x817fdfdcu);
        r9 = rd32(0x817fdfe0u);
        r10 = rd32(0x817fdfe4u);
        ctr = r0;
        if (r0 > 0u) {
            do {
                r3 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r11);
                r5 = rd32(r3 + 0x3cu);
                if (rd32(r5 + 0x10u) != r6) {
                    r4 = 0u;
                } else {
                    r4 = 0u;
                    if (rd32(r5) == r7 && rd32(r5 + 4u) == r8 && rd32(r5 + 8u) == r9 && rd32(r5 + 0xcu) == r10) {
                        r4 = 1u;
                    }
                }
                if (r4 != 0u) {
                    return (s32)r3;
                }
                r11 = r11 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = 0x817fdfd8u;
        r3 = tc_call(0x80042818u, &a);
        if ((s32)r3 < 0 || r3 >= rd32((u32)param_1 + 0x34u)) {
            r3 = 0u;
        } else {
            r3 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r3);
        }
    }
    return (s32)r3;
}
