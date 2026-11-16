#include "tc_rt.h"

void fn_8006c5ec(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xa6cu);
    if (r0 != 4u) {
        r5 = rd32((u32)param_1 + 0xa48u);
        r0 = (r0 << 2u) & 0xfffffffcu;
        c0eq = r5 == 0u;
        r4 = r0 - 0x7fb66fa0u;
        if (!c0eq) {
            if (c0eq) {
                r0 = 0u;
            } else {
                r0 = (u32)rd8(r5 + 0x79u);
            }
            wr8(r4 + 0x2d2u, (u8)r0);
            r3 = rd32((u32)param_1 + 0xa48u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.f[0] = 0.0;
            f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
            r3 = rd32((u32)param_1 + 0xa48u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 8u), &a);
            }
            wr32((u32)param_1 + 0xa48u, 0u);
        } else {
            wr16(r4 + 0x2d0u, 0x2e8u);
        }
        r4 = rd32((u32)param_1 + 0xa68u);
        wr32((u32)param_1 + 0xa48u, r4);
        wr32((u32)param_1 + 0xa68u, 0u);
        wr32((u32)param_1 + 0xa6cu, 4u);
        if (r4 != 0u) {
            wr32(r4 + 0x7cu, 1u);
        }
    }
    return;
}
