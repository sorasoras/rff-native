#include "tc_rt.h"

void fn_8004e114(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x8004d970u, &a);
    r6 = (u32)rd16(r3 + 0xf0u);
    r4 = ((u32)rd16(r3 + 0xf4u) >> 1u) & 0x7fffffffu;
    r30 = r3;
    r3 = 0u;
    r29 = r4 + r6;
    if ((u32)rd8(0x803c65a4u) != 0u) {
        r3 = rd32(0x803c6598u);
    }
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
    a.f[2] = (f64)rdf32(r30 + 0xe0u);
    a.f[3] = (f64)rdf32(r30 + 0xe4u);
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802539e0u, &a);
    a.r[0] = 0x803c65aau;
    a.r[1] = (u32)rd16(r30 + 0xf4u);
    a.r[2] = r30 + 0x58u;
    (void)tc_call(0x80253c38u, &a);
    a.r[0] = (u32)rd8(0x803c65a5u);
    a.r[1] = r29 & 0xffffu;
    a.r[2] = 0x803c65aau;
    (void)tc_call(0x80253d98u, &a);
    return;
}
