#include "tc_rt.h"

void fn_801bf940(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x817fdf64u;
    wr32(0x817fdffcu, 0u);
    r5 = 0x8033ba4cu;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    ctr = 0x11u;
    do {
        r4 = rd32(r5 + 4u);
        r5 = r5 + 8u;
        r0 = rd32(r5);
        wr32(r6 + 4u, r4);
        wr32(r6 + 8u, r0);
        r6 = r6 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7e802098u);
    a.r[0] = r31;
    r3 = tc_call(0x800510acu, &a);
    r30 = r3;
    a.r[0] = 2u;
    r3 = tc_call(0x801b3a7cu, &a);
    a.r[0] = r3;
    a.r[1] = r30;
    r3 = tc_call(0x801b39d8u, &a);
    f1 = tc_lastf();
    r29 = r3;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    a.r[7] = 0u;
    (void)tc_call(0x80050da4u, &a);
    r0 = ((u32)param_1 << 3u) & 0xfffffff8u;
    wr32(r0 - 0x7fb23b08u, r29);
    wr32(r0 - 0x7fb23b04u, r30);
    return;
}
