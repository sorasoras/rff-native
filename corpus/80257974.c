#include "tc_rt.h"

void fn_80257974(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x805719b8u) == 0u) {
        a.r[0] = 0x805006d8u;
        a.r[1] = 0u;
        a.r[2] = 0x34u;
        (void)tc_call(0x8000443cu, &a);
        wr8(0x805719b8u, 1u);
    }
    if ((u32)param_1 != 0u) {
        r3 = rd32((u32)param_1 - 4u);
        if ((r3 & 1u) == 0u) {
            r5 = rd32(r3 + 8u);
        } else {
            r5 = (rd32((u32)param_1 - 8u) & 0xfffffff8u) - 8u;
        }
        if (r5 <= 0x44u) {
            a.r[0] = 0x805006d8u;
            a.r[1] = (u32)param_1;
            a.r[2] = r5;
            (void)tc_call(0x80257788u, &a);
        } else {
            r31 = rd32((u32)param_1 - 4u) & 0xfffffffeu;
            a.r[0] = r31;
            a.r[1] = (u32)param_1 - 8u;
            f1 = tc_callf(0x80257590u, &a);
            r3 = rd32(r31 + 0x10u);
            r5 = 0u;
            if ((r3 & 2u) == 0u && (r3 & 0xfffffff8u) == ((rd32(r31 + 0xcu) & 0xfffffff8u) - 0x18u)) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r4 = rd32(r31 + 4u);
                if (r4 == r31) {
                    r4 = 0u;
                }
                if (rd32(0x805006d8u) == r31) {
                    wr32(0x805006d8u, r4);
                }
                if (r4 != 0u) {
                    r3 = rd32(r31);
                    wr32(r4, r3);
                    wr32(r3 + 4u, r4);
                }
                wr32(r31 + 4u, 0u);
                wr32(r31, 0u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802574d8u, &a);
            }
        }
    }
    return;
}
