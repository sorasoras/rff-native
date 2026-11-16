#include "tc_rt.h"

void fn_80186630(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f2 = (f64)rdf32(0x80575178u);
    f3 = (f64)rdf32(0x805751acu);
    f1 = (f64)rdf32(0x805751b0u);
    f0 = (f64)rdf32(0x80575180u);
    wrf32d((u32)param_1 + 0x800u, (f64)rdf32(0x805751a8u));
    wrf32d((u32)param_1 + 0x808u, f3);
    wr32((u32)param_1 + 0x80cu, 0u);
    wrf32d((u32)param_1 + 0x810u, f2);
    wrf32d((u32)param_1 + 0x804u, f1);
    wrf32d((u32)param_1 + 0x814u, f2);
    wrf32d((u32)param_1 + 0x818u, f2);
    wrf32d((u32)param_1 + 0x81cu, f2);
    wrf32d((u32)param_1 + 0x820u, f0);
    wr32((u32)param_1 + 0x838u, 0x5au);
    wr32((u32)param_1 + 0x828u, 0x5au);
    wr32((u32)param_1 + 0x83cu, 0xcu);
    wr32((u32)param_1 + 0x840u, 0u);
    return;
}
