#include "tc_rt.h"

u32 fn_800f6a0c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x164u);
    if ((s32)r0 >= 0) {
        a.r[0] = r0;
        r3 = tc_call(0x800a4500u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r3 = 0u;
            return r3;
        }
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r4 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        wrf32d(r4 + 0x140u, (f64)rdf32(r3));
        wrf32d(r4 + 0x144u, (f64)rdf32(r3 + 4u));
        f0 = (f64)rdf32(r3 + 8u);
        r3 = 1u;
        wrf32d(r4 + 0x148u, f0);
    } else {
        r4 = rd32((u32)param_1 + 0x168u);
        if ((s32)r4 > 0) {
            r5 = rd32(0x8046ad74u);
            while (r5 != 0u) {
                r3 = r5;
                r5 = rd32(r5);
                r3 = rd32(r3 + 8u);
                if (r4 == rd32(r3 + 0x154u)) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                    r4 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                    wrf32d(r4 + 0x140u, (f64)rdf32(r3));
                    wrf32d(r4 + 0x144u, (f64)rdf32(r3 + 4u));
                    f0 = (f64)rdf32(r3 + 8u);
                    r3 = 1u;
                    wrf32d(r4 + 0x148u, f0);
                    return r3;
                }
            }
        }
        r3 = 0u;
    }
    return r3;
}
