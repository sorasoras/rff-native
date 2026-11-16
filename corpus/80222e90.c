#include "tc_rt.h"

s32 fn_80222e90(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80079efcu, &a);
    f1 = (f64)rdf32(0x80576a70u);
    wr32((u32)param_1 + 0x74u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x80u, f1);
    wrf32d((u32)param_1 + 0x7cu, f1);
    wrf32d((u32)param_1 + 0x78u, f1);
    wrf32d((u32)param_1 + 0x78u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x7cu, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x80u, (f64)rdf32(0x804890d0u));
    wrf32d((u32)param_1 + 0x84u, f1);
    wrf32d((u32)param_1 + 0x88u, f1);
    wrf32d((u32)param_1 + 0x8cu, f1);
    return param_1;
}
