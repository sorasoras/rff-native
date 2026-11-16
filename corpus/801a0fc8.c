#include "tc_rt.h"

void fn_801a0fc8(f64 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    f64 f0 = 0.0, f3 = 0.0;
    (void)param_2;
    f3 = (f64)rdf32(0x8057583cu);
    if ((u32)param_4 == 0u) {
        f3 = (f64)rdf32(0x8057585cu);
    }
    f0 = (f64)(f32)((f64)rdf32((u32)param_3 + 0x80u) * f3);
    wrf32d((u32)param_3 + 0x10u, (f64)rdf32((u32)param_3 + 0x84u));
    wrf32d((u32)param_3 + 0x14u, f0);
    if ((u32)param_4 == 0u) {
        wrf32d((u32)param_3 + 0x88u, ppc_fmadds((f64)rdf32(0x80575860u), (f64)(f32)(param_1 - (f64)rdf32((u32)param_3 + 0x74u)), (f64)rdf32((u32)param_3 + 0x88u)));
    } else {
        wrf32d((u32)param_3 + 0x88u, ppc_fnmsubs((f64)rdf32(0x80575860u), (f64)(f32)(param_1 - (f64)rdf32((u32)param_3 + 0x74u)), (f64)rdf32((u32)param_3 + 0x88u)));
    }
    f0 = (f64)(f32)((f64)rdf32((u32)param_3 + 0x74u) + (f64)rdf32((u32)param_3 + 0x88u));
    wrf32d((u32)param_3 + 8u, (f64)rdf32((u32)param_3 + 0x78u));
    wrf32d((u32)param_3 + 4u, f0);
    return;
}
