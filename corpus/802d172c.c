#include "tc_rt.h"

void fn_802d172c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = (u32)rd8((u32)param_2 + 0x50u);
    wr32(0x817fdffcu, 0u);
    r0 = (r0 >> 7u) & 1u;
    if (r0 != 0u) {
        a.r[0] = (u32)param_2 + 4u;
        a.r[1] = (u32)param_1 + 0x84u;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x802337a0u, &a);
        f0 = (f64)rdf32(0x80348a58u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_2 + 0x40u) - (f64)rdf32((u32)param_2 + 0x38u));
        if ((((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) != 0u) {
            f1 = -(f64)rdf32(0x817fdfdcu);
            f0 = -(f64)rdf32(0x817fdfecu);
            wrf32d(0x817fdfccu, -(f64)rdf32(0x817fdfccu));
            wrf32d(0x817fdfdcu, f1);
            wrf32d(0x817fdfecu, f0);
        }
        r3 = 0x817fdfc8u;
    } else {
        f0 = (f64)rdf32(0x80348a58u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_2 + 0x40u) - (f64)rdf32((u32)param_2 + 0x38u));
        if ((((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) != 0u) {
            a.r[0] = (u32)param_1 + 0x84u;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x8023376cu, &a);
            r3 = 0x817fdfc8u;
            f1 = -(f64)rdf32(0x817fdfdcu);
            f0 = -(f64)rdf32(0x817fdfecu);
            wrf32d(0x817fdfccu, -(f64)rdf32(0x817fdfccu));
            wrf32d(0x817fdfdcu, f1);
            wrf32d(0x817fdfecu, f0);
        } else {
            r3 = (u32)param_1 + 0x84u;
        }
    }
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x802544a0u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    return;
}
