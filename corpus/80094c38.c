#include "tc_rt.h"

void fn_80094c38(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x34u);
    if (r0 == 1u) {
        a.f[0] = (f64)rdf32(0x80572a34u);
        a.r[0] = 0x19u;
        a.r[1] = param_2;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        return;
    }
    if (r0 == 4u) {
        a.f[0] = (f64)rdf32(0x80572a34u);
        a.r[0] = 0x57u;
        a.r[1] = param_2;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        return;
    }
    return;
}
