#include "tc_rt.h"

void fn_800b3408(u32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    if ((rd32(param_1 + 0xe88u) & 0x200u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 3u;
        r3 = tc_call(0x800b1048u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x1e8u), &a);
            a.r[0] = param_1;
            a.r[1] = r3;
            f1 = tc_callf(0x800b31a0u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfd0u, r3);
            a.r[0] = 0x817fdfd0u;
            r3 = tc_call(0x80149b6cu, &a);
            c0lt = (s32)r3 < 2;
            if (r3 == 2u) {
                wr32(param_1 + 0xd84u, 0u);
                wr32(param_1 + 0xed4u, 0u);
                a.r[0] = param_1;
                f1 = tc_callf(0x800b2bccu, &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
                wr32(0x817fdfccu, r3);
                a.r[0] = 0x817fdfccu;
                f1 = tc_callf(0x8014995cu, &a);
                f31 = f1;
                r3 = tc_call(0x80040b64u, &a);
                r31 = 3u;
                if ((r3 & 1u) != 0u) {
                    r31 = 2u;
                }
                a.r[0] = 0x817fdfd0u;
                f1 = tc_callf(0x80149b9cu, &a);
                f31 = (f64)(f32)(f31 * f1);
                a.r[0] = 0x817fdfd0u;
                r3 = tc_call(0x80149b84u, &a);
                r3 = r3 ^ 0x80000000u;
                wr32(0x817fdfdcu, r3);
                f1 = rdf64(0x80572c08u);
                wr32(0x817fdfd8u, 0x43300000u);
                f1 = (f64)(f32)(rdf64(0x817fdfd8u) - f1);
                a.f[0] = f1;
                a.f[1] = f31;
                a.r[0] = param_1;
                a.r[1] = r31;
                (void)tc_call(0x800b2200u, &a);
                a.r[0] = param_1;
                a.r[1] = 0x1au;
                (void)tc_call(0x800b1ad8u, &a);
            } else if (!c0lt) {
                c0lt = (s32)r3 < 4;
                if (r3 != 4u && c0lt) {
                    wr32(param_1 + 0xd84u, 0u);
                    wr32(param_1 + 0xed4u, 0u);
                    a.r[0] = param_1;
                    f1 = tc_callf(0x800b2bccu, &a);
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
                    wr32(0x817fdfc8u, r3);
                    a.r[0] = 0x817fdfc8u;
                    f1 = tc_callf(0x8014995cu, &a);
                    f31 = f1;
                    a.r[0] = 0x817fdfd0u;
                    f1 = tc_callf(0x80149b9cu, &a);
                    f31 = (f64)(f32)(f31 * f1);
                    a.r[0] = 0x817fdfd0u;
                    r3 = tc_call(0x80149b84u, &a);
                    r3 = r3 ^ 0x80000000u;
                    wr32(0x817fdfdcu, r3);
                    f1 = rdf64(0x80572c08u);
                    wr32(0x817fdfd8u, 0x43300000u);
                    f1 = (f64)(f32)(rdf64(0x817fdfd8u) - f1);
                    a.f[0] = f1;
                    a.f[1] = f31;
                    a.r[0] = param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x800b2200u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x1au;
                    (void)tc_call(0x800b1ad8u, &a);
                }
            } else {
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    wr32(param_1 + 0xd84u, 0u);
                    wr32(param_1 + 0xed4u, 0u);
                    a.r[0] = param_1;
                    (void)tc_call(0x800b334cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = param_1 + 0xd88u;
                    (void)tc_call(0x800b32ecu, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x1au;
                    (void)tc_call(0x800b1ad8u, &a);
                } else if (!c0lt) {
                    wr32(param_1 + 0xd84u, 0u);
                    wr32(param_1 + 0xed4u, 0u);
                    a.r[0] = param_1;
                    (void)tc_call(0x800b334cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = param_1 + 0xd88u;
                    (void)tc_call(0x800b32ecu, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x12u;
                    (void)tc_call(0x800b31a0u, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x1au;
                    (void)tc_call(0x800b1ad8u, &a);
                }
            }
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x800b335cu, &a);
    return;
}
