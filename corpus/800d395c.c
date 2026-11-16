#include "tc_rt.h"

void fn_800d395c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d595cu, &a);
    if (r3 == 0u) {
        f0 = (f64)rdf32(0x80573124u);
        r0 = (rd32((u32)param_1 + 0x72cu) | 0xc0000000u) & 0xdfffffffu;
        wrf32d((u32)param_1 + 0x4f0u, f0);
        wr32((u32)param_1 + 0x72cu, r0);
        wrf32d((u32)param_1 + 0x4f4u, f0);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800d38e4u, &a);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d5b8cu, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x1du;
            (void)tc_call(0x800d5bc8u, &a);
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = 2u;
            (void)tc_call(0x800d5bc8u, &a);
        }
    }
    return;
}
