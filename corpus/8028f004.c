#include "tc_rt.h"

void fn_8028f004(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fdee8u;
    a.r[1] = 0x8053d6ecu;
    f1 = tc_callf(0x8028d2a4u, &a);
    r3 = (u32)rd8(0x8053d6f3u);
    r0 = (u32)rd8(0x8053d6f4u);
    wr8(0x817fdfe6u, rd8(0x8053d6f2u));
    wr8(0x817fdfe7u, (u8)r3);
    wr8(0x817fdfe8u, (u8)r0);
    if (param_1 != 0u && (u32)rd16(param_1) == 0u) {
        r0 = (u32)rd16(param_1 + 2u);
        r4 = param_1 + 4u;
        r5 = 0x20u;
        if (r0 < 0x20u) {
            r5 = r0;
        }
        a.r[0] = 0x817fdeeeu;
        a.r[1] = r4;
        a.r[2] = r5;
        f1 = tc_callf(0x80004338u, &a);
        wr8(0x817fdf0eu, 0u);
    } else {
        wr8(0x817fdeeeu, 0u);
    }
    a.r[0] = 2u;
    a.r[1] = 0x817fdee8u;
    a.r[2] = 0x8053d5f4u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8053d644u), &a);
    return;
}
