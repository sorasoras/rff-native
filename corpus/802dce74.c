#include "tc_rt.h"

f64 fn_802dce74(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r9 = 0;
    u64 t0 = 0;
    f64 f1 = 0.0;
    r3 = rd32((u32)param_1 + 0x28u);
    t0 = (u64)(u32)((s32)r3 >> 16) + (u64)(((s32)r3 < 0) && ((r3 & 0xffffu) != 0u));
    c0lt = (s32)t0 < 0;
    if ((s32)t0 > 0) {
        r0 = ppc_mulhw(458129845, (s32)t0);
        r9 = (u32)((s32)r0 >> 7);
        r0 = (u32)((s32)r0 >> 7);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r5 = (u32)((s32)ppc_mulhw(1374389535, (s32)((u32)t0 - (r0 * 0x4b0u))) >> 5);
        r7 = r5 + ((r5 >> 0x1fu) & 1u);
        r5 = (u32)((s32)ppc_mulhw(1374389535, (s32)t0) >> 5);
        f1 = (f64)(f32)((f64)rdf32(((((u32)t0 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 0x64u)) << 2u) & 0xfffffffcu) - 0x7fc63b30u) * (f64)(f32)((f64)rdf32((((r9 + ((r9 >> 0x1fu) & 1u)) << 2u) & 0xfffffffcu) - 0x7fc639a0u) * (f64)rdf32(((r7 << 2u) & 0xfffffffcu) - 0x7fc63970u)));
        return f1;
    }
    if (c0lt) {
        r0 = ppc_mulhw(1374389535, (s32)t0);
        r5 = (u32)((s32)r0 >> 5);
        r0 = (u32)((s32)r0 >> 5);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x64u;
        r4 = r5 + ((r5 >> 0x1fu) & 1u);
        r3 = (u32)t0 - r0;
        if (r3 != 0u) {
            r3 = r3 + 0x64u;
            r4 = r4 - 1u;
        }
        return (f64)(f32)((f64)rdf32(0u - ((r4 << 2u) & 0xfffffffcu) - 0x7fc63940u) * (f64)rdf32(((r3 << 2u) & 0xfffffffcu) - 0x7fc63b30u));
    }
    return (f64)rdf32(0x80348b38u);
}
