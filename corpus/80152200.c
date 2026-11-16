#include "tc_rt.h"

void fn_80152200(u32 param_1)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = param_1 + 0x16a0u;
    r26 = 0u;
    r27 = param_1;
    do {
        a.r[0] = param_1;
        a.r[1] = r26;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x1f8u), &a);
        r29 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x8007d13cu, &a);
        r25 = (u32)rd16(r3);
        a.r[0] = r29;
        r3 = tc_call(0x8007d13cu, &a);
        r31 = (u32)rd16(r3 + 2u);
        a.r[0] = r28;
        a.r[1] = param_1;
        a.r[2] = 0u - ((ppc_cntlzw(r26) >> 5u) & 1u) + 0x15u;
        (void)tc_call(0x80152964u, &a);
        r3 = tc_call(0x800545e4u, &a);
        r29 = r3;
        a.r[0] = 0x80469958u;
        a.r[1] = r31;
        a.r[2] = 1u;
        r3 = tc_call(0x80058314u, &a);
        r31 = r3;
        a.r[0] = 0x80469958u;
        a.r[1] = r25;
        a.r[2] = 1u;
        r3 = tc_call(0x80057fd8u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = r3;
        a.r[2] = r31;
        a.r[3] = r29;
        r3 = tc_call(0x8005854cu, &a);
        f1 = tc_lastf();
        r26 = r26 + 1u;
        wr32(r27 + 0x16d8u, r3);
        r28 = r28 + 0x1f0u;
        r27 = r27 + 0x1f0u;
    } while ((s32)r26 < 2);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x1690u;
    (void)tc_call(0x800b2b40u, &a);
    return;
}
