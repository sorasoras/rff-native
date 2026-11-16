#include "tc_rt.h"

u32 fn_8026eb68(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(0x80571a6cu);
    a.r[1] = 0x140u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    if (r3 == 0u) {
        r3 = 0xffffff8au;
    } else {
        wr32(r3 + 0x100u, param_2);
        wr32(r3 + 0x104u, param_3);
        wr32(r3 + 0x108u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x8026da78u;
        a.r[2] = r3;
        r3 = tc_call(0x8026f718u, &a);
    }
    return r3;
}
