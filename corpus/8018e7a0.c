#include "tc_rt.h"

u32 fn_8018e7a0(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    r29 = (u32)param_1;
    do {
        r31 = rd32(r29 + 4u);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x80190050u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            r3 = tc_call(0x8018f4a8u, &a);
            f1 = tc_lastf();
            wr32(r29 + 0xa8u, r3);
        }
        r30 = r30 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r30 < 4);
    r3 = tc_call(0x800a7ae0u, &a);
    f1 = tc_lastf();
    r29 = (u32)param_1;
    r30 = 0x8033aba0u;
    r28 = 0u;
    do {
        r3 = tc_call(0x80097da4u, &a);
        f1 = tc_lastf();
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = rd32(r30);
        r3 = tc_call(0x800a3168u, &a);
        f1 = tc_lastf();
        r4 = rd32(r29 + 0xa8u);
        r31 = r3;
        r5 = rd32((u32)param_1 + 0x8cu);
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        r3 = tc_call(0x8018f608u, &a);
        f1 = tc_lastf();
        r27 = r3;
        if (r3 == 1u) {
            r3 = tc_call(0x80097da4u, &a);
            f1 = tc_lastf();
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = rd32(r30);
            a.r[2] = r31 + 1u;
            r3 = tc_call(0x800a31c0u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = r27;
        a.r[1] = r28 + 5u;
        r3 = tc_call(0x800a796cu, &a);
        f1 = tc_lastf();
        r28 = r28 + 1u;
        r29 = r29 + 4u;
        r30 = r30 + 4u;
    } while ((s32)r28 < 4);
    a.r[0] = 2u;
    a.r[1] = 0x26u;
    r3 = tc_call(0x800a6d5cu, &a);
    f1 = tc_lastf();
    r6 = rd32(0x8036ff8cu);
    r5 = rd32(0x8036ff90u);
    r0 = rd32(0x8036ff94u);
    wr32(0x817fdfd8u, r6);
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfd8u;
    r3 = tc_call(0x8018f058u, &a);
    f1 = tc_lastf();
    return 1u;
}
