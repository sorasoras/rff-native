#include "tc_rt.h"

void fn_801c4470(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0u;
    (void)tc_call(0x801c353cu, &a);
    r3 = rd32((u32)param_2 + 0x9cu);
    wr32((u32)param_2 + 0xd34u, 1u);
    r3 = r3 & 0xfbffffffu;
    wr32((u32)param_2 + 0x9cu, r3);
    wrf32d((u32)param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_2 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_2 + 0x184u, (f64)rdf32(0x804890d0u));
    return;
}
