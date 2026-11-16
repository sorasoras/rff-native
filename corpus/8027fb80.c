#include "tc_rt.h"

u32 fn_8027fb80(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r0 = (u32)rd8(param_2);
    if (r0 >= 0x20u && r0 <= 0x3fu) {
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0x8038fd88u;
        a.f[0] = f1;
        (void)tc_call(rd32(((((u32)rd8(param_2) - 0x20u) << 2u) & 0xfffffffcu) - 0x7fc70278u), &a);
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x8027ae24u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x8027aee8u, &a);
    } else {
        r30 = 0xffffffffu;
    }
    return r30;
}
