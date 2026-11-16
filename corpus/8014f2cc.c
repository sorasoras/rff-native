#include "tc_rt.h"

void fn_8014f2cc(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x74u);
    if ((u32)((s32)r5 >> 31) != 0u) {
        r31 = rd32((u32)param_1 + 0x78u);
        if (r31 != 0u) {
            if ((u32)((s32)((r5 << 3u) & 0xc0000000u) >> 31) != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                (void)tc_call(0x800d9f0cu, &a);
            } else {
                a.f[0] = (f64)rdf32((u32)param_1 + 0x154u);
                a.r[0] = r31;
                (void)tc_call(0x80040728u, &a);
                a.r[0] = r31;
                a.r[1] = param_2;
                (void)tc_call(0x800318a8u, &a);
            }
        }
    }
    return;
}
