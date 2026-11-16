#include "tc_rt.h"

void fn_8004f224(void)
{
    TcArgs a = {0};
    if (rd32(0x803c6df4u) != 0u) {
        a.r[0] = 0x803c65d0u;
        (void)tc_call(0x80303b1cu, &a);
        return;
    }
    return;
}
