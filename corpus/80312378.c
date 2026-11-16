#include "tc_rt.h"

void fn_80312378(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0xcu, 1u);
    wr32(param_1 + 0xc0u, 0u);
    wr16(param_1 + 0xc8u, 0u);
    wr32(param_1 + 0xc4u, 0u);
    wr32(param_1 + 0xccu, 0u);
    wr16(param_1 + 0xd4u, 0u);
    wr32(param_1 + 0xd0u, 0u);
    wr16(param_1 + 0xd8u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = param_2;
    f1 = tc_callf(0x803120b4u, &a);
    wr32(param_1 + 0xbcu, param_2);
    r3 = rd32(rd32(param_2 + 0x20u));
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x38u), &a);
    f1 = tc_lastf();
    r31 = r3;
    if (r3 == 0u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = (u32)param_3;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3 + 0x1cu) + 0x10u), &a);
    if (r3 == 0u) {
        return;
    }
    r6 = rd32(param_1 + 0xbcu);
    wr32(r6 + 0x10u, rd32(r6 + 0x10u) + 1u);
    a.r[0] = param_1 + 0xc0u;
    a.r[1] = r31;
    f1 = tc_callf(0x802de7f4u, &a);
    wr16(param_1 + 0xd8u, (u16)((u32)rd16(param_1 + 0xd8u) + 1u));
    wr32(r31 + 0xcu, 1u);
    wr32(r31 + 0x28u, 0u);
    if ((rd32((u32)param_3 + 8u) & 0x20u) != 0u) {
        wr32(r31 + 0x28u, rd32(r31 + 0x28u) | 1u);
    }
    if ((rd32((u32)param_3 + 8u) & 0x40u) != 0u) {
        wr32(r31 + 0x28u, rd32(r31 + 0x28u) | 2u);
    }
    wr8(r31 + 0x88u, rd8((u32)param_3 + 0x22u));
    if ((rd32((u32)param_3 + 8u) & 0x400u) != 0u) {
        wr32(r31 + 0x28u, rd32(r31 + 0x28u) | 4u);
    }
    wr8(r31 + 0x89u, (u8)param_4);
    r4 = rd32(param_1 + 0xbcu);
    r3 = rd32(r4 + 0x9cu);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r31;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 8u), &a);
    return;
}
