#include "tc_rt.h"

void fn_8018b948(s32 param_1, u32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = 0u;
    if (rd32((u32)param_1 + 0x204u) != 0u || rd32((u32)param_1 + 0x15cu) != 0u) {
        r4 = 1u;
    }
    if (r4 == 0u) {
        a.f[0] = (f64)rdf32(0x805752c4u);
        a.f[1] = (f64)rdf32(0x805752c8u);
        a.f[2] = (f64)rdf32(0x805752ccu);
        a.f[3] = (f64)rdf32((u32)param_1 + 0x24u);
        a.r[0] = (u32)param_1 + 0x114u;
        a.r[1] = param_2;
        a.r[2] = rd32((u32)param_1 + 0x30u) & 0xffefffffu;
        a.r[3] = 0u;
        a.r[4] = rd32((u32)param_1 + 0x2cu);
        (void)tc_call(0x800cdc78u, &a);
        a.f[0] = (f64)rdf32(0x805752d0u);
        a.r[0] = 0x1du;
        a.r[1] = param_2;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006fef8u, &a);
    return;
}
