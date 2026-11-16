#include "tc_rt.h"

void fn_800b00c0(f64 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0u;
    a.f[0] = param_1;
    r3 = tc_call(rd32(rd32(param_2) + 0x138u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        r3 = rd32(param_2 + 0xda4u);
        if (r3 != 0u) {
            r0 = rd32(r3 + 4u);
        } else {
            r0 = 0xffffffffu;
        }
        if (r0 == 0u) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
            r5 = rd32(param_3);
            r4 = rd32(param_3 + 4u);
            r0 = rd32(param_3 + 8u);
            wr32(0x817fdfc0u, r3);
            wr32(0x817fdfc4u, r5);
            wr32(0x817fdfc8u, r4);
            wr32(0x817fdfccu, r0);
            a.r[0] = 0x817fdfc4u;
            f1 = tc_callf(0x80234440u, &a);
            r4 = tc_lastr4();
            if (f1 > (f64)rdf32(0x80572bfcu)) {
                f1 = (f64)rdf32(0x80572bf8u);
                r0 = 0u;
                if ((f1 == (f64)rdf32(0x817fdfc4u) && f1 == (f64)rdf32(0x817fdfc8u)) && f1 == (f64)rdf32(0x817fdfccu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdfc4u;
                    a.r[1] = 0x817fdfc4u;
                    f1 = tc_callf(0x802343e4u, &a);
                    r4 = tc_lastr4();
                }
            }
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
            wr32(0x817fdfbcu, r3);
            a.r[0] = 0x817fdfbcu;
            f1 = tc_callf(0x8014995cu, &a);
            f31 = f1;
            a.r[0] = 0x817fdfc0u;
            f1 = tc_callf(0x801498e4u, &a);
            f1 = (f64)(f32)(param_1 * (f64)(f32)(f31 * f1));
            a.f[0] = f1;
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdfc4u;
            f1 = tc_callf(0x802343c8u, &a);
            wrf32d(param_2 + 0xd30u, (f64)rdf32(0x817fdfc4u));
            wrf32d(param_2 + 0xd34u, (f64)rdf32(0x817fdfc8u));
            wrf32d(param_2 + 0xd38u, (f64)rdf32(0x817fdfccu));
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
            wr32(0x817fdfb8u, r3);
            a.r[0] = 0x817fdfb8u;
            f1 = tc_callf(0x8014995cu, &a);
            f31 = f1;
            a.r[0] = 0x817fdfc0u;
            f1 = tc_callf(0x801498e4u, &a);
            wrf32d(param_2 + 0xd50u, (f64)(f32)(f31 * f1));
        }
    }
    return;
}
