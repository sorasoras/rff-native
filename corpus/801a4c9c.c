#include "tc_rt.h"

void fn_801a4c9c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        if ((u32)param_2 == 1u) {
            r0 = rd32((u32)param_1 + 0xd04u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                a.f[0] = (f64)rdf32(0x80575934u);
                a.r[0] = (u32)param_1;
                a.r[1] = 6u;
                a.r[2] = 0u;
                (void)tc_call(0x800a94c0u, &a);
                wr32((u32)param_1 + 0xd00u, 0u);
                wr32((u32)param_1 + 0xd04u, 2u);
                wrf32d((u32)param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
                wrf32d((u32)param_1 + 0x180u, (f64)rdf32(0x804890ccu));
                wrf32d((u32)param_1 + 0x184u, (f64)rdf32(0x804890d0u));
                wr32((u32)param_1 + 0xeecu, 0u);
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801a2ab8u, &a);
            } else if (!c0lt) {
                if ((s32)r0 < 3) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a37d0u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 3u;
                    (void)tc_call(0x801a2fdcu, &a);
                    if ((s32)rd32((u32)param_1 + 0xd00u) > 0) {
                        r3 = rd32((u32)param_1 + 0xdb0u);
                        wr32((u32)param_1 + 0x2b0u, 1u);
                        wr32((u32)param_1 + 0xee4u, r3);
                        wr32((u32)param_1 + 0x260u, 0xdu);
                    }
                }
            } else if ((s32)r0 >= 0) {
                a.r[0] = (u32)param_1;
                a.r[1] = 4u;
                (void)tc_call(0x801a2fdcu, &a);
                if ((s32)rd32((u32)param_1 + 0xd00u) > 0) {
                    wr32((u32)param_1 + 0x2b0u, 1u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x801a2ab8u, &a);
                    wr32((u32)param_1 + 0xee4u, 0u);
                    wr32((u32)param_1 + 0x260u, 0xdu);
                }
                f0 = (f64)rdf32(0x805758e4u);
                f1 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
                if ((f1 > f0) || (f1 == f0)) {
                    r3 = rd32((u32)param_1 + 0xf40u);
                    if ((r3 & 1u) == 0u) {
                        wr32((u32)param_1 + 0xf40u, r3 | 1u);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0xfa5u;
                        (void)tc_call(0x8010a74cu, &a);
                    }
                }
            }
        }
    } else {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800a94c0u, &a);
        f1 = (f64)rdf32((u32)param_1 + 0xd10u);
        f0 = (f64)rdf32((u32)param_1 + 0xd14u);
        wrf32d((u32)param_1 + 0x17cu, (f64)rdf32((u32)param_1 + 0xd0cu));
        wrf32d((u32)param_1 + 0x180u, f1);
        wrf32d((u32)param_1 + 0x184u, f0);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801a2ab8u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
        wr32((u32)param_1 + 0xf40u, 0u);
    }
    return;
}
