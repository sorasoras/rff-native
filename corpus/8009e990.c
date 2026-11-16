#include "tc_rt.h"

u32 fn_8009e990(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r28 = (u32)param_2;
    while (r28 != 0u) {
        r28 = r28 - 1u;
        r4 = (r28 << 1u) & 0xfffeu;
        r6 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
        r5 = ((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu;
        a.r[0] = r4 + (r6 + ((r5 + 2u) & 0xffffu));
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfecu;
        a.r[2] = 0x817fdfe8u;
        a.r[3] = r3 & 0xffffu;
        a.r[4] = 0u;
        (void)tc_call(0x8009db3cu, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdfe8u);
        r3 = tc_call(0x8009c430u, &a);
        if ((u32)(s8)r3 == 0u) break;
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdfecu);
        r3 = tc_call(0x8009c430u, &a);
        f1 = tc_lastf();
        if ((u32)(s8)r3 == 0u) break;
    }
    if (rd32((u32)param_1 + 0x58u) == 4u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        r3 = tc_call(0x8009c430u, &a);
        if ((u32)(s8)r3 != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
