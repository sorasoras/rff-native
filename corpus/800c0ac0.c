#include "tc_rt.h"

u32 fn_800c0ac0(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0x18u;
    if (rd32(param_1 + 0x110u) != 0u) {
        r31 = 0x19u;
        a.r[0] = param_1;
        a.r[1] = 0x24u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80572ea8u);
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    }
    return r31;
}
