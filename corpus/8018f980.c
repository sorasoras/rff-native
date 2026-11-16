#include "tc_rt.h"

void fn_8018f980(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r4 = (u32)param_1 + 4u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = 1u;
    ctr = 3u;
    do {
        if (rd32(r4 + 4u) == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = rd32((u32)param_1 + 4u);
            r3 = tc_call(0x8018f4a8u, &a);
            if (r3 != 3u) {
                r5 = (r28 << 2u) & 0xfffffffcu;
                r4 = (u32)param_1 + r5;
                r29 = r4 + 0xa8u;
                if (r3 != rd32(r4 + 0xa8u)) {
                    r27 = 1u;
                    wr32(r29, r3);
                } else {
                    r4 = rd32((u32)param_1 + 0x88u);
                    r3 = r3 + 1u;
                    r27 = 0u;
                    wr32(r29, r3 - ((u32)ppc_divw((s32)r3, (s32)r4) * r4));
                }
            } else {
                r5 = (r28 << 2u) & 0xfffffffcu;
                r3 = (u32)param_1 + r5;
                r27 = 2u;
                wr32(r3 + 0xa8u, 3u);
                r29 = r3 + 0xa8u;
            }
            r30 = (u32)param_1 + r5;
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(r30 + 4u);
            r3 = tc_call(0x8018f4a8u, &a);
            if (r3 == 4u) {
                r27 = 3u;
                wr32(r29, 3u);
            }
            c0lt = (s32)r27 < 1;
            r5 = 8u;
            if (r27 == 1u) {
                r5 = 7u;
            } else if (c0lt && (s32)r27 >= 0) {
                r5 = 6u;
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r28;
            a.r[2] = r5;
            a.r[3] = 1u;
            a.r[4] = 1u;
            (void)tc_call(0x8018fb18u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(r30 + 4u);
            a.r[2] = rd32(r29);
            (void)tc_call(0x8018f214u, &a);
            (void)tc_call(0x800a7ae0u, &a);
            a.r[0] = r27;
            a.r[1] = 5u;
            (void)tc_call(0x800a796cu, &a);
            a.r[0] = 2u;
            a.r[1] = 0x50u;
            (void)tc_call(0x800a6d5cu, &a);
            r5 = rd32(0x8037002cu);
            r0 = rd32(0x80370030u);
            wr32(0x817fdfd8u, rd32(0x80370028u));
            wr32(0x817fdfdcu, r5);
            wr32(0x817fdfe0u, r0);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x8018f058u, &a);
            return;
        }
        r4 = r4 + 4u;
        r28 = r28 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32((u32)param_1 + 0x90u, 0u);
    r0 = rd32(0x80370038u);
    wr32((u32)param_1 + 0x38u, rd32(0x80370034u));
    wr32((u32)param_1 + 0x3cu, r0);
    wr32((u32)param_1 + 0x40u, rd32(0x8037003cu));
    return;
}
