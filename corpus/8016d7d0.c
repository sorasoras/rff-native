#include "tc_rt.h"

void fn_8016d7d0(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r9 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b5b00u, &a);
    r31 = r3;
    if (r3 != 0xffffffffu) {
        f1 = (f64)rdf32(0x80574cd4u);
        r6 = ((r3 << 4u) & 0xfffffff0u) - 0x7fb619f0u;
        r9 = rd32(r6 + 8u);
        r0 = rd32(r6 + 0xcu);
        wr32(0x817fdfe8u, rd32(r6 + 4u));
        wr32(0x817fdfecu, r9);
        wr32(0x817fdff0u, r0);
        a.f[0] = f1;
        a.r[0] = (u32)param_2;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b2cdcu, &a);
        if ((s32)r31 < 0) {
            r31 = 0u;
        }
        if ((s32)r31 >= 180) {
            r31 = 0xb3u;
        }
        wr32((u32)param_2 + 0x160cu, r31);
    }
    return;
}
