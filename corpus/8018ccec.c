#include "tc_rt.h"

void fn_8018ccec(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r6 = 0u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r4 = rd32((u32)param_1 + 0x8cu);
    if (rd32((u32)param_1 + 0x60u) == r4) {
        r31 = r4;
        r6 = r4;
    } else {
        r5 = rd32((u32)param_1 + 0xbcu);
        if ((s32)r5 < 10) {
            r6 = rd32((u32)param_1 + ((r5 << 2u) & 0xfffffffcu) + 0x94u);
            wr32((u32)param_1 + 0xbcu, r5 + 1u);
            r31 = r6 - 1u;
        }
    }
    r30 = rd32((u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 4u);
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    r3 = tc_call(0x8018d8ccu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8018d008u, &a);
        r29 = r3;
        if (r31 == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r3;
            r3 = tc_call(0x8018d054u, &a);
            r29 = r3;
        }
        (void)tc_call(0x800a7ae0u, &a);
        a.r[0] = 1u;
        a.r[1] = 1u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        a.r[2] = r29;
        r3 = tc_call(0x8018d4f0u, &a);
        a.r[0] = r3;
        a.r[1] = 2u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = r31;
        a.r[1] = 5u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = r29;
        a.r[1] = 6u;
        (void)tc_call(0x800a796cu, &a);
        a.r[0] = 2u;
        a.r[1] = 0x31u;
        (void)tc_call(0x800a6d5cu, &a);
        r0 = rd32((u32)param_1 + 0x3cu);
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0x38u));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0x40u));
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x8018d124u, &a);
    }
    return;
}
