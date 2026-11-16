#include "tc_rt.h"

void fn_8009e67c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x10u);
    r4 = rd32(r5 + 0x10u);
    a.r[0] = r4 + (((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu);
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    f1 = tc_lastf();
    r4 = r3 & 0xffffu;
    if (r4 > 1u) {
        r4 = r4 - 1u;
        a.r[0] = rd32((u32)param_1 + 0xcu);
        a.r[1] = r4;
        r3 = tc_call(0x8009c3acu, &a);
        f1 = tc_lastf();
    } else {
        r3 = 0u;
    }
    r4 = (r3 << 1u) & 0xfffeu;
    r6 = rd32(rd32((u32)param_1 + 0x10u) + 0x10u);
    r5 = ((rd32((u32)param_1 + 0x24u) & 0xffffu) + 2u) & 0xffffu;
    a.r[0] = r4 + (r6 + ((r5 + 2u) & 0xffffu));
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu)), &a);
    wr32((u32)param_1 + 0x24u, r3 & 0xffffu);
    return;
}
