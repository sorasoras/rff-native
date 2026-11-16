#include "tc_rt.h"

s32 fn_800d7768(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    r8 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = rd32(param_2 + 4u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe0u, r8);
    wr32(0x817fdfe4u, r7);
    wr32(0x817fdfe8u, r0);
    a.f[0] = param_f1;
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe0u;
    r3 = tc_call(0x800d8144u, &a);
    r31 = r3;
    if (r3 != 0u) {
        r5 = rd32(param_4 + 4u);
        r0 = rd32(param_4 + 8u);
        wr32(0x817fdfd4u, rd32(param_4));
        wr32(0x817fdfd8u, r5);
        wr32(0x817fdfdcu, r0);
        a.r[0] = r3;
        a.r[1] = 0x817fdfd4u;
        (void)tc_call(0x801581ccu, &a);
        if (param_3 != 0x804b15c0u) {
            r0 = rd32(param_3 + 4u);
            wr32(0x817fdfc8u, rd32(param_3));
            wr32(0x817fdfccu, r0);
            wr32(0x817fdfd0u, rd32(param_3 + 8u));
            a.r[0] = r31;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x801582b4u, &a);
        }
    }
    return (s32)r31;
}
