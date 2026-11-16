#include "tc_rt.h"

void fn_8004165c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004180cu, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x80041148u, &a);
        if (r3 != 4u) {
            return;
        }
    }
    wr32(0x8034f808u, 6u);
    return;
}
