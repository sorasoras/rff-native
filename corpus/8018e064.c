#include "tc_rt.h"

u32 fn_8018e064(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0d34u, &a);
    r31 = (u32)param_1;
    r30 = (u32)param_1 + 0x21cu;
    r29 = (u32)param_1 + 0xc8u;
    r28 = 0u;
    do {
        r27 = rd32(r31 + 4u);
        a.r[0] = (u32)param_1;
        a.r[1] = r27;
        r3 = tc_call(0x80190050u, &a);
        if (r3 != 0u && (s32)r27 < (s32)rd32((u32)param_1 + 0x248u)) {
            a.r[0] = r30;
            a.r[1] = rd32((u32)param_1 + 0x244u) + (r27 * 0xau);
            a.r[2] = 0xau;
            (void)tc_call(0x80004338u, &a);
        }
        a.r[0] = r29;
        (void)tc_call(0x80157e6cu, &a);
        r28 = r28 + 1u;
        r30 = r30 + 0xau;
        r29 = r29 + 0x54u;
        r31 = r31 + 4u;
    } while ((s32)r28 < 4);
    a.r[0] = 9u;
    r3 = tc_call(0x800a7934u, &a);
    wr32((u32)param_1 + 0x500u, r3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018ece4u, &a);
    wr32((u32)param_1 + 0x218u, (u32)((s32)((rd32(rd32(0x804863d8u) + 0x9cu) << 4u) & 0xc0000000u) >> 31));
    a.r[0] = 0x804b9e80u;
    a.r[1] = 1u;
    (void)tc_call(0x8011f6bcu, &a);
    a.r[0] = 0x804b9da0u;
    r3 = tc_call(0x8010a628u, &a);
    r6 = rd32(0x8036ff48u);
    r0 = rd32(0x8036ff4cu);
    wr32(0x817fdfd8u, rd32(0x8036ff44u));
    wr32(0x817fdfdcu, r6);
    wr32(0x817fdfe0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = r3;
    (void)tc_call(0x8018efdcu, &a);
    return 1u;
}
