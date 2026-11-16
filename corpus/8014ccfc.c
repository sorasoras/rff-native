#include "tc_rt.h"

void fn_8014ccfc(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x8014bd5cu, &a);
    r31 = r3;
    if (rd32(r3 + 0x48u) != 0u) {
        wrf32d(r3 + 0x24u, (f64)rdf32(0x805746e0u));
        a.r[0] = r3;
        (void)tc_call(0x8007020cu, &a);
        if ((u32)param_3 == 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8006ff00u, &a);
        } else {
            a.r[0] = r31;
            (void)tc_call(0x80070068u, &a);
        }
        r3 = rd32((u32)param_1 + 0x7cu);
        wr32((u32)param_1 + 0x7cu, r3 | (r3 ^ ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)))));
    }
    return;
}
