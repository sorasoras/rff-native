#include "tc_rt.h"

void fn_8019ec24(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f0 = (f64)rdf32(0x805757d8u);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfc4u, f0);
    wrf32d(0x817fdfc0u, f0);
    a.r[0] = param_3;
    r3 = tc_call(0x800a5f14u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r30 = 0u;
        wrf32d(0x817fdfc0u, (f64)rdf32(r3));
        f1 = (f64)rdf32(r3 + 4u);
        c0eq = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u;
        wrf32d(0x817fdfc4u, f1);
        wrf32d(0x817fdfc8u, (f64)rdf32(r3 + 8u));
        wrf32d(0x817fdfc4u, (f64)(f32)(f1 + (f64)rdf32(r31 + 0xb4u)));
        if (!c0eq) {
            r7 = rd32(0x817fdfc4u);
            r0 = rd32(0x817fdfc8u);
            wr32(0x817fdfb4u, rd32(0x817fdfc0u));
            wr32(0x817fdfb8u, r7);
            wr32(0x817fdfbcu, r0);
            a.f[0] = param_f1;
            a.r[0] = param_2;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x804b15c0u;
            r3 = tc_call(0x800d7758u, &a);
            r30 = r3;
            a.r[0] = r3;
            a.r[1] = 0x5au;
            (void)tc_call(0x80157f70u, &a);
        } else {
            a.f[0] = param_f1;
            a.r[0] = param_2;
            a.r[1] = 0x817fdfc0u;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0x804b15c0u;
            (void)tc_call(0x800d782cu, &a);
        }
        if (r30 != 0u) {
            r31 = rd32(r30 + 0x24u);
            a.r[1] = param_5;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r30 + 0x20u, r3);
            r6 = rd32(param_4);
            wr32(r30 + 0x24u, r31);
            r5 = rd32(param_4 + 4u);
            r0 = rd32(param_4 + 8u);
            wr32(0x817fdfa8u, r6);
            wr32(0x817fdfacu, r5);
            wr32(0x817fdfb0u, r0);
            a.r[0] = r30;
            a.r[1] = 0x817fdfa8u;
            (void)tc_call(0x801581ccu, &a);
        }
    }
    return;
}
