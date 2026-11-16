#include "tc_rt.h"

u32 fn_800f3044(s32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x208u) != 0u) {
        r31 = rd32((u32)param_2 + 0x34u);
        r29 = param_3;
        r28 = param_4;
        r27 = 0u;
        r26 = 0u;
        while ((s32)r26 < (s32)r31) {
            r30 = rd32((u32)param_2 + 0x38u) + (rd32((u32)param_2 + 0x3cu) * r26);
            r4 = rd32(r30 + 0x3cu);
            if ((u32)(s16)rd16(r4 + 0x68u) == 0xffffffffu) {
                r25 = 0u;
                a.r[0] = 0x817fdfb8u;
                a.r[1] = r4;
                (void)tc_call(0x80042618u, &a);
                r3 = rd32((u32)param_1 + 0x208u);
                r4 = rd32(0x817fdfc8u);
                r0 = rd32(r3 + 0xcu);
                r9 = rd32(r3 + 0x10u);
                r5 = rd32(0x817fdfb8u);
                r6 = rd32(0x817fdfbcu);
                r7 = rd32(0x817fdfc0u);
                r8 = rd32(0x817fdfc4u);
                ctr = r0;
                if (r0 > 0u) {
                    do {
                        if (rd32(r9 + 0x10u) != r4) {
                            r3 = 0u;
                        } else {
                            r3 = 0u;
                            if (rd32(r9) == r5 && rd32(r9 + 4u) == r6 && rd32(r9 + 8u) == r7 && rd32(r9 + 0xcu) == r8) {
                                r3 = 1u;
                            }
                        }
                        if (r3 != 0u) {
                            r25 = r9;
                            break;
                        }
                        r9 = r9 + 0x64u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                if (r25 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x70u);
                    a.r[1] = r25 + 0x14u;
                    r3 = tc_call(0x80031be0u, &a);
                    if (r3 != 0u && rd32(r30 + 0x48u) != 0u) {
                        a.r[0] = rd32((u32)param_1 + 0x70u);
                        a.r[1] = r25 + 0x14u;
                        r3 = tc_call(0x80031be0u, &a);
                        r3 = rd32(r3 + 0x3cu);
                        r27 = r27 + 1u;
                        wr32(param_5, (u32)rd16(r3 + 0x5eu));
                        wr32(r29, r25);
                        r29 = r29 + 4u;
                        wr32(r28, r30);
                        r28 = r28 + 4u;
                        if ((s32)r27 >= 2) {
                            r3 = 1u;
                            return r3;
                        }
                    }
                }
            }
            r26 = r26 + 1u;
        }
        r3 = (ppc_cntlzw(r27 - 1u) >> 5u) & 0x7ffffffu;
    } else {
        r3 = 0u;
    }
    return r3;
}
