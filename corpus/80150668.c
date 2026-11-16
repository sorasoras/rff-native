#include "tc_rt.h"

void fn_80150668(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    f1 = tc_callf(0x800b25bcu, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0x95u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0x96u) {
            return;
        }
    }
    wr32(param_1 + 0x1690u, 1u);
    wr32(param_1 + 0xed4u, 0u);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = param_1 + 0x16a4u;
    a.r[1] = r3;
    f1 = tc_callf(0x801508d8u, &a);
    wr32(param_1 + 0xed0u, 0x28u);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x1b8u), &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.f[0] = (f64)rdf32(0x805747e8u);
    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    a.r[0] = param_1;
    a.r[1] = 0x28u;
    (void)tc_call(0x800b31dcu, &a);
    return;
}
