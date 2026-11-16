#include "tc_rt.h"

void fn_80231480(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x802723e4u, &a);
    if (r3 == 0u) {
        wr32(0x80571550u, 0u);
        wr32(0x80571548u, 0u);
        wr32(0x80570a98u, 0u);
        wr32(0x8057154cu, 0u);
        wr32(0x80571558u, 0u);
        wr32(0x80571554u, 0u);
        wr32(0x8057155cu, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x80230fd0u, &a);
    }
    return;
}
