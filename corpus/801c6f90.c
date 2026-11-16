#include "tc_rt.h"

void fn_801c6f90(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) & 0xfbffffffu);
    a.r[0] = (u32)param_2;
    a.r[1] = 0u;
    (void)tc_call(0x801c353cu, &a);
    wr32((u32)param_2 + 0xd34u, 1u);
    wrf32d((u32)param_2 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_2 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_2 + 0x184u, (f64)rdf32(0x804890d0u));
    return;
}
