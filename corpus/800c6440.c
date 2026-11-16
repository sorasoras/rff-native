#include "tc_rt.h"

u32 fn_800c6440(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = param_1;
    if ((u32)param_2 != 0u) {
        wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x40000000u);
        a.r[0] = param_1;
        a.r[1] = rd32(0x8057117cu);
        (void)tc_call(0x800c05f0u, &a);
        f0 = (f64)rdf32(0x80572eacu);
        wr32(param_1 + 0xa5cu, 0u);
        r0 = rd32(0x8057118cu);
        wrf32d(0x817fdfe4u, f0);
        r0 = r0 & 0xfffffeffu;
        wr32(0x8057118cu, r0);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = 0x817fdfd8u;
        r3 = tc_call(0x8006dbd0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            wr32(param_1 + 0x1638u, 1u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f1 = tc_lastf();
            wrf32d(param_1 + 0x1628u, (f64)rdf32(r3));
            wrf32d(param_1 + 0x162cu, (f64)rdf32(r3 + 4u));
            wrf32d(param_1 + 0x1630u, (f64)rdf32(r3 + 8u));
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            wrf32d(param_1 + 0x1634u, f1);
            f2 = (f64)rdf32(0x817fdfdcu);
            wrf32d(param_1 + 0x84u, f2);
            f1 = (f64)rdf32(0x817fdfe0u);
            wrf32d(param_1 + 0x88u, f1);
            f0 = (f64)rdf32(0x817fdfe4u);
            wrf32d(param_1 + 0x8cu, f0);
            wrf32d(param_1 + 4u, f2);
            wrf32d(param_1 + 8u, f1);
            wrf32d(param_1 + 0xcu, f0);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = (f64)rdf32(0x817fdfd8u);
            a.f[1] = f2;
            (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x801a06a0u, &a);
            r3 = 1u;
            return r3;
        }
        wr32(param_1 + 0x1638u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801a06a0u, &a);
        r3 = 0u;
    } else {
        wr32(param_1 + 0xa5cu, 1u);
        wr32(0x8057118cu, rd32(0x8057118cu) | 0x100u);
        wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) & 0xbfffffffu);
        a.r[0] = param_1;
        a.r[1] = 0u;
        f1 = tc_callf(0x801a06a0u, &a);
        r4 = tc_lastr4();
        r0 = rd32(param_1 + 0x1638u);
        wr32(param_1 + 0x1644u, 0u);
        if (r0 != 0u) {
            wr32(param_1 + 0x1638u, 0u);
        }
        r30 = 0u;
        do {
            r3 = rd32(r29 + 0x163cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
                r4 = tc_lastr4();
                r3 = rd32(r29 + 0x163cu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                    r4 = tc_lastr4();
                }
                wr32(r29 + 0x163cu, 0u);
            }
            r30 = r30 + 1u;
            r29 = r29 + 4u;
        } while (r30 < 2u);
        r3 = 1u;
    }
    return r3;
}
