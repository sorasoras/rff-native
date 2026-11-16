#include "tc_rt.h"

u32 fn_80119538(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801194bcu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r30 = rd32(0x804863d8u);
        if (r30 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
            f1 = tc_lastf();
            r31 = r3;
            r3 = rd32((u32)param_1 + 0x48u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = 0x817fdfe4u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfe4u;
            f1 = tc_callf(0x80234428u, &a);
            f0 = (f64)(f32)((f64)rdf32(r30 + 0xb0u) + (f64)(f32)((f64)rdf32(0x805741a0u) + (f64)rdf32(rd32((u32)param_1 + 0x48u) + 0xb0u)));
            f0 = (f64)(f32)(f0 * f0);
            if (f1 > (f64)rdf32(0x805741a4u) && f1 < f0) {
                r5 = rd32(r30 + 0x7cu);
                r0 = rd32(r30 + 0x80u);
                wr32(0x817fdfd8u, rd32(r30 + 0x78u));
                wr32(0x817fdfdcu, r5);
                wr32(0x817fdfe0u, r0);
                a.r[0] = 0x817fdfe4u;
                a.r[1] = 0x817fdfe4u;
                (void)tc_call(0x802343e4u, &a);
                if (ppc_fmadds((f64)rdf32(0x817fdfe0u), (f64)rdf32(0x817fdfecu), ppc_fmadds((f64)rdf32(0x817fdfd8u), (f64)rdf32(0x817fdfe4u), (f64)(f32)((f64)rdf32(0x817fdfdcu) * (f64)rdf32(0x817fdfe8u)))) > (f64)rdf32(0x805741a8u)) {
                    r3 = 1u;
                    return r3;
                }
            }
            r3 = 0u;
        }
    }
    return r3;
}
