#include "tc_rt.h"

u32 fn_800f06b4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    a.r[0] = param_2;
    f1 = tc_callf(0x80234440u, &a);
    f0 = (f64)rdf32(0x80573aecu);
    f31 = (f64)(f32)((f64)rdf32(rd32((u32)param_1 + 0x18u) + 0xd54u) - f1);
    if ((f31 < f0) || (f31 == f0)) {
        r3 = 0u;
    } else {
        a.r[0] = param_3;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 < f31) {
            a.r[0] = param_2;
            a.r[1] = param_3;
            a.r[2] = param_2;
            (void)tc_call(0x80234380u, &a);
        } else {
            a.r[0] = param_3;
            f1 = tc_callf(0x80234440u, &a);
            if (f1 > (f64)rdf32(0x80573aecu)) {
                f1 = (f64)rdf32(0x80573ad8u);
                r0 = 0u;
                if ((f1 == (f64)rdf32(param_3) && f1 == (f64)rdf32(param_3 + 4u)) && f1 == (f64)rdf32(param_3 + 8u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = param_3;
                    a.r[1] = param_3;
                    (void)tc_call(0x802343e4u, &a);
                }
                r0 = rd32(param_3 + 4u);
                wr32(0x817fdfc8u, rd32(param_3));
                wr32(0x817fdfccu, r0);
                wr32(0x817fdfd0u, rd32(param_3 + 8u));
                a.f[0] = f31;
                a.r[0] = 0x817fdfc8u;
                a.r[1] = 0x817fdfc8u;
                (void)tc_call(0x802343c8u, &a);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = param_2;
                (void)tc_call(0x80234380u, &a);
            }
        }
        r3 = 1u;
    }
    return r3;
}
