#include "tc_rt.h"

void fn_8019fa00(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    if ((f64)rdf32(0x805757f0u) != param_1) {
        wrf32d((u32)param_4 + 0x124u, param_1);
    }
    if ((f64)rdf32(0x805757f0u) != param_2) {
        wrf32d((u32)param_4 + 0x128u, param_2);
    }
    if ((f64)rdf32(0x805757f0u) != param_3) {
        wrf32d((u32)param_4 + 0x12cu, param_3);
        return;
    }
    return;
}
