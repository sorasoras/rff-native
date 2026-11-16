#include "tc_rt.h"

void fn_8016182c(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x5cu) != 0u) {
        c0eq = rd32(0x80571100u) == 1u;
        r5 = ((u32)rd16((u32)param_1 + 0xbcu) * 0x34u) - 0x7fb60e50u;
        r3 = rd32(r5 + 0x2884u);
        r0 = rd32(r5 + 0x2888u);
        wr32(0x817fdfe4u, rd32(r5 + 0x2880u));
        wr32(0x817fdfe8u, r3);
        wr32(0x817fdfecu, r0);
        if (c0eq) {
            wrf32d(0x817fdfe4u, (f64)(f32)((f64)rdf32(0x817fdfe4u) * (f64)rdf32(0x80574af0u)));
        }
        r5 = rd32(0x817fdfe8u);
        r0 = rd32(0x817fdfecu);
        wr32(0x817fdfd8u, rd32(0x817fdfe4u));
        f1 = (f64)rdf32(0x80574af4u);
        wr32(0x817fdfdcu, r5);
        wr32(0x817fdfe0u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfd8u;
        (void)tc_call(0x802343c8u, &a);
        r3 = rd32((u32)param_1 + 0x5cu);
        wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdfd8u));
        wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdfdcu));
        wrf32d(r3 + 0x24u, (f64)rdf32(0x817fdfe0u));
    }
    return;
}
