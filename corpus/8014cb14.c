#include "tc_rt.h"

void fn_8014cb14(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r3 = rd32(param_1 + 4u);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
    wr32(0x817fdfbcu, r3);
    a.r[0] = 0x817fdfbcu;
    r3 = tc_call(0x801496bcu, &a);
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x817fdfbcu;
        r3 = tc_call(0x801496bcu, &a);
        wr32(0x817fdfb8u, r3);
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x8014bd5cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r3;
        if (rd32(r3 + 0x48u) == 0u) {
            r3 = rd32(param_1 + 4u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x120u), &a);
            r3 = r3 ^ 0x80000000u;
            wr32(0x817fdfd4u, r3);
            f1 = rdf64(0x805746e8u);
            wr32(0x817fdfd0u, 0x43300000u);
            wrf32d(r31 + 0x24u, (f64)(f32)(rdf64(0x817fdfd0u) - f1));
            a.r[0] = 0x817fdfb8u;
            a.r[1] = param_2;
            r3 = tc_call(0x80149d9cu, &a);
            r28 = r3;
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = param_2;
            (void)tc_call(0x80149dbcu, &a);
            if (r28 != 0xffffffffu) {
                r28 = rd32(rd32(param_1 + 4u) + 0x70u);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = param_2;
                r3 = tc_call(0x80149d9cu, &a);
                a.r[0] = r31;
                a.r[1] = r28;
                a.r[2] = r3;
                a.r[3] = 0x817fdfc0u;
                (void)tc_call(0x80070108u, &a);
            } else {
                r28 = rd32(rd32(param_1 + 4u) + 0x70u);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = param_2;
                r3 = tc_call(0x80149d7cu, &a);
                a.r[0] = r31;
                a.r[1] = r28;
                a.r[2] = r3;
                a.r[3] = 0x817fdfc0u;
                (void)tc_call(0x80070170u, &a);
            }
            f31 = (f64)rdf32(rd32(param_1 + 4u) + 0x20u);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = param_2;
            f1 = tc_callf(0x80149df0u, &a);
            wrf32d(r31 + 0x20u, (f64)(f32)(f1 * f31));
            a.r[0] = r31;
            f1 = tc_callf(0x8006ff58u, &a);
            r3 = rd32(param_1 + 4u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
            r0 = 5u;
            if (r3 != 0u) {
                r0 = 0xau;
            }
            r4 = r0 | param_3;
            if ((u32)rd8(rd32(param_1 + 4u) + 0x167cu) != 0u) {
                r4 = r4 | 0x80000u;
            }
            wr32(0x817fdfd4u, param_4 ^ 0x80000000u);
            f1 = rdf64(0x805746e8u);
            wr32(0x817fdfd0u, 0x43300000u);
            f0 = rdf64(0x817fdfd0u);
            wr32(r31 + 0x30u, r4);
            f0 = (f64)(f32)(f0 - f1);
            wrf32d(r31 + 0xa4u, f0);
            r3 = rd32(param_1 + 0x78u);
            wr32(param_1 + 0x78u, r3 | (r3 ^ (((param_2 & 0x20u) != 0u) ? 0u : (1u << (param_2 & 0x1fu)))));
        }
    }
    return;
}
