#include "tc_rt.h"

void fn_8014ca78(s32 param_1)
{
    u32 c0eq = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32((u32)param_1 + 0x14u);
    if (r4 != 0xffffffffu && rd32((u32)param_1 + 0x18u) != 0xffffffffu) {
        wr32(0x817fdfe8u, r4);
        r5 = rd32((u32)param_1 + 4u);
        f1 = (f64)rdf32(rd32(r5 + 0x70u) + 0x54u);
        c0eq = (f64)rdf32(0x805746e0u) == f1;
        wrf32d((u32)param_1 + 0x1cu, f1);
        if (c0eq) {
            wrf32d((u32)param_1 + 0x24u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x24u) + (f64)rdf32((u32)param_1 + 0x20u)));
            a.r[0] = r5;
            f1 = tc_callf(0x80064f9cu, &a);
            wrf32d((u32)param_1 + 0x20u, f1);
        }
        a.f[0] = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1cu) + (f64)rdf32((u32)param_1 + 0x24u));
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8014a5c0u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8014c7a4u, &a);
    return;
}
