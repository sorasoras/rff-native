#include "tc_rt.h"

void fn_8003cce0(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    do {
        r3 = tc_call(0x80273734u, &a);
    } while (r3 != 0u && r3 != 2u);
    return;
}
