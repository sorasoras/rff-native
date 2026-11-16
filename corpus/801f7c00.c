#include "tc_rt.h"

void fn_801f7c00(void)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805709d4u);
    (void)tc_call(0x800a64a0u, &a);
    return;
}
