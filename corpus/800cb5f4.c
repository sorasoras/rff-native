#include "tc_rt.h"

void fn_800cb5f4(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    r5 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = rd32(param_2 + 4u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfe8u, r5);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = (u32)param_1 + 0x60u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = (u32)param_1;
    (void)tc_call(0x80234380u, &a);
    r3 = (u32)param_1 + 0xcu;
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r3;
    (void)tc_call(0x80234380u, &a);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d((u32)param_1 + 0x60u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0x64u, f1);
    wrf32d((u32)param_1 + 0x68u, f0);
    return;
}
