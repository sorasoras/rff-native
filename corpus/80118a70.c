#include "tc_rt.h"

u32 fn_80118a70(u32 param_r3)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800a63d4u, &a);
    r29 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x800510bcu, &a);
    wr32(0x80571268u, r3);
    r28 = 0x804bc118u;
    r27 = 0u;
    while ((s32)r27 < (s32)rd32(0x80571268u)) {
        r3 = tc_call(0x80097e5cu, &a);
        r30 = r3;
        a.r[0] = r29;
        (void)tc_call(0x801189f0u, &a);
        a.r[0] = r29;
        r3 = tc_call(0x801189e8u, &a);
        a.r[0] = r28;
        a.r[1] = r30;
        a.r[2] = r3;
        (void)tc_call(0x800a61ecu, &a);
        a.r[0] = r29;
        r3 = tc_call(0x801189e8u, &a);
        r30 = r3;
        a.r[0] = r29;
        r3 = tc_call(0x801189e0u, &a);
        r31 = r3;
        a.r[0] = r28;
        r3 = tc_call(0x800a63d4u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r30;
        (void)tc_call(0x80004338u, &a);
        r30 = 1u;
        a.r[0] = r29;
        r3 = tc_call(0x801189fcu, &a);
        if (r3 != 0u) {
            a.r[0] = r29;
            r3 = tc_call(0x801189e8u, &a);
            if (r3 > 0xau) {
                a.r[0] = r28;
                r3 = tc_call(0x800a63d4u, &a);
                a.r[0] = r3;
                a.r[1] = 0u;
                r3 = tc_call(0x800510bcu, &a);
                r30 = r3;
            }
        }
        wr32(r28 + 0x14u, r30);
        r27 = r27 + 1u;
        r29 = r29 + 0xcu;
        r28 = r28 + 0x18u;
    }
    return 1u;
}
