#include "tc_rt.h"

void fn_8020b328(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x804df158u;
    r30 = 0u;
    wr32(0x80571400u, 0u);
    wr32(0x80571404u, 0x804df158u);
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020af34u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x40u;
    } while (r30 < 0xau);
    return;
}
