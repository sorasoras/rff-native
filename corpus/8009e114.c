#include "tc_rt.h"

void fn_8009e114(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfecu;
    a.r[2] = 0x817fdfe8u;
    a.r[3] = r3 & 0xffffu;
    a.r[4] = 0u;
    f1 = tc_callf(0x8009db3cu, &a);
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 4u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    f1 = tc_lastf();
    r0 = rd32(0x817fdfe8u);
    r4 = r3 & 0xffffu;
    if (r0 < r4) {
        r0 = (r0 << 1u) & 0xfffeu;
        r5 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
        r4 = ((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu;
        r0 = ((((r4 + 2u) & 0xffffu) + 2u) & 0xffffu) + r0;
        r0 = r0 & 0xffffu;
        a.r[0] = r5 + r0;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
        wr32((u32)param_1 + 0x24u, r3 & 0xffffu);
    } else {
        if ((u32)(s8)param_2 != 0u) {
            r0 = ((r4 - 1u) << 1u) & 0xfffeu;
            r5 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
            r4 = ((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu;
            r0 = ((((r4 + 2u) & 0xffffu) + 2u) & 0xffffu) + r0;
            r0 = r0 & 0xffffu;
            a.r[0] = r5 + r0;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
            wr32((u32)param_1 + 0x24u, r3 & 0xffffu);
        } else {
            wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + ((((r4 << 1u) & 0xfffeu) + 6u) & 0xffffu));
        }
    }
    return;
}
