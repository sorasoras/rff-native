#include "tc_rt.h"

u32 fn_800c1704(s32 param_1)
{
    u32 r0 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80572eb4u);
    wr32(0x817fe004u, 0x817ff000u);
    f0 = (f64)rdf32(0x80572eacu);
    wr32(0x817fdffcu, 0u);
    r31 = 0x1bu;
    wr32(0x817fdff8u, 0u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x98cu) - f1);
    wrf32d((u32)param_1 + 0x98cu, f1);
    if (f1 > f0) {
        r0 = rd32((u32)param_1 + 0x94u);
        wr32(0x817fdfe8u, rd32((u32)param_1 + 0x90u));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32((u32)param_1 + 0x98u));
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_1 + 0x974u;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x80234380u, &a);
        wrf32d((u32)param_1 + 0x90u, (f64)rdf32(0x817fdfe8u));
        wrf32d((u32)param_1 + 0x94u, (f64)rdf32(0x817fdfecu));
        wrf32d((u32)param_1 + 0x98u, (f64)rdf32(0x817fdff0u));
    }
    if (rd32((u32)param_1 + 0x110u) != 0u) {
        r31 = 0u;
    }
    return r31;
}
