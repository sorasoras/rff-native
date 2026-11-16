#include "tc_rt.h"

void fn_8004028c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)rd8(0x803be698u) != 0u) {
        r3 = tc_call(0x8004ca70u, &a);
        f1 = (f64)rdf32(0x80571fd0u);
        r31 = r3;
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.r[0] = 0x817fdfc0u;
        (void)tc_call(0x80233d04u, &a);
        a.r[0] = r31;
        a.r[1] = 0x817fdfc0u;
        a.r[2] = 0x817fdfc0u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fdfc0u;
        a.r[1] = 0u;
        (void)tc_call(0x802544f0u, &a);
        a.r[0] = (u32)(s16)rd32(0x803be688u);
        (void)tc_call(0x8003ee7cu, &a);
        r0 = rd32(0x803be68cu);
        wr8(0x817fdfb8u, rd8((u32)param_1 + 0x28u));
        wr8(0x817fdfb9u, rd8((u32)param_1 + 0x29u));
        wr8(0x817fdfbau, rd8((u32)param_1 + 0x2au));
        wr8(0x817fdfbbu, rd8((u32)param_1 + 0x2bu));
        a.r[0] = 0x817fdfb8u;
        a.r[1] = (u32)(s16)r0;
        (void)tc_call(0x8003f208u, &a);
    }
    (void)tc_call(0x8004b214u, &a);
    wr8(0x803be698u, 0u);
    return;
}
