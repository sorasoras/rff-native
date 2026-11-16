#include "tc_rt.h"

void fn_802ad13c(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_3;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr8(0x817fdfe8u, (u8)param_4);
    a.r[0] = param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x802b13d0u, &a);
    f1 = tc_lastf();
    wr32(((((u32)param_2 - 0x40u) << 2u) & 0xfffffffcu) - 0x7fabedbcu, r3);
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = (u32)rd8(0x817fdfe8u);
        a.r[2] = (u32)param_2;
        a.r[3] = 4u;
        a.r[4] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a59d4u, &a);
    } else {
        wr16(r3 + 0x68u, (u16)param_2);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0xau;
        a.r[2] = 0x817fdfe8u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802ad9f4u, &a);
    }
    return;
}
