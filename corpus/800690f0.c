#include "tc_rt.h"

void fn_800690f0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r4 = (u32)param_1 + ((u32)param_2 * 0xacu);
    wr32(0x817fdff8u, 0u);
    r0 = (u32)rd8(r4 + 0x314u);
    r5 = (u32)rd8(r4 + 0x315u);
    r4 = rd32(r4 + 0x310u);
    wr16(0x817fdfe8u, (u16)r4);
    wr8(0x817fdfeau, (u8)r5);
    wr8(0x817fdfebu, (u8)r0);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x800817c0u, &a);
    r3 = (u32)param_1 + ((u32)param_2 * 0xacu) + 0x29cu;
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb66fa0u;
    wr16(r3 + 0x106u, 0x2e8u);
    wr8(r3 + 0x109u, 1u);
    wr8(r3 + 0x108u, 1u);
    return;
}
