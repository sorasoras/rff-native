#include "tc_rt.h"

void fn_801c3aec(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(param_2 + 0xd34u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1ecu), &a);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x80575d40u);
    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
    if (rd32(param_2 + 0x1bcu) == 0x47u) {
        a.r[0] = param_2;
        a.r[1] = 0x2455u;
        (void)tc_call(0x801c35dcu, &a);
    } else {
        a.r[0] = param_2;
        a.r[1] = 0x24b9u;
        (void)tc_call(0x801c35dcu, &a);
    }
    return;
}
