#include "tc_rt.h"

u32 fn_8030b030(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8030adc8u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0x24u, r3);
        wr8(r3 + 0xcu, 0u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
        wr32((u32)param_1 + 0x24u, 0u);
        a.r[0] = (u32)param_1 + 0x34u;
        (void)tc_call(0x802300d0u, &a);
        r3 = r30;
    }
    return r3;
}
