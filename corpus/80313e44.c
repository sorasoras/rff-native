#include "tc_rt.h"

void fn_80313e44(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    a.r[0] = param_1 + 0xc0u;
    a.r[1] = 0u;
    r3 = tc_call(0x802de9f0u, &a);
    r30 = r3;
    while (r30 != 0u) {
        a.r[0] = param_1 + 0xc0u;
        a.r[1] = r30;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if ((u32)param_4 != 0u || rd32(r30 + 0xcu) == 1u) {
            a.r[0] = r30;
            a.r[1] = param_3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(param_2, &a);
            r31 = r31 + 1u;
        }
        r30 = r29;
    }
    if ((u32)param_5 != 0u) {
        wr32(0x817fdfc8u, 0u);
        wr32(0x817fdfccu, param_2);
        wr32(0x817fdfd0u, param_3);
        wr8(0x817fdfd4u, (u8)param_4);
        a.r[0] = rd32(param_1 + 0xbcu);
        a.r[1] = 0x80313dfcu;
        a.r[2] = 0x817fdfc8u;
        a.r[3] = 1u;
        a.r[4] = param_1;
        (void)tc_call(0x80311290u, &a);
    }
    return;
}
