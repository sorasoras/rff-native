#include "tc_rt.h"

u32 fn_800a7f50(s32 param_1)
{
    u32 r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80572b48u);
    r30 = 0x8049e1c0u;
    r29 = 0u;
    r31 = rd32((u32)param_1 + 0x18u);
    f30 = (f64)rdf32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    while ((s32)r29 < (s32)rd16((u32)param_1 + 0x16u)) {
        r4 = rd32(r31);
        if (r4 != 0u) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.f[0] = f30;
            (void)tc_call(rd32(r4 + 0x14u), &a);
        } else {
            wrf32d(r30, f31);
        }
        r31 = r31 + 4u;
        r30 = r30 + 4u;
        r29 = r29 + 1u;
    }
    return 0x8049e1c0u;
}
