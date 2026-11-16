#include "tc_rt.h"

f64 fn_80115eec(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = (f64)rdf32((u32)param_1 + 0x40u);
    a.r[0] = param_2;
    a.r[1] = (u32)param_1 + 0x34u;
    r3 = tc_call(0x8010fcdcu, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        f1 = (f64)rdf32(0x805707e4u);
    } else {
        if (rd32((u32)param_1 + 0x44u) != 0u) {
            f0 = (f64)rdf32(0x80574124u);
            wrf32d(0x817fdff0u, f0);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdfe8u, f0);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfe8u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32((u32)param_1 + 0x30u) + 0x18u), &a);
            wrf32d(0x817fdfecu, (f64)rdf32(0x80574124u));
            a.r[0] = param_2;
            a.r[1] = 0x817fdfe8u;
            f1 = tc_callf(0x8010fed8u, &a);
            if (!(f1 < (f64)rdf32(0x80574150u))) {
                return f1;
            }
            f1 = (f64)rdf32(0x805707e4u);
        } else {
            f1 = (f64)rdf32(0x8057413cu);
        }
    }
    return f1;
}
