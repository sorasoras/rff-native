#include "tc_rt.h"

void fn_800c4ab4(u32 param_1)
{
    u32 r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x290u);
    if ((r0 != 0x1eu && r0 != 0x1du) && (r0 != 0x1bu && r0 != 0x1cu)) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x8019bf38u, &a);
        wr32(param_1 + 0xa08u, 0x21u);
        f1 = (f64)rdf32(0x80572ea8u);
        wr32(param_1 + 0xa0cu, 0x21u);
        wr32(param_1 + 0xa10u, 0x21u);
        wr32(param_1 + 0xa14u, 0u);
        wr32(param_1 + 0x290u, 0x1eu);
        a.r[0] = param_1;
        a.r[1] = 2u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0x21u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    }
    return;
}
