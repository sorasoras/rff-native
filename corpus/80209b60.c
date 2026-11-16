#include "tc_rt.h"

u32 fn_80209b60(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80052e18u, &a);
    wr32(0x805713f0u, r3);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(0x805709e0u, param_1);
        r3 = 1u;
        wr32(0x805709f4u, 5u);
        wr32(0x805709e4u, 0u);
    }
    return r3;
}
