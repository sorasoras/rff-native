#include "tc_rt.h"

u32 fn_8020ce7c(f64 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(param_2 + 0x70u, (u32)param_3);
    wr32(param_2 + 0x78u, (u32)param_4);
    a.r[0] = param_2;
    a.r[1] = param_5;
    a.r[2] = (u32)param_4;
    a.r[3] = param_5;
    a.f[0] = param_1;
    (void)tc_call(rd32(rd32(param_2) + 0x1cu), &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = param_1;
    (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
    f0 = (f64)rdf32(0x805767c8u);
    r3 = rd32(param_2 + 0x70u);
    wrf32d(param_2 + 0x7cu, (f64)rdf32(0x804890c8u));
    wrf32d(param_2 + 0x80u, (f64)rdf32(0x804890ccu));
    wrf32d(param_2 + 0x84u, (f64)rdf32(0x804890d0u));
    wrf32d(param_2 + 0x88u, f0);
    wrf32d(param_2 + 0x8cu, f0);
    wr32(param_2 + 0x90u, 0u);
    wr32(param_2 + 0x94u, 0u);
    a.r[0] = r3;
    a.r[1] = 0xdu;
    r3 = tc_call(0x80031cf8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8020d17cu;
        (void)tc_call(0x8007b13cu, &a);
        wr32(r31 + 0x60u, param_2);
    }
    wr32(param_2 + 0x74u, 1u);
    return 1u;
}
