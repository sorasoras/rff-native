#include "tc_rt.h"

void fn_8007aedc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xcu) == 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 8u;
        a.r[2] = 0xcu;
        a.r[3] = rd32((u32)param_1 + 0x14u);
        a.r[4] = rd32((u32)param_1 + 0x18u);
        r3 = tc_call(0x8007ad5cu, &a);
        r9 = r3 + 4u;
        r8 = r9 + 0x54u;
        wr32(r3 + 0x58u, rd32((u32)param_1 + 0xcu));
        r7 = r9 + 0x48u;
        r6 = r9 + 0x3cu;
        r5 = r9 + 0x30u;
        wr32((u32)param_1 + 0xcu, r8);
        r4 = r9 + 0x24u;
        r3 = r9 + 0x18u;
        r0 = r9 + 0xcu;
        wr32(r9 + 0x48u, r8);
        wr32((u32)param_1 + 0xcu, r7);
        wr32(r9 + 0x3cu, r7);
        wr32((u32)param_1 + 0xcu, r6);
        wr32(r9 + 0x30u, r6);
        wr32((u32)param_1 + 0xcu, r5);
        wr32(r9 + 0x24u, r5);
        wr32((u32)param_1 + 0xcu, r4);
        wr32(r9 + 0x18u, r4);
        wr32((u32)param_1 + 0xcu, r3);
        wr32(r9 + 0xcu, r3);
        wr32((u32)param_1 + 0xcu, r0);
        wr32(r9, r0);
        wr32((u32)param_1 + 0xcu, r9);
    }
    r3 = rd32((u32)param_1 + 0xcu);
    wr32((u32)param_1 + 0xcu, rd32(r3));
    wr32(r3 + 4u, param_2);
    wr32(r3, param_3);
    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
    wr32(r3 + 8u, 0u);
    return;
}
