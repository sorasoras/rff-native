#include "tc_rt.h"

void fn_800af9c8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x1ccu), &a);
    a.f[0] = (f64)rdf32(0x80572c00u);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    if ((rd32(param_1 + 0xf78u) & 0x2000u) == 0x2000u) {
        a.r[0] = param_1 + 0xf5cu;
        (void)tc_call(0x800f17bcu, &a);
        a.f[0] = (f64)rdf32(0x80572c14u);
        a.r[0] = param_1 + 0xf5cu;
        (void)tc_call(0x800f1708u, &a);
    }
    return;
}
