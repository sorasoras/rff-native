#include "tc_rt.h"

void fn_8014eee4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 0x20000u) != 0u && (u32)param_2 != 0u) {
        if (rd32((u32)param_1 + 0x124u) == 0u) {
            return;
        }
        r5 = rd32((u32)param_1 + 0x120u);
        if ((u32)((s32)((r5 << 1u) & 0xc0000000u) >> 31) == 0u) {
            if ((u32)((s32)r5 >> 31) != 0u) {
                return;
            }
            if ((rd32((u32)param_2 + 0x30u) & 0x100u) == 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_2;
                r3 = tc_call(0x800dad50u, &a);
                if (r3 == 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x124u);
                    a.r[1] = (u32)param_2;
                    a.r[2] = param_3;
                    (void)tc_call(0x80096380u, &a);
                    r0 = rd32((u32)param_1 + 0x120u) | 0x40000000u;
                    r3 = rd32((u32)param_1 + 0x124u);
                    wrf32d((u32)param_1 + 0x128u, (f64)rdf32(0x805747a0u));
                    wr32((u32)param_1 + 0x120u, r0);
                    r3 = rd32(r3 + 0xd0u);
                    if (r3 == 3u) {
                        r0 = r0 | 0x80000000u;
                        f1 = (f64)rdf32(0x805747a4u);
                        wr32((u32)param_1 + 0x120u, r0);
                        a.f[0] = f1;
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800da490u, &a);
                        a.f[0] = (f64)rdf32(0x805747a4u);
                        a.r[0] = (u32)param_1;
                        f1 = tc_callf(0x800da4b8u, &a);
                        r4 = tc_lastr4();
                        r3 = rd32((u32)param_2 + 0x2cu);
                        if (r3 != 0u) {
                            r0 = rd32(r3 + 0xb8u);
                            if (r0 != 0u) {
                                if (r0 != 2u) {
                                    return;
                                }
                                a.r[0] = r3;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
                                if (r3 == 0u) {
                                    return;
                                }
                            }
                            a.r[0] = rd32((u32)param_1 + 0x124u);
                            r3 = tc_call(0x800966c8u, &a);
                            if ((s32)r3 <= 0) {
                                r3 = 0u;
                            }
                            r3 = r3 & 0xffu;
                            a.r[0] = r3;
                            r3 = tc_call(0x800817f4u, &a);
                            r3 = r3 & 0xffffu;
                            a.r[0] = r3;
                            a.r[1] = 1u;
                            (void)tc_call(0x800818ccu, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
