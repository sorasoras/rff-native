#include "tc_rt.h"

u32 fn_8026ebec(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x80571a6cu);
    a.r[1] = 0x140u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    if ((s32)rd32(0x80570c28u) < 0) {
        r3 = 0xffffff9bu;
    } else {
        wr32(r3 + 0x100u, param_1);
        wr32(r3 + 0x104u, param_2);
        wr32(r3 + 0x108u, 0u);
        a.r[0] = rd32(0x80570c28u);
        a.r[1] = 0xdu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0x8026da78u;
        a.r[7] = r3;
        r3 = tc_call(0x8026fd70u, &a);
    }
    return r3;
}
