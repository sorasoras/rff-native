#include "tc_rt.h"

void fn_801804b8(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    f0 = (f64)rdf32(0x805750b8u);
    wrf32d((u32)param_1 + 0xb0u, (f64)rdf32(0x804890d4u));
    wrf32d((u32)param_1 + 0xb4u, (f64)rdf32(0x804890d8u));
    wrf32d((u32)param_1 + 0xb8u, (f64)rdf32(0x804890dcu));
    wrf32d((u32)param_1 + 0xd4u, f0);
    wr32((u32)param_1 + 0xe0u, 1u);
    wrf32d((u32)param_1 + 0xd8u, f0);
    wr32((u32)param_1 + 0xdcu, 1u);
    wr32((u32)param_1 + 0xf4u, 1u);
    wrf32d((u32)param_1 + 0xf0u, f0);
    wr32((u32)param_1 + 0xf8u, 0u);
    wr32((u32)param_1 + 0xfcu, 0xffffffffu);
    wr32((u32)param_1 + 0x170u, 0u);
    wr32((u32)param_1 + 0x180u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80182db8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x80182cbcu, &a);
    f0 = (f64)rdf32(0x805750b8u);
    wr32((u32)param_1 + 0x18cu, 0xffffffffu);
    wrf32d((u32)param_1 + 0xc8u, f0);
    wrf32d((u32)param_1 + 0xccu, f0);
    wrf32d((u32)param_1 + 0xd0u, f0);
    wr32((u32)param_1 + 0x190u, 0x1032u);
    return;
}
