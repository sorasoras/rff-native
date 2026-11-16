#include "tc_rt.h"

void fn_80294654(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = rd32(0x8053df70u);
    a.r[0] = 0x8053df58u;
    f1 = tc_callf(0x8028d290u, &a);
    r4 = tc_lastr4();
    wr32(0x8053df70u, 0u);
    if (r30 != 0u) {
        wr8(0x817fdfe2u, (u8)param_1);
        wr16(0x817fdfe0u, (u16)param_2);
        if (param_3 != 0u) {
            wr8(0x817fdfc8u, rd8(param_3));
            wr8(0x817fdfc9u, rd8(param_3 + 1u));
            wr32(0x817fdfccu, rd32(param_3 + 4u));
            wr32(0x817fdfd4u, rd32(param_3 + 0xcu));
            wr32(0x817fdfd8u, rd32(param_3 + 0x10u));
            wr32(0x817fdfdcu, rd32(param_3 + 0x14u));
        }
        if ((u32)rd8(0x80540118u) >= 5u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xd0004u;
            a.r[1] = 0x803938b4u;
            a.r[2] = rd32(param_3 + 0x14u);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc6cu, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r30, &a);
    }
    return;
}
