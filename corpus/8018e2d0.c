#include "tc_rt.h"

u32 fn_8018e2d0(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r5 = rd32((u32)param_1 + 0x80u);
    if ((s32)r5 < 10) {
        r29 = 1u;
        r31 = rd32((u32)param_1 + ((r5 << 2u) & 0xfffffffcu) + 0x54u);
        wr32((u32)param_1 + 0x80u, r5 + 1u);
        a.r[0] = 6u;
        r3 = tc_call(0x800a7904u, &a);
        r3 = rd32(r3 + (((r31 + 3u) << 3u) & 0xfffffff8u));
        a.r[0] = r3;
        a.r[1] = 0x805708b0u;
        a.r[2] = 2u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            r29 = 0u;
        }
        wr32((u32)param_1 + 0x88u, 3u);
        wr32(0x817fdfe4u, 0u);
        wr32(0x817fdfe8u, 0u);
        wr32(0x817fdfecu, 0u);
        if (r29 == 0u) {
            wr32(0x817fdfecu, 0xffffffffu);
            wr32((u32)param_1 + 0x88u, 2u);
        }
        r29 = rd32((u32)param_1 + 0x88u);
        r3 = tc_call(0x80040b64u, &a);
        r3 = r3 - (ppc_divwu(r3, r29) * r29);
        wr32((u32)param_1 + 0x8cu, r3);
        wr32(((r3 << 2u) & 0xfffffffcu) - 0x7e80201cu, r31 + 1u);
        r3 = tc_call(0x80040b64u, &a);
        r5 = r29 - 1u;
        r5 = r3 - (ppc_divwu(r3, r5) * r5);
        if (r5 == rd32((u32)param_1 + 0x8cu)) {
            r5 = r5 + 1u;
            r5 = r5 - ((u32)ppc_divw((s32)r5, (s32)r29) * r29);
        }
        wr32(((r5 << 2u) & 0xfffffffcu) - 0x7e80201cu, r31 + 2u);
        if ((r29 - 2u) != 0u) {
            r0 = rd32((u32)param_1 + 0x88u);
            r3 = 0u;
            ctr = r0;
            if ((s32)r0 > 0) {
                do {
                    if (r3 != rd32((u32)param_1 + 0x8cu) && r3 != r5) {
                        wr32(((r3 << 2u) & 0xfffffffcu) - 0x7e80201cu, r31 + 3u);
                        break;
                    }
                    r3 = r3 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8018f644u, &a);
        wr32((u32)param_1 + 0x84u, r3);
        r29 = r3;
        (void)tc_call(0x800a7ae0u, &a);
        r28 = 0xffffffffu;
        if (r29 == 7u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            r3 = tc_call(0x8018f7f4u, &a);
            r28 = r3;
        }
        a.r[0] = rd32((u32)param_1 + 0x8cu) + 1u;
        a.r[1] = 2u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = rd32(((rd32((u32)param_1 + 0x8cu) << 2u) & 0xfffffffcu) - 0x7e80201cu);
        a.r[1] = 3u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = r28;
        a.r[1] = 4u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = r31;
        a.r[1] = 5u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = rd32(0x817fdfe4u);
        a.r[1] = 6u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = rd32(0x817fdfe8u);
        a.r[1] = 7u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = rd32(0x817fdfecu);
        a.r[1] = 8u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = r29;
        a.r[1] = 9u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = 2u;
        a.r[1] = 0x25u;
        (void)tc_call(0x800a6d5cu, &a);
        wr32((u32)param_1 + 0x90u, 0x96u);
        r5 = rd32(0x8036ff6cu);
        r0 = rd32(0x8036ff70u);
        wr32(0x817fdfd8u, rd32(0x8036ff68u));
        wr32(0x817fdfdcu, r5);
        wr32(0x817fdfe0u, r0);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8018f058u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
