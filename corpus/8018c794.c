#include "tc_rt.h"

u32 fn_8018c794(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8018ceb4u, &a);
    r31 = r3;
    if (rd32((u32)param_1 + 0x60u) == 0xffffffffu) {
        r31 = 2u;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 0x10u);
    (void)tc_call(0x8018d8ccu, &a);
    (void)tc_call(0x800a7ae0u, &a);
    a.r[0] = 3u;
    a.r[1] = 1u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = r31;
    a.r[1] = 8u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x31u;
    (void)tc_call(0x800a6d5cu, &a);
    r5 = rd32(0x8036fe88u);
    r0 = rd32(0x8036fe8cu);
    wr32(0x817fdfe8u, rd32(0x8036fe84u));
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x8018d124u, &a);
    return 1u;
}
