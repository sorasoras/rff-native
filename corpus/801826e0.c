#include "tc_rt.h"

u32 fn_801826e0(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f1 = (f64)rdf32(0x805750d4u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = 0u;
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((f64)rdf32((u32)param_1 + 0x174u) > f1 || (f64)rdf32((u32)param_1 + 0x178u) > f1) {
        f1 = (f64)rdf32((u32)param_1 + 0x174u);
        r0 = rd32((u32)param_1 + 0xccu);
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0xc8u));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32((u32)param_1 + 0xd0u));
        a.f[0] = f1;
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802343c8u, &a);
        a.f[0] = (f64)rdf32((u32)param_1 + 0x178u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = param_2;
        a.r[3] = param_3;
        (void)tc_call(0x80180c80u, &a);
        r0 = 1u;
    }
    return r0;
}
