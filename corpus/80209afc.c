#include "tc_rt.h"

void fn_80209afc(void)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32(0x805713f0u);
    wr32(0x805709e0u, 3u);
    wr32(0x805709f4u, 5u);
    if (r0 != 0u) {
        (void)tc_call(0x80052dc0u, &a);
        wr32(0x805713f0u, 0u);
    }
    return;
}
