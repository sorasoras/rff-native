#include "tc_rt.h"

void fn_802ca620(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    (void)tc_call(0x802c2208u, &a);
    r31 = 0u;
    do {
        a.r[0] = rd32(r30 + 0x2acu);
        (void)tc_call(0x802c0d4cu, &a);
        r31 = r31 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r31 < 4);
    return;
}
