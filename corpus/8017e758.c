#include "tc_rt.h"

void fn_8017e758(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x8057506cu);
    f0 = (f64)rdf32(0x80575048u);
    wr32((u32)param_1 + 0x78u, 0u);
    wr32((u32)param_1 + 0x7cu, 0u);
    wr32((u32)param_1 + 0x80u, 8u);
    wr32((u32)param_1 + 0x84u, 0u);
    wrf32d((u32)param_1 + 0xa8u, f1);
    wrf32d((u32)param_1 + 0x88u, f0);
    a.r[0] = (u32)param_1 + 0xacu;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + 0xb0u, 0u);
    wr32((u32)param_1 + 0x8cu, 0x1eu);
    return;
}
