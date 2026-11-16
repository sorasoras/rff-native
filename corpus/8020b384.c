#include "tc_rt.h"

void fn_8020b384(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571400u);
    while (r3 != 0u) {
        r31 = rd32(r3 + 0x3cu);
        a.r[0] = r3;
        (void)tc_call(0x8020acccu, &a);
        r3 = r31;
    }
    return;
}
