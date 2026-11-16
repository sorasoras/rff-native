#include "tc_rt.h"

void fn_801ced14(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    ctr = 0x14u;
    while (rd32(r3 + 0xe38u) != 0u) {
        r3 = r3 + 4u;
        r31 = r31 + 1u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            return;
        }
    }
    f1 = (f64)rdf32(0x80575ea8u);
    f0 = (f64)rdf32(0x80575ef0u);
    wrf32d(0x817fdfe4u, f1);
    wrf32d(0x817fdfe8u, f0);
    r6 = rd32(0x817fdfe4u);
    wrf32d(0x817fdfecu, f1);
    r5 = rd32(0x817fdfe8u);
    r0 = rd32(0x817fdfecu);
    wr32(0x817fdfd8u, r6);
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfe0u, r0);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x801581ccu, &a);
    wr32((u32)param_1 + ((r31 << 2u) & 0xfffffffcu) + 0xe38u, param_2);
    return;
}
