#include "tc_rt.h"

void fn_800431d0(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x803bf6e8u;
    r30 = 0u;
    do {
        a.r[0] = r31 + 0x844u;
        a.r[1] = 0u;
        a.r[2] = 0x10cu;
        (void)tc_call(0x8000443cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x954u;
    } while (r30 < 4u);
    (void)tc_call(0x802bb05cu, &a);
    return;
}
