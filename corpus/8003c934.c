#include "tc_rt.h"

void fn_8003c934(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x803be2acu);
    if ((r3 & 2u) != 0u && r3 != 0u) {
        (void)tc_call(0x802c2774u, &a);
        (void)tc_call(0x8003bf74u, &a);
        (void)tc_call(0x802c26c4u, &a);
        (void)tc_call(0x8003abc0u, &a);
    }
    return;
}
