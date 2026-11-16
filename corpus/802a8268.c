#include "tc_rt.h"

void fn_802a8268(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r26 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = (u32)rd8(param_r3);
    r29 = param_r3 + 1u;
    r30 = 0u;
    while ((r30 & 0xffu) < r31) {
        r3 = (u32)rd8(r29 + 2u);
        r0 = ((u32)rd8(r29 + 3u) << 8u) & 0xffffff00u;
        r4 = (u32)rd8(r29) + (((u32)rd8(r29 + 1u) << 8u) & 0xffffff00u);
        r29 = r29 + 4u;
        r0 = r3 + r0;
        r26 = r0 & 0xffffu;
        a.r[0] = r4 & 0xffffu;
        r3 = tc_call(0x802a9a34u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r0 = (u32)rd16(r3 + 0x36u) + r26;
            wr16(r3 + 0x36u, (u16)r0);
            r0 = r0 & 0xffffu;
            r4 = (u32)rd16(r3 + 0x34u);
            if (r0 > r4) {
                wr16(r3 + 0x36u, (u16)r4);
            }
            r0 = (u32)rd16(r3 + 0x38u);
            if (r0 > r26) {
                r0 = r0 - r26;
                wr16(r3 + 0x38u, (u16)r0);
            } else {
                wr16(r3 + 0x38u, 0u);
            }
            wr16(0x80540a24u, (u16)((u32)rd16(0x80540a24u) + r26));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802a7e04u, &a);
        }
        r30 = r30 + 1u;
    }
    return;
}
