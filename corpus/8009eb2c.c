#include "tc_rt.h"

u32 fn_8009eb2c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x58u) == 4u) {
        r4 = rd32((u32)param_1 + 0xcu);
        r5 = rd32((u32)param_1 + 0x10u);
        a.r[0] = rd32(r5 + 0x10u) + (rd32((u32)param_1 + 0x24u) & 0xffffu);
        a.r[1] = r4;
        a.r[2] = r5;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(r4), &a);
        f1 = tc_lastf();
        r30 = r3 & 0xffffu;
        r4 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
        a.r[0] = (rd32((u32)param_1 + 0x24u) & 0xffffu) + r4 + 2u;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
        r29 = r3 & 0xffffu;
        a.r[0] = (u32)param_1;
        a.r[1] = r29;
        (void)tc_call(0x8009e990u, &a);
        wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + ((((r29 << 1u) & 0xfffeu) + 4u) & 0xffffu));
    } else {
        r30 = rd32((u32)param_1 + 0x64u);
    }
    a.r[0] = rd32((u32)param_1 + 0xcu);
    a.r[1] = r30;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x8009c414u, &a);
    r30 = r3;
    if ((u32)(s8)r3 == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8009ea90u, &a);
    }
    return r30;
}
