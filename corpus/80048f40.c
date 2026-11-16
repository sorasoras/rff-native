#include "tc_rt.h"

void fn_80048f40(void)
{
    TcArgs a = {0};
    if (rd32(0x80571068u) != 0u) {
        a.r[0] = 0x803c3b48u;
        (void)tc_call(0x8022f8a0u, &a);
        wr32(0x80571068u, 0u);
    }
    return;
}
