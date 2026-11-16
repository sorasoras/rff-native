#include "tc_rt.h"

void fn_8006ff58(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x8046ad24u;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8007b03cu, &a);
    wr32((u32)param_1 + 0x48u, rd32(0x8046ad28u));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006ffecu, &a);
    f1 = (f64)rdf32((u32)param_1 + 0xcu);
    f0 = (f64)rdf32((u32)param_1 + 0x10u);
    wrf32d((u32)param_1 + 0x14u, (f64)rdf32((u32)param_1 + 8u));
    wrf32d((u32)param_1 + 0x18u, f1);
    wrf32d((u32)param_1 + 0x1cu, f0);
    a.r[0] = (u32)param_1 + 0x68u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0x84u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0xa8u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1 + 0xc4u;
    (void)tc_call(0x8007ae84u, &a);
    wr32((u32)param_1 + 0xa0u, 0u);
    return;
}
