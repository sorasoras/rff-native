#include "tc_rt.h"

void fn_8004b434(void)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805721a4u);
    (void)tc_call(0x8004b3ecu, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004b42cu, &a);
    return;
}
