#include "tc_rt.h"

s32 fn_80165b74(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80040a00u, &a);
    f1 = (f64)(f32)((f64)rdf32(0x80574b80u) * f1);
    a.f[0] = f1;
    r3 = tc_call(0x802558e4u, &a);
    r4 = (((u32)param_3 - 1u) << 2u) & 0x3fcu;
    r0 = (u32)param_1 + ((u32)param_2 * 0x78u);
    r5 = r4 + r0;
    r4 = (u32)rd8(r4 + r0);
    if (r4 >= r3) {
        r3 = 0u;
    } else {
        if ((r4 + (u32)rd8(r5 + 1u)) >= r3) {
            r3 = ((ppc_cntlzw((u32)param_2 - 3u) >> 5u) & 0x7ffffffu) + 1u;
        } else {
            r3 = ((ppc_cntlzw((u32)param_2 - 3u) >> 5u) & 0x7ffffffu) + 3u;
        }
    }
    return (s32)r3;
}
