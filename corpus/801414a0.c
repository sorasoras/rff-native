#include "tc_rt.h"

void fn_801414a0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0x90u) & 0x4000u) != 0u) {
        if ((u32)param_2 != 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800f3c58u, &a);
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800f3ca4u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x800841d4u, &a);
        r3 = rd32((u32)param_1 + 0x80u) | 0x20000000u;
        wr32((u32)param_1 + 0x80u, r3);
        if ((u32)((s32)((r3 << 2u) & 0xc0000000u) >> 31) != 0u) {
            wr32((u32)param_1 + 0x80u, r3 | 0x8000000u);
        }
        f1 = (f64)rdf32(0x80574458u);
        if ((u32)param_2 == 0u) {
            f1 = (f64)(f32)(f1 * (f64)rdf32(0x80574450u));
        }
        r3 = rd32((u32)param_1 + 0x70u);
        if (r3 != 0u) {
            wrf32d(r3 + 0x58u, f1);
        }
    }
    return;
}
