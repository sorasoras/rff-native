#include "tc_rt.h"

void fn_802a9e30(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)rd16((u32)param_1 + 0x28u);
    a.r[1] = 8u;
    a.r[2] = 3u;
    a.r[3] = param_3;
    r3 = tc_call(0x802a9ad4u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        if ((u32)rd8(0x80540a20u) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80001u;
        a.r[1] = 0x80396b04u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        r6 = (u32)((s32)param_2 >> 8);
        wr8(r3 + 0x14u, 0u);
        wr8(r3 + 0x15u, 0u);
        wr8(r3 + 0x16u, (u8)param_2);
        wr8(r3 + 0x17u, (u8)r6);
        wr8(r3 + 0x18u, (u8)param_4);
        wr8(r3 + 0x19u, (u8)((param_4 >> 8u) & 0xffu));
        wr8(r3 + 0x1au, 0u);
        wr8(r3 + 0x1bu, 0u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = r3;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a7e04u, &a);
    }
    return;
}
