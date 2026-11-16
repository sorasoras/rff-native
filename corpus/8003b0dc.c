#include "tc_rt.h"

u32 fn_8003b0dc(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe8u, ((u32)param_2 + 0x1fu) & 0xffffffe0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x8003ae58u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = rd32(0x817fdfe8u);
        r3 = tc_call(0x8003aec0u, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0x20u;
        a.r[3] = param_3;
        a.r[4] = param_4;
        r3 = tc_call(0x8003ac8cu, &a);
    }
    return r3;
}
