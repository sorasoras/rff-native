#include "tc_rt.h"

s32 fn_80155608(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[1] = 0u;
    r3 = tc_call(0x80091a30u, &a);
    a.r[0] = 0x80471ed0u;
    a.r[1] = r3;
    a.r[2] = 0u;
    r3 = tc_call(0x80091a64u, &a);
    a.r[0] = 0x80471ed0u;
    a.r[1] = r3;
    a.r[2] = param_2;
    a.r[3] = param_3;
    r3 = tc_call(0x80091a88u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 != 0u && (u32)rd8(r3 + 1u) == 0u) {
        r3 = 0u;
    } else {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = 0x8033a618u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcc59e8u), &a);
        if (r3 != 0u) {
            r3 = r31;
        } else {
            r3 = 0u;
        }
    }
    return (s32)r3;
}
