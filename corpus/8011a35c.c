#include "tc_rt.h"

void fn_8011a35c(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd16((u32)param_1 + 0xd4u) != 0x2e8u) {
        r0 = rd32((u32)param_1 + 0x3c8u);
        if (r0 == 1u) {
            a.r[0] = 0x817fdfe4u;
            a.r[1] = rd32((u32)param_1 + 0x3b8u);
            (void)tc_call(0x80100db8u, &a);
            f1 = (f64)rdf32(0x817fdfe4u);
            if (!(f1 < (f64)rdf32(0x805741c8u))) {
                return;
            }
            r3 = rd32((u32)param_1 + 8u);
            wr32((u32)param_1 + 0x3c8u, 2u);
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
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x800ff574u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32((u32)param_1 + 0xcu);
            a.r[1] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x800ff574u, &a);
        } else {
            if (r0 == 2u) {
                a.r[0] = 0x817fdfd8u;
                a.r[1] = rd32((u32)param_1 + 0x3b8u);
                (void)tc_call(0x80100db8u, &a);
                f1 = (f64)rdf32(0x817fdfd8u);
                f0 = (f64)rdf32(0x805741c8u);
                if ((f1 > f0) || (f1 == f0)) {
                    r3 = rd32((u32)param_1 + 0xcu);
                    wr32((u32)param_1 + 0x3c8u, 1u);
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
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x800ff574u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32((u32)param_1 + 8u);
                    a.r[1] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x800ff574u, &a);
                }
            }
        }
    }
    return;
}
