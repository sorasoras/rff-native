#include "tc_rt.h"

u32 fn_8014f368(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32(param_1 + 0x148u);
    if (r0 == 0u) {
        r4 = rd32(param_1 + 0xf8u);
        wrf32d(param_1 + 0x154u, (f64)rdf32(0x805747acu));
        a.r[0] = 0x8046ae40u;
        a.r[1] = r4;
        r3 = tc_call(0x8013ecb4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = 0x8046ae40u;
            a.r[1] = rd32(param_1 + 0xf8u);
            r3 = tc_call(0x8013ece4u, &a);
            a.r[0] = rd32(param_1 + 0x78u);
            a.r[1] = r30;
            a.r[2] = r3;
            (void)tc_call(0x80040040u, &a);
            a.r[0] = 0x8046ae40u;
            a.r[1] = rd32(param_1 + 0xf8u);
            r3 = tc_call(0x8013ecb4u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r0 = rd32(param_1 + 0x74u) | 0x4000000u;
            wrf32d(param_1 + 0x150u, (f64)rdf32(r3 + 0x14u));
            wr32(param_1 + 0x74u, r0);
        }
        if (rd32(param_1 + 0x874u) == 0xffffffffu && rd32(param_1 + 0x870u) != 0xffffffffu) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfd8u, rd32(r3));
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32(r3 + 8u));
            a.r[0] = 0x804b9da0u;
            a.r[1] = rd32(param_1 + 0x870u);
            a.r[2] = 0x817fdfd8u;
            r3 = tc_call(0x8010a85cu, &a);
            wr32(param_1 + 0x874u, r3);
        }
        wr32(param_1 + 0x148u, 1u);
    } else {
        if (r0 == 1u) {
            if (rd32(param_1 + 0x78u) == 0u) {
                wr32(param_1 + 0x120u, 7u);
                r3 = 0u;
                return r3;
            }
            f2 = (f64)rdf32(param_1 + 0x154u);
            f1 = (f64)rdf32(param_1 + 0x150u);
            if (f2 < f1) {
                f0 = (f64)(f32)(f2 + (f64)rdf32(0x805747b0u));
                wrf32d(param_1 + 0x154u, f0);
                if (!(f0 > f1)) {
                    r3 = 1u;
                    return r3;
                }
                wrf32d(param_1 + 0x154u, (f64)rdf32(0x805747acu));
            } else {
                r3 = 0u;
                return r3;
            }
        }
    }
    r3 = 1u;
    return r3;
}
