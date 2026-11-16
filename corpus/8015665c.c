#include "tc_rt.h"

u32 fn_8015665c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 8u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            r3 = 1u;
            return r3;
        }
        if ((s32)r0 < 0) {
            r3 = 1u;
            return r3;
        }
        r5 = rd32((u32)param_1 + 4u);
        r0 = r5 - 1u;
        wr32((u32)param_1 + 4u, r0);
        if ((s32)r0 > 0) {
            r3 = 1u;
            return r3;
        }
        wr32((u32)param_1 + 4u, 0x1eu);
        r3 = rd32((u32)param_2 + 0x54u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = (u32)param_2;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x1dcu), &a);
            a.f[0] = (f64)rdf32(0x80574904u);
            a.r[0] = rd32((u32)param_2 + 0x54u);
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            f1 = tc_callf(0x800b5248u, &a);
            r4 = tc_lastr4();
            if (rd32((u32)param_2 + 0x4cu) == 3u) {
                r3 = rd32((u32)param_2 + 0x54u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.f[0] = (f64)rdf32(0x80574904u);
                a.r[0] = 0xf5u;
                a.r[1] = r3;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            } else {
                r3 = rd32((u32)param_2 + 0x54u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.f[0] = (f64)rdf32(0x80574904u);
                a.r[0] = 0xf6u;
                a.r[1] = r3;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            }
        }
        wr32((u32)param_1 + 8u, 1u);
    } else {
        r0 = rd32((u32)param_1 + 4u) - 1u;
        wr32((u32)param_1 + 4u, r0);
        if ((s32)r0 <= 0) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
