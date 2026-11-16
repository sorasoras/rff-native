#include "tc_rt.h"

void fn_8007cf50(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r29 = rd32((u32)param_2 + 0x64u);
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x8007cd58u, &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_2 + 0x30u);
        a.r[1] = rd32((u32)param_2 + 0x4cu);
        a.r[2] = rd32((u32)param_2 + 0x50u);
        (void)tc_call(0x802337a0u, &a);
    } else {
        r12 = rd32(0x803503ccu);
        r11 = rd32(0x803503d0u);
        r10 = rd32(0x803503d4u);
        r9 = rd32(0x803503d8u);
        r0 = rd32(0x803503dcu);
        wr32(0x817fdfd8u, rd32(0x803503c8u));
        wr32(0x817fdfdcu, r12);
        f1 = (f64)rdf32(0x817fdfd8u);
        wr32(0x817fdfe0u, r11);
        wr32(0x817fdfe4u, r10);
        wr32(0x817fdfe8u, r9);
        wr32(0x817fdfecu, r0);
        wrf32d(0x817fdfd8u, (f64)(f32)(f1 * (f64)rdf32(r29 + 8u)));
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0x817fdfd8u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 1u;
        (void)tc_call(0x8007ca18u, &a);
    }
    return;
}
