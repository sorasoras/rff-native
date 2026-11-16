#include "tc_rt.h"

void fn_801d4810(s32 param_1)
{
    f64 f1 = 0.0;
    f1 = (f64)rdf32(0x80576024u);
    wrf32d(0x803746f4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd28u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd2cu))));
    wrf32d(0x80374718u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd28u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd30u))));
    wrf32d(0x8037473cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd28u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd34u))));
    wrf32d(0x80374760u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd28u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd38u))));
    wrf32d(0x80374784u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xd28u) * (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0xd3cu))));
    return;
}
