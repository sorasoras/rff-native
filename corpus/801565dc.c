#include "tc_rt.h"

void fn_801565dc(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 t2 = 0.0, t4 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = (u32)param_2 + 0x44u;
    (void)tc_call(0x80155e88u, &a);
    a.f[0] = (f64)rdf32(0x817fdfe4u);
    a.f[1] = (f64)rdf32(0x817fdfe8u);
    a.f[2] = (f64)rdf32(0x817fdfecu);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x80156140u, &a);
    r3 = rd32((u32)param_2 + 0x54u);
    if (r3 != 0u) {
        t2 = (f64)rdf32(0x817fdfe8u);
        t4 = (f64)rdf32(0x817fdfecu);
        wrf32d(0x817fdfd8u, (f64)rdf32(0x817fdfe4u));
        wrf32d(0x817fdfdcu, t2);
        wrf32d(0x817fdfe0u, t4);
        a.f[0] = (f64)rdf32(0x80574904u);
        a.r[0] = r3;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b2cdcu, &a);
    }
    return;
}
