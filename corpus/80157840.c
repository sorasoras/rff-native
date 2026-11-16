#include "tc_rt.h"

void fn_80157840(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r31 = rd32((u32)param_2 + 4u);
    a.r[0] = rd32(r31 + 0x74u);
    f1 = tc_callf(0x80037834u, &a);
    r4 = rd32(r31 + 0x34u);
    if ((r4 + rd32(r31 + 0x38u)) >= rd32(r31 + 8u)) {
        r12 = rd32(r31 + 0x78u);
        if (r12 != 0u) {
            a.r[0] = rd32(r31 + 0x7cu);
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
        a.r[0] = (u32)param_2;
        a.r[1] = r31;
        (void)tc_call(0x80157ac0u, &a);
        a.r[0] = (u32)param_2;
        (void)tc_call(0x80157ad0u, &a);
    } else {
        wr32(r31 + 0xcu, rd32(r31 + 0x40u));
        wr32(r31 + 0x10u, rd32(r31 + 0x44u));
        wr32(r31 + 0x14u, rd32(r31 + 0x48u));
        r4 = rd32(r31 + 0x4cu) + 0x80000u;
        wr32(r31 + 0x1cu, rd32(r31 + 0x50u));
        wr32(r31 + 0x20u, rd32(r31 + 0x54u));
        wr32(r31 + 0x24u, rd32(r31 + 0x58u));
        wr32(r31 + 0x28u, rd32(r31 + 0x5cu));
        wr32(r31 + 0x2cu, rd32(r31 + 0x60u));
        wr32(r31 + 0x30u, rd32(r31 + 0x64u));
        r0 = rd32(r31 + 0x6cu);
        r3 = rd32(r31 + 0x68u) + 0x80000u;
        wr32(r31 + 0x38u, r0);
        r0 = r3 + r0;
        wr32(r31 + 0x3cu, rd32(r31 + 0x70u));
        wr32(r31 + 0x18u, r4);
        wr32(r31 + 0x34u, r3);
        r4 = rd32(r31 + 8u);
        if (r0 > r4) {
            wr32(r31 + 0x38u, r4 - r3);
        }
        wr32(r31 + 0x40u, rd32(r31 + 0xcu));
        wr32(r31 + 0x44u, rd32(r31 + 0x10u));
        wr32(r31 + 0x48u, rd32(r31 + 0x14u));
        wr32(r31 + 0x4cu, rd32(r31 + 0x18u));
        wr32(r31 + 0x50u, rd32(r31 + 0x1cu));
        wr32(r31 + 0x54u, rd32(r31 + 0x20u));
        wr32(r31 + 0x58u, rd32(r31 + 0x24u));
        wr32(r31 + 0x5cu, rd32(r31 + 0x28u));
        wr32(r31 + 0x60u, rd32(r31 + 0x2cu));
        wr32(r31 + 0x64u, rd32(r31 + 0x30u));
        wr32(r31 + 0x68u, rd32(r31 + 0x34u));
        wr32(r31 + 0x6cu, rd32(r31 + 0x38u));
        wr32(r31 + 0x70u, rd32(r31 + 0x3cu));
        a.r[0] = r31 + 0xcu;
        a.r[1] = 1u;
        a.r[2] = 0x46525341u;
        r3 = tc_call(0x80037648u, &a);
        wr32(r31 + 0x74u, r3);
        a.r[0] = r3;
        a.r[1] = 2u;
        (void)tc_call(0x8003780cu, &a);
    }
    return;
}
