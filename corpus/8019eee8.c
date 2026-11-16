#include "tc_rt.h"

void fn_8019eee8(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5, s32 param_6, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
        r0 = rd32(param_4 + 4u);
        wr32(0x817fdfd8u, rd32(param_4));
        wr32(0x817fdfdcu, r0);
        wr32(0x817fdfe0u, rd32(param_4 + 8u));
        a.f[0] = param_f1;
        a.r[0] = (u32)param_3;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        r3 = tc_call(0x800d7758u, &a);
        r30 = r3;
    } else {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_3;
        a.r[1] = param_4;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        r3 = tc_call(0x800d782cu, &a);
        r30 = r3;
    }
    if (r3 != 0u) {
        r31 = rd32(r3 + 0x24u);
        a.r[1] = param_5;
        r3 = tc_call(0x8010b43cu, &a);
        wr32(r30 + 0x20u, r3);
        wr32(r30 + 0x24u, r31);
        if ((u32)param_6 == 0u && param_2 >= 0) {
            if (param_2 >= 32) {
                return;
            }
            wr32((u32)param_1 + ((u32)param_2 * 0x14u) + 0xcu, r30);
        }
    }
    return;
}
