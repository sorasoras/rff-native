#include "tc_rt.h"

u32 fn_8014d71c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x20u);
    wr32((u32)param_1 + 0x20u, r4 - 1u);
    if (r4 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        a.r[1] = 1u;
        (void)tc_call(0x8014d2d8u, &a);
        r31 = rd32((u32)param_1 + 0x1cu);
        a.r[0] = rd32(r31 + 4u) + 0xcu;
        a.r[1] = r31 + 0x48u;
        a.r[3] = 0u;
        (void)tc_call(0x8030647cu, &a);
        f1 = (f64)(f32)((f64)rdf32(r31 + 0x4cu) + (f64)rdf32(0x805746f4u));
        wrf32d(r31 + 0x4cu, f1);
        a.f[0] = f1;
        a.r[0] = r31;
        (void)tc_call(0x8014d22cu, &a);
        r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x48u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802f643cu, &a);
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        (void)tc_call(0x8014d664u, &a);
    }
    return 1u;
}
