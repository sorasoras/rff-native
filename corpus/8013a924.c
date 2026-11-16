#include "tc_rt.h"

void fn_8013a924(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    f1 = (f64)rdf32(0x805743a8u);
    wr32(0x817fe004u, 0x817ff000u);
    f2 = (f64)rdf32(0x805743acu);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.f[0] = f1;
    a.f[1] = f2;
    (void)tc_call(0x80059c9cu, &a);
    r30 = 0u;
    r31 = 0u;
    do {
        r3 = rd32((u32)param_1 + r31 + 0x44u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x8013b6fcu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 4);
    r30 = 0u;
    r31 = 0u;
    do {
        a.r[0] = (u32)param_1 + r31 + 0x68u;
        (void)tc_call(0x8013aff4u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x8cu;
    } while ((s32)r30 < 2);
    if (rd32((u32)param_1 + 0x5f0u) == (u32)rd8(0x80492821u)) {
        r3 = rd32((u32)param_1 + 0x180u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fe9bcu, &a);
        }
    }
    a.r[0] = (u32)param_1 + 0x5a4u;
    (void)tc_call(0x80163f60u, &a);
    r0 = rd32(0x805743a4u);
    c0eq = rd32(rd32(0x805711ccu) + 0xfcu) == 2u;
    wr32(0x817fdfe8u, rd32(0x805743a0u));
    wr32(0x817fdfecu, r0);
    if (c0eq) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    a.r[0] = rd32((u32)param_1 + 0x188u);
    a.r[1] = rd32(r0 - 0x7e802018u);
    (void)tc_call(0x801ed110u, &a);
    a.r[0] = rd32((u32)param_1 + 0x188u);
    a.r[1] = rd32((u32)param_1 + 0x18cu);
    (void)tc_call(0x801ec6bcu, &a);
    a.r[0] = (u32)param_1 + 0x54u;
    (void)tc_call(0x8013bd60u, &a);
    a.r[0] = (u32)param_1 + 0x198u;
    (void)tc_call(0x80119c70u, &a);
    return;
}
