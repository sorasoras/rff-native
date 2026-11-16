#include "tc_rt.h"

void fn_802914a4(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((u32)param_2 != 0u) {
        r3 = (u32)rd16((u32)param_2 + 6u) & 0xffu;
    } else {
        r3 = (u32)rd8((u32)param_1 + 0x16u);
    }
    wr8(0x817fdff9u, (u8)r3);
    wr8(0x817fdff8u, 6u);
    a.r[0] = r3;
    r3 = tc_call(0x802a326cu, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) != 0u) {
        a.r[0] = 3u;
        a.r[1] = 0x817fdff8u;
        a.r[2] = 0x8053d728u;
        a.f[0] = f1;
        (void)tc_call(rd32(0x8053d94cu), &a);
    }
    return;
}
