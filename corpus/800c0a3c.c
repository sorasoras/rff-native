#include "tc_rt.h"

u32 fn_800c0a3c(s32 param_1)
{
    u32 r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x1au;
    wrf32d((u32)param_1 + 0x90u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x94u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x98u, (f64)rdf32(0x804890d0u));
    r6 = rd32(0x80571140u);
    if (r6 != 0u) {
        wrf32d(r6 + 0x90u, (f64)rdf32(0x804890c8u));
        wrf32d(r6 + 0x94u, (f64)rdf32(0x804890ccu));
        wrf32d(r6 + 0x98u, (f64)rdf32(0x804890d0u));
    }
    if (rd32((u32)param_1 + 0x110u) != 0u) {
        r31 = 0u;
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800c4f2cu, &a);
    }
    return r31;
}
