#include "tc_rt.h"

void fn_8004e22c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r8 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (param_1 != (u32)rd8(0x803c65a4u)) {
        r3 = tc_call(0x8004d970u, &a);
        r8 = r3;
        if (param_1 != 0u) {
            r6 = (u32)rd8(0x803c65a7u);
            r5 = (u32)rd8(0x803c65a8u);
            r0 = (u32)rd8(0x803c65a9u);
            wr8(0x817fdfecu, rd8(0x803c65a6u));
            r3 = rd32(0x803c6598u);
            wr8(0x817fdfedu, (u8)r6);
            f1 = (f64)rdf32(0x803c659cu);
            wr8(0x817fdfeeu, (u8)r5);
            f2 = (f64)rdf32(0x803c65a0u);
            wr8(0x817fdfefu, (u8)r0);
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = (f64)rdf32(r8 + 0xe0u);
            a.f[3] = (f64)rdf32(r8 + 0xe4u);
            a.r[0] = r3;
            a.r[1] = 0x817fdfecu;
            (void)tc_call(0x802539e0u, &a);
        } else {
            r6 = (u32)rd8(0x803c65a7u);
            r5 = (u32)rd8(0x803c65a8u);
            r0 = (u32)rd8(0x803c65a9u);
            wr8(0x817fdfe8u, rd8(0x803c65a6u));
            f1 = (f64)rdf32(0x803c659cu);
            wr8(0x817fdfe9u, (u8)r6);
            f2 = (f64)rdf32(0x803c65a0u);
            wr8(0x817fdfeau, (u8)r5);
            wr8(0x817fdfebu, (u8)r0);
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = (f64)rdf32(r3 + 0xe0u);
            a.f[3] = (f64)rdf32(r3 + 0xe4u);
            a.r[0] = 0u;
            a.r[1] = 0x817fdfe8u;
            (void)tc_call(0x802539e0u, &a);
        }
        wr8(0x803c65a4u, (u8)param_1);
    }
    return;
}
