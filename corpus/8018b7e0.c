#include "tc_rt.h"

void fn_8018b7e0(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = 0u;
    if (rd32((u32)param_1 + 0x204u) != 0u || rd32((u32)param_1 + 0x15cu) != 0u) {
        r5 = 1u;
    }
    if (r5 == 0u) {
        a.f[0] = (f64)rdf32(0x805752c4u);
        a.f[1] = (f64)rdf32(0x805752c8u);
        a.f[2] = (f64)rdf32(0x805752ccu);
        a.f[3] = (f64)rdf32((u32)param_1 + 0x24u);
        a.r[0] = (u32)param_1 + 0x114u;
        a.r[1] = (u32)param_2 + 8u;
        a.r[2] = rd32((u32)param_1 + 0x30u) & 0xffefffffu;
        a.r[3] = 0u;
        a.r[4] = rd32((u32)param_1 + 0x2cu);
        (void)tc_call(0x800cdc78u, &a);
        a.f[0] = (f64)rdf32(0x805752d0u);
        a.r[0] = 0x1du;
        a.r[1] = (u32)param_2 + 8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x80094c8cu, &a);
    return;
}
