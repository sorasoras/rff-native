#include "tc_rt.h"

u32 fn_80290274(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r7 = 0x8053d578u;
    r5 = 0x80348390u;
    r29 = 0u;
    r0 = (u32)rd16(param_1);
    r6 = ((u32)rd16(0x8053d590u) << 2u) & 0xfffffffcu;
    r4 = r0 & 0xffu;
    r0 = (r0 << 2u) & 0x3fcu;
    r30 = rd32(r6 - 0x7fcb7c70u);
    r0 = r0 - r4;
    r0 = (u32)rd8(r30 + r0 + 2u);
    wr16(0x8053d590u, (u16)r0);
    do {
        r3 = (u32)rd16(param_1);
        r4 = r3 & 0xffu;
        r3 = (r3 << 2u) & 0x3fcu;
        r3 = r3 - r4;
        r0 = (u32)rd8(r3 + (r29 + r30));
        if (r0 == 0x12u) break;
        r0 = (r0 << 2u) & 0x3fcu;
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.f[0] = f1;
        f1 = tc_callf(rd32(r0 - 0x7fcb7d28u), &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r29 = r29 + 1u;
    } while ((s32)r29 < 2);
    return 1u;
}
