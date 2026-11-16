#include "tc_rt.h"

void fn_8019be38(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
    r3 = tc_call(0x802558e4u, &a);
    r5 = rd32((u32)param_1 + 0xa08u);
    if ((s32)r5 < 33 && r3 == (u32)rd8((r5 * 0x58u) - 0x7fb9720eu)) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        r3 = rd32((u32)param_1 + 0x290u);
        if (r3 == 7u) {
            r5 = (ppc_cntlzw(r5 - 5u) >> 5u) & 0x7ffffffu;
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[2] = r5;
            (void)tc_call(0x8019bf38u, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = (ppc_cntlzw(r3 - 0x16u) >> 5u) & 0x7ffffffu;
        (void)tc_call(0x8019bf38u, &a);
    } else {
        if ((s32)r5 < 33 && r3 == (u32)rd8((rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb9720du)) {
            r0 = 1u;
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            (void)tc_call(0x8019bf38u, &a);
        }
    }
    return;
}
