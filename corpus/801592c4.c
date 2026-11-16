#include "tc_rt.h"

f64 fn_801592c4(s32 param_1)
{
    u32 c0lt = 0;
    c0lt = param_1 < 2;
    if ((u32)param_1 != 2u) {
        if (c0lt) {
            if (param_1 >= 1) {
                return (f64)rdf32(0x80574970u);
            }
            return (f64)rdf32(0x80574960u);
        }
        if (param_1 >= 4) {
            return (f64)rdf32(0x80574960u);
        }
        return (f64)rdf32(0x80574968u);
    }
    return (f64)rdf32(0x8057496cu);
}
