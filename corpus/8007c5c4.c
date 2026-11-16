#include "tc_rt.h"

u32 fn_8007c5c4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0;
    r5 = rd32((u32)param_1 + 0x64u);
    r4 = (u32)(s16)rd16(r5 + 6u);
    if ((s32)r4 < 3) {
        wr16(r5 + 6u, (u16)(r4 + 1u));
        r3 = r5 + ((r4 << 3u) & 0xfffffff8u);
        f0 = (f64)rdf32(0x80572840u);
        wr32(r3 + 0x18u, 0u);
        r3 = r3 + 0x18u;
        wrf32d(r3 + 4u, f0);
        return r3;
    }
    return 0u;
}
