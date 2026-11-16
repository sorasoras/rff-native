#include "tc_rt.h"

u32 fn_802901dc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = 0u;
    do {
        r3 = (u32)rd16(param_1);
        r4 = r3 & 0xffu;
        r3 = (r3 << 2u) & 0x3fcu;
        r3 = r3 - r4;
        r0 = (u32)rd8(r3 + (r29 - 0x7fcb7d54u));
        if (r0 == 0xdu) break;
        r0 = (r0 << 2u) & 0x3fcu;
        a.r[0] = param_1;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(r0 - 0x7fcb7d88u), &a);
        r29 = r29 + 1u;
    } while ((s32)r29 < 2);
    return 1u;
}
