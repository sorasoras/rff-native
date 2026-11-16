#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

f64 fn_802626d8(f64 param_1, f64 param_2)
{
    wrf64(0x817fdfe8u, param_1);
    wr32(0x817fdfe8u, ((u32)(px_f2b(param_2) >> 0x20ull) & 0x80000000u) | ((u32)(px_f2b(param_1) >> 0x20ull) & 0x7fffffffu));
    return rdf64(0x817fdfe8u);
}
