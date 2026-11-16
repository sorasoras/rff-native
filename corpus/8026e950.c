#include "tc_rt.h"

void fn_8026e950(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x80571a6cu);
    a.r[1] = 0x140u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    if (r3 == 0u) {
        return;
    }
    wr32(r3 + 0x100u, param_4);
    wr32(r3 + 0x104u, param_5);
    wr32(r3 + 0x108u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0x8026da78u;
    a.r[4] = r3;
    (void)tc_call(0x8026fc90u, &a);
    return;
}
