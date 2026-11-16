#include "tc_rt.h"

void fn_80040728(f64 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x70u);
    if ((r31 != 0u && (f64)rdf32(0x80571fbcu) != (f64)rdf32(r31 + 0x14u)) && (f64)rdf32(r31 + 0x1cu) != param_1) {
        r30 = 0u;
        while (r30 < rd32(r31 + 8u)) {
            if ((s32)r30 < 0) {
                r3 = 0u;
            } else {
                r5 = rd32(r31 + 8u);
                r3 = rd32(r31 + 0xcu) + (rd32(r31 + 0x10u) * (r30 - (ppc_divwu(r30, r5) * r5)));
            }
            if (((u32)rd16(r3 + 0x14u) & 0x700u) != 0u) {
                a.f[0] = param_1;
                a.r[0] = r3;
                (void)tc_call(0x8004049cu, &a);
            }
            r30 = r30 + 1u;
        }
        wrf32d(r31 + 0x1cu, param_1);
    }
    return;
}
