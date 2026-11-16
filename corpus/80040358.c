#include "tc_rt.h"

void fn_80040358(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r7 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x803be670u) == 0u) {
        a.r[0] = 0u;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8003f810u, &a);
    } else {
        r5 = rd32(0x803be670u);
        if ((s32)param_1 < 0) {
            r29 = 0u;
        } else {
            r7 = rd32(r5 + 8u);
            r0 = rd32(r5 + 0x10u);
            r5 = rd32(r5 + 0xcu);
            r0 = r0 * (param_1 - (ppc_divwu(param_1, r7) * r7));
            r29 = r5 + r0;
        }
        if (r29 == 0u) {
            a.r[0] = 0u;
            a.r[1] = (u32)param_2;
            (void)tc_call(0x8003f810u, &a);
        } else {
            if (param_1 == rd32(0x803be67cu) && (u32)param_2 == rd32(0x803be680u)) {
                a.r[0] = r29;
                (void)tc_call(0x8004028cu, &a);
            } else {
                a.r[0] = 0x803be670u;
                a.r[1] = r29;
                f1 = tc_callf(0x800400c0u, &a);
                if ((u32)param_2 != rd32(0x803be680u)) {
                    a.r[0] = r29;
                    a.r[1] = (u32)param_2;
                    f1 = tc_callf(0x8003f8a8u, &a);
                }
                if (param_1 == rd32(0x803be67cu)) {
                    a.r[0] = r29;
                    (void)tc_call(0x8004028cu, &a);
                } else {
                    a.r[0] = r29;
                    a.r[1] = (u32)param_2;
                    a.r[2] = rd32(0x803be674u);
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(0x803be678u), &a);
                }
                wr32(0x803be67cu, param_1);
                wr32(0x803be680u, (u32)param_2);
            }
        }
    }
    return;
}
