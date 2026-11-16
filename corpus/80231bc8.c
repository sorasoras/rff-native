#include "tc_rt.h"

u32 fn_80231bc8(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x804e0f80u, param_1);
    a.r[0] = rd32(0x80570aa0u);
    a.r[1] = 0x28u;
    a.r[2] = 0x804e0f80u;
    a.r[3] = 0x20u;
    a.r[4] = 0x804e0fa0u;
    a.r[5] = 0x20u;
    a.r[6] = 0x80231e10u;
    a.r[7] = param_2;
    r3 = tc_call(0x8026fd70u, &a);
    if ((s32)r3 < 0) {
        r3 = 0xffffffd6u;
    } else {
        r3 = 0u;
        wr32(0x8057156cu, 1u);
    }
    return r3;
}
