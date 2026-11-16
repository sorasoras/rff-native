#include "tc_rt.h"

u32 fn_8009b174(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfecu;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0u;
    a.r[3] = 0x4cu;
    a.r[4] = rd32((u32)param_1 + 0x40u);
    a.r[5] = rd32((u32)param_1 + 0x44u);
    (void)tc_call(0x8009ace8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32(0x817fdfe8u);
    r3 = tc_call(0x8009c050u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x54u;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = rd32(0x817fdfe8u);
        a.r[4] = rd32((u32)param_1 + 0x48u);
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((u32)param_1 + 0x14u), &a);
        if ((u32)(s8)r3 != 0u) {
            r0 = rd32((u32)param_1 + 0x50u);
            r31 = 1u;
            wr32((u32)param_1 + 0x58u, r30);
            r0 = r0 | 5u;
            wr32((u32)param_1 + 0x5cu, r30);
            r30 = 0u;
            wr32((u32)param_1 + 0x50u, r0);
        }
    }
    if (r30 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        (void)tc_call(0x8009c068u, &a);
    }
    return r31;
}
