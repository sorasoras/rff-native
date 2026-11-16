#include "tc_rt.h"

u32 fn_8017f628(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r8 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32(param_1 + 0x80u) == 0u && rd32(param_1 + 0x84u) == 0u) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r30 = r3;
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfe0u, rd32(r3));
        wr32(0x817fdfe4u, r0);
        wr32(0x817fdfe8u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfe0u;
        a.r[1] = r30;
        a.r[2] = 0x817fdfe0u;
        (void)tc_call(0x802343a4u, &a);
        wrf32d(0x817fdfe4u, (f64)rdf32(0x80575048u));
        a.r[0] = 0x817fdfe0u;
        f1 = tc_callf(0x80234428u, &a);
        if (f1 < (f64)rdf32(0x80575098u)) {
            f1 = (f64)rdf32(0x80575088u);
            f0 = (f64)rdf32(0x80575048u);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfd4u, f0);
            a.f[0] = f1;
            a.f[1] = f1;
            a.r[0] = 0x817fdfd4u;
            (void)tc_call(0x80079000u, &a);
            a.r[0] = 0x817fdfd4u;
            a.r[1] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e604u;
            a.r[2] = 0x817fdfd4u;
            (void)tc_call(0x80234380u, &a);
            r8 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
            r6 = rd32(r8 + 0x144u);
            r0 = rd32(r8 + 0x148u);
            wr32(0x817fdfc8u, rd32(r8 + 0x140u));
            wr32(0x817fdfccu, r6);
            wr32(0x817fdfd0u, r0);
            a.r[0] = 0x817fdfc8u;
            a.r[1] = r8 + 0x134u;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x802343a4u, &a);
            f1 = (f64)rdf32(0x80575048u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfc8u) && f1 == (f64)rdf32(0x817fdfccu)) && f1 == (f64)rdf32(0x817fdfd0u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfc8u;
                a.r[1] = 0x817fdfc8u;
                (void)tc_call(0x802343e4u, &a);
            }
            a.f[0] = (f64)rdf32(0x805750a4u);
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdfd4u;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x817fdfd4u;
            (void)tc_call(0x80234380u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfd4u;
            (void)tc_call(0x8017fa88u, &a);
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
