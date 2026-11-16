#include "tc_rt.h"

void fn_801af0b8(s32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x18u;
    (void)tc_call(0x801c2590u, &a);
    a.r[0] = (u32)param_1 + 0x104u;
    (void)tc_call(0x801c2590u, &a);
    if (rd32((u32)param_1 + 0x238u) != 0u) {
        a.r[0] = (u32)param_1 + 0x1f0u;
        (void)tc_call(0x80070068u, &a);
    }
    r4 = rd32((u32)param_1 + 0x14u);
    if ((s32)r4 >= 0) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0x14u, 0xffffffffu);
    }
    a.r[0] = 0u;
    (void)tc_call(0x801b12e8u, &a);
    a.f[0] = (f64)rdf32(0x80575b04u);
    a.r[0] = 0u;
    (void)tc_call(0x801b1194u, &a);
    wr32((u32)param_2 + 0xd34u, 1u);
    return;
}
