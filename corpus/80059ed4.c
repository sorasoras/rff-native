#include "tc_rt.h"

void fn_80059ed4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80059f14u, &a);
    if (r3 == 0u) {
        (void)tc_call(0x800590f4u, &a);
    } else {
        r3 = tc_call(0x8005947cu, &a);
        if (r3 == 0u) {
            (void)tc_call(0x800593d0u, &a);
        }
    }
    return;
}
