#include "tc_rt.h"

void fn_80157c7c(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80157a50u, &a);
    r31 = r3;
    a.r[0] = param_3;
    r3 = tc_call(0x80037178u, &a);
    wr32(r31 + 8u, r3);
    wr32(r31 + 0x78u, param_4);
    wr32(r31 + 0x7cu, param_5);
    wr32(r31 + 0xcu, param_3);
    wr32(r31 + 0x18u, param_2);
    wr32(r31 + 0x20u, 0x80157838u);
    wr32(r31 + 0x28u, (u32)param_1);
    wr32(r31 + 0x24u, 0x80157840u);
    wr32(r31 + 0x2cu, (u32)param_1);
    wr32(r31 + 0x34u, 0u);
    if ((s32)r3 <= 524288) {
        wr32(r31 + 0x38u, r3);
    } else {
        wr32(r31 + 0x38u, 0x80000u);
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
    if (rd32((u32)param_1 + 4u) == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80157ad0u, &a);
    }
    return;
}
