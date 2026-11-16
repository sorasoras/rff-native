#include "tc_rt.h"

void fn_80052728(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x803cb934u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        (void)tc_call(0x800515dcu, &a);
    }
    return;
}
