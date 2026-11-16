#include "tc_rt.h"

void fn_8014596c(u32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    (void)param_1;
    f1 = (f64)rdf32((u32)param_2 + 0x80u);
    if (f1 > (f64)rdf32(0x80574550u)) {
        if (rd32(0x80571100u) == 1u) {
            f1 = (f64)rdf32((u32)param_2 + 0x84u);
            f3 = (f64)rdf32((u32)param_2 + 0x78u);
            f2 = (f64)rdf32((u32)param_2 + 0x88u);
            wrf32d((u32)param_2 + 0x14u, (f64)rdf32((u32)param_2 + 0x8cu));
            wrf32d((u32)param_2 + 0x10u, f1);
            wrf32d((u32)param_2 + 4u, f2);
            wrf32d((u32)param_2 + 8u, f3);
            return;
        }
        f0 = (f64)rdf32((u32)param_2 + 0x84u);
        f3 = (f64)rdf32((u32)param_2 + 0x78u);
        f2 = (f64)rdf32((u32)param_2 + 0x74u);
        wrf32d((u32)param_2 + 0x14u, f1);
        wrf32d((u32)param_2 + 0x10u, f0);
        wrf32d((u32)param_2 + 4u, f2);
        wrf32d((u32)param_2 + 8u, f3);
        return;
    }
    return;
}
