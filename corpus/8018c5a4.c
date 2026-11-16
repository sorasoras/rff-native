#include "tc_rt.h"

u32 fn_8018c5a4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8018ceb4u, &a);
    r31 = r3;
    if (rd32((u32)param_1 + 0x60u) == 0xffffffffu) {
        r31 = 2u;
    }
    r30 = rd32((u32)param_1 + 0x10u);
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    r3 = tc_call(0x8018d8ccu, &a);
    if (r3 == 0u) {
        r30 = 0u;
    }
    (void)tc_call(0x800a7ae0u, &a);
    a.r[0] = 2u;
    a.r[1] = 1u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    a.r[2] = r31;
    r3 = tc_call(0x8018d58cu, &a);
    a.r[0] = r3;
    a.r[1] = 2u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = r31;
    a.r[1] = 8u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x31u;
    (void)tc_call(0x800a6d5cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x8018d1e8u, &a);
    r5 = rd32(0x8036fe64u);
    r0 = rd32(0x8036fe68u);
    wr32(0x817fdfd8u, rd32(0x8036fe60u));
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x8018d124u, &a);
    return 1u;
}
