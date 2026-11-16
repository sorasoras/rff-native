#include "tc_rt.h"

u32 fn_80307030(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 4u);
    r5 = r3 + 8u;
    r3 = (u32)rd8(r3 + 8u);
    a.r[0] = r3;
    a.r[1] = rd32(r5 + 4u);
    a.r[2] = r5;
    r3 = tc_call(0x8030e93cu, &a);
    r0 = (u32)rd8(r3);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r0 = 1u;
    } else if (!c0lt) {
        if ((s32)r0 >= 3) {
            r0 = 3u;
        } else {
            r0 = 3u;
        }
    } else if ((s32)r0 >= 0) {
        r0 = 2u;
    } else {
        r0 = 3u;
    }
    wr32(param_2, r0);
    r4 = (u32)rd8(r3 + 1u);
    wr8(param_2 + 4u, (u8)((((0u - r4) | r4) >> 0x1fu) & 1u));
    wr32(param_2 + 8u, (u32)rd8(r3 + 2u));
    wr32(param_2 + 0xcu, (((u32)rd8(r3 + 3u) << 0x10u) & 0xffff0000u) + (u32)rd16(r3 + 4u));
    wr16(param_2 + 0x10u, rd16(r3 + 6u));
    wr32(param_2 + 0x14u, rd32(r3 + 8u));
    wr32(param_2 + 0x18u, rd32(r3 + 0xcu));
    wr32(param_2 + 0x1cu, rd32(r3 + 0x10u));
    wr32(param_2 + 0x20u, rd32(r3 + 0x14u));
    wr32(param_2 + 0x24u, rd32(r3 + 0x18u));
    wr32(param_2 + 0x28u, rd32(r3 + 0x1cu));
    wr32(param_2 + 0x2cu, rd32(r3 + 0x20u));
    wr32(param_2 + 0x30u, rd32(r3 + 0x24u));
    wr32(param_2 + 0x34u, rd32(r3 + 0x28u));
    wr32(param_2 + 0x38u, rd32(r3 + 0x2cu));
    wr32(param_2 + 0x3cu, rd32(r3 + 0x30u));
    return 1u;
}
