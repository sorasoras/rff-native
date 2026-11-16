#include "tc_rt.h"

void fn_802d3780(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r3 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_r3 != 0u) {
        c0eq = rd32(param_r3 + 0xfcu) == 0u;
        wr32(param_r3, 0x80399f94u);
        if (!c0eq) {
            r29 = 0u;
            r30 = 0u;
            while ((s32)r29 < (s32)rd8(param_r3 + 0x100u)) {
                r3 = rd32(rd32(param_r3 + 0xfcu) + r30 + 4u);
                a.r[0] = r3;
                a.r[1] = 0xffffffffu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r3) + 8u), &a);
                a.r[0] = rd32(0x805474e0u);
                f1 = tc_callf(0x8026d4a0u, &a);
                r30 = r30 + 8u;
                r29 = r29 + 1u;
            }
            a.r[0] = rd32(0x805474e0u);
            f1 = tc_callf(0x8026d4a0u, &a);
        }
        r3 = rd32(param_r3 + 0x28u);
        if (r3 != 0u && (u32)rd8(r3 + 0x54u) == 0u) {
            a.r[0] = r3;
            a.r[1] = 0xffffffffu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 8u), &a);
            a.r[0] = rd32(0x805474e0u);
            (void)tc_call(0x8026d4a0u, &a);
            wr32(param_r3 + 0x28u, 0u);
        }
        a.r[0] = param_r3 + 0xf4u;
        (void)tc_call(0x802cb7c4u, &a);
        r3 = param_r3 + 0xe4u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x802cb69cu;
            a.r[2] = 4u;
            a.r[3] = 4u;
            (void)tc_call(0x8025571cu, &a);
        }
        a.r[0] = param_r3;
        a.r[1] = 0u;
        (void)tc_call(0x802d0b00u, &a);
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}
