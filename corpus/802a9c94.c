#include "tc_rt.h"

void fn_802a9c94(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r7 = rd32((u32)param_1 + 0x10u);
    r0 = (u32)rd8(r7 + 0x31u) + 1u;
    wr8(r7 + 0x31u, (u8)r0);
    wr8((u32)param_1 + 0x35u, (u8)r0);
    a.r[0] = (u32)rd16(rd32((u32)param_1 + 0x10u) + 0x28u);
    a.r[1] = 4u;
    a.r[2] = 2u;
    a.r[3] = r0 & 0xffu;
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
        wr8(r3 + 0x14u, (u8)rd16(rd32((u32)param_1 + 0x30u) + 2u));
        r6 = rd32((u32)param_1 + 0x30u);
        wr8(r3 + 0x15u, (u8)((s32)rd16(r6 + 2u) >> 8));
        wr8(r3 + 0x16u, (u8)rd16((u32)param_1 + 0x14u));
        wr8(r3 + 0x17u, (u8)((s32)rd16((u32)param_1 + 0x14u) >> 8));
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0x10u);
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
