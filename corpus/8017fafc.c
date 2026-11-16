#include "tc_rt.h"

void fn_8017fafc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x80u);
    a.r[1] = 1u;
    (void)tc_call(0x8017fde4u, &a);
    wr32((u32)param_1 + 0x80u, 0u);
    a.r[0] = 0u;
    a.r[1] = 1u;
    (void)tc_call(0x8017fdc8u, &a);
    wrf32d((u32)param_1 + 0x88u, (f64)rdf32(0x8057507cu));
    return;
}
