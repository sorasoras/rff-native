#include "tc_rt.h"

void fn_800f31d8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_2 + 0x70u) != 0u) {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(param_2) + 0x18u), &a);
    }
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0x804890c8u;
    a.r[3] = 0x804890c8u;
    a.r[4] = param_4;
    a.r[5] = param_5;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_2) + 0x48u), &a);
    if (rd32(param_1 + 0x144u) != 0u) {
        a.r[0] = param_2;
        a.r[1] = param_1;
        a.r[2] = 0u;
        (void)tc_call(0x80070380u, &a);
    } else {
        if (rd32(param_2 + 0x70u) != 0u) {
            f0 = (f64)rdf32(0x80573b60u);
            wr32(0x817fdfb8u, 0u);
            wrf32d(0x817fdfe4u, f0);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfd0u, f0);
            wr32(param_2 + 0xa0u, 0u);
            r4 = rd32(param_2 + 0x70u);
            wr32(param_2 + 0x9cu, 0u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = param_2 + 0x9cu;
            a.r[3] = param_2 + 0xa4u;
            a.r[4] = 0x817fdfb8u;
            r3 = tc_call(0x800f3044u, &a);
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = rd32(param_2 + 0x70u);
                a.r[2] = 0x817fdfdcu;
                a.r[3] = 0x817fdfc0u;
                a.r[4] = 0x817fdfd0u;
                a.r[5] = 0x817fdfb8u;
                r3 = tc_call(0x800f2e7cu, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    wr32(param_2 + 0x98u, 1u);
                    wrf32d(param_2 + 0x88u, (f64)rdf32(0x817fdfc0u));
                    wrf32d(param_2 + 0x8cu, (f64)rdf32(0x817fdfc4u));
                    wrf32d(param_2 + 0x90u, (f64)rdf32(0x817fdfc8u));
                    wrf32d(param_2 + 0x94u, (f64)rdf32(0x817fdfccu));
                    a.r[0] = param_2;
                    a.r[1] = 0x817fdfdcu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_2) + 0x1cu), &a);
                    wrf32d(param_2 + 0x1cu, (f64)rdf32(0x817fdfd0u));
                    wrf32d(param_2 + 0x20u, (f64)rdf32(0x817fdfd4u));
                    wrf32d(param_2 + 0x24u, (f64)rdf32(0x817fdfd8u));
                    wr32(param_2 + 0xa0u, 0u);
                    wr32(param_2 + 0x9cu, 0u);
                    wr32(param_2 + 0xa8u, 0u);
                    wr32(param_2 + 0xa4u, 0u);
                } else {
                    wr32(param_2 + 0x98u, 0u);
                    wr32(param_2 + 0xa0u, 0u);
                    wr32(param_2 + 0x9cu, 0u);
                    wr32(param_2 + 0xa8u, 0u);
                    wr32(param_2 + 0xa4u, 0u);
                }
            }
            a.r[0] = param_2;
            a.r[1] = param_1;
            a.r[2] = rd32(0x817fdfb8u);
            (void)tc_call(0x80070380u, &a);
        }
    }
    return;
}
