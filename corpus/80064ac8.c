#include "tc_rt.h"

void fn_80064ac8(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80572598u);
    wr32((u32)param_1 + 0xf8u, 0u);
    wr32((u32)param_1 + 0x110u, 0u);
    wr32((u32)param_1 + 0xfcu, 0x8cu);
    wr32((u32)param_1 + 0x100u, 0u);
    wr32((u32)param_1 + 0x104u, 0u);
    wrf32d((u32)param_1 + 0x108u, f0);
    f1 = tc_callf(0x80064b40u, &a);
    if ((f64)rdf32(0x805725a0u) == f1) {
        f0 = (f64)rdf32(0x80572554u);
    } else {
        f0 = (f64)rdf32(0x8057259cu);
    }
    wrf32d((u32)param_1 + 0x10cu, f0);
    wr32((u32)param_1 + 0x114u, 0u);
    wr32((u32)param_1 + 0x118u, 0u);
    return;
}
