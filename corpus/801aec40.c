#include "tc_rt.h"

void fn_801aec40(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80575b04u);
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_2 + 0xd34u, 0u);
    a.f[0] = f1;
    a.r[0] = 1u;
    (void)tc_call(0x801b1194u, &a);
    (void)tc_call(0x801b1248u, &a);
    if (rd32((u32)param_1 + 0x238u) != 0u) {
        a.r[0] = (u32)param_1 + 0x1f0u;
        (void)tc_call(0x80070068u, &a);
    }
    wr32((u32)param_1 + 0xcu, 4u);
    a.r[0] = (u32)param_2;
    a.r[1] = 0x24c0u;
    (void)tc_call(0x801c35dcu, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x24beu;
    r3 = tc_call(0x8010a75cu, &a);
    wr32((u32)param_1 + 0x14u, r3);
    return;
}
