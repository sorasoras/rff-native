#include "tc_rt.h"

void fn_801a9808(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x290u);
    if (r0 == 0x12u) {
        r4 = (u32)rd16((u32)param_1 + 0xa4cu);
        if (r4 != 0x2e8u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = (u32)rd8((u32)param_1 + 0xa4fu);
            a.r[3] = (u32)rd8((u32)param_1 + 0xa4eu);
            (void)tc_call(0x8006ba28u, &a);
        }
        r4 = (u32)rd16((u32)param_1 + 0xa50u);
        if (r4 != 0x2e8u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = (u32)rd8((u32)param_1 + 0xa53u);
            a.r[3] = (u32)rd8((u32)param_1 + 0xa52u);
            a.r[4] = 0u;
            (void)tc_call(0x8006c6c0u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006c418u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8006cd5cu, &a);
    } else {
        if (r0 == 0x11u) {
            r0 = rd32((u32)param_1 + 0xa48u);
            if (r0 != 0u) {
                a.r[0] = r0;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = 0.0;
                f1 = tc_callf(rd32(rd32(r0) + 0x18u), &a);
                r3 = rd32((u32)param_1 + 0xa48u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 8u), &a);
                }
                wr32((u32)param_1 + 0xa48u, 0u);
                wr32((u32)param_1 + 0xa5cu, 0u);
            } else {
                if (rd32((u32)param_1 + 0x5c0u) != 0x2e8u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x800693a8u, &a);
                }
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8006cd5cu, &a);
        }
    }
    wr32((u32)param_1 + 0xa58u, 0x20u);
    return;
}
