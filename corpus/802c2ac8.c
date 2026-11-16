#include "tc_rt.h"

void fn_802c2ac8(u32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x7a0u;
    r3 = tc_call(0x802c2510u, &a);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = param_1;
            r3 = tc_call(0x802c2950u, &a);
        }
        wr32(0x80547490u, r3);
    }
    return;
}
