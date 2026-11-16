#include "tc_rt.h"

u64 fn_802d1834(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0;
    r6 = (u32)rd8((u32)param_1 + 0xccu);
    r4 = ppc_mulhw(1431655766, (s32)r6);
    wrf32d(0x817fdff8u, (f64)rdf32(0x80348a58u));
    r0 = r6 - ((r4 + ((r4 >> 0x1fu) & 1u)) * 3u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        wrf32d(0x817fdff8u, (f64)(f32)(-(f64)rdf32((u32)param_1 + 0x4cu) * (f64)rdf32(0x80348a70u)));
    } else if (!c0lt) {
        if ((s32)r0 >= 3) {
            wrf32d(0x817fdff8u, (f64)rdf32(0x80348a58u));
        } else {
            wrf32d(0x817fdff8u, -(f64)rdf32((u32)param_1 + 0x4cu));
        }
    } else {
        wrf32d(0x817fdff8u, (f64)rdf32(0x80348a58u));
    }
    r4 = ppc_mulhw(1431655766, (s32)r6);
    r0 = r4 + ((r4 >> 0x1fu) & 1u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        f0 = (f64)(f32)(-(f64)rdf32((u32)param_1 + 0x50u) * (f64)rdf32(0x80348a70u));
    } else {
        if (!c0lt && (s32)r0 < 3) {
            f0 = -(f64)rdf32((u32)param_1 + 0x50u);
            return ((u64)rd32(0x817fdff8u) << 0x20ull) | (u64)ppc_single_bits(f0);
        }
        f0 = (f64)rdf32(0x80348a58u);
    }
    return ((u64)rd32(0x817fdff8u) << 0x20ull) | (u64)ppc_single_bits(f0);
}
