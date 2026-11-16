#include "tc_rt.h"

s32 fn_8003b20c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = (u32)param_2;
    r6 = rd32((u32)param_2 + 0xcu);
    if (r6 != 0u) {
        c0eq = rd32(r6 + 0x1cu) == 0u;
        if (c0eq) {
            if (c0eq) {
                r7 = rd32(r6 + 0x14u);
                if (r7 != 0u) {
                    wr32(r7 + 0x18u, rd32(r6 + 0x18u));
                } else {
                    wr32((u32)param_1 + 0x10u, rd32(r6 + 0x18u));
                }
                r7 = rd32(r6 + 0x18u);
                if (r7 != 0u) {
                    wr32(r7 + 0x14u, rd32(r6 + 0x14u));
                }
                wr32(r6 + 0x14u, 0u);
                wr32(r6 + 0x18u, 0u);
                wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) - 1u);
            }
            wr32(rd32((u32)param_2 + 0xcu) + 0x10u, rd32((u32)param_2 + 0x10u));
            r6 = rd32((u32)param_2 + 0x10u);
            if (r6 != 0u) {
                wr32(r6 + 0xcu, rd32((u32)param_2 + 0xcu));
            }
            r7 = rd32((u32)param_2 + 0xcu);
            wr32(r7 + 8u, rd32(r7 + 8u) + rd32((u32)param_2 + 8u));
            r4 = rd32((u32)param_2 + 0xcu);
        }
    }
    r6 = rd32(r4 + 0x10u);
    if (r6 != 0u) {
        c0eq = rd32(r6 + 0x1cu) == 0u;
        if (c0eq) {
            if (c0eq) {
                r7 = rd32(r6 + 0x14u);
                if (r7 != 0u) {
                    wr32(r7 + 0x18u, rd32(r6 + 0x18u));
                } else {
                    wr32((u32)param_1 + 0x10u, rd32(r6 + 0x18u));
                }
                r7 = rd32(r6 + 0x18u);
                if (r7 != 0u) {
                    wr32(r7 + 0x14u, rd32(r6 + 0x14u));
                }
                wr32(r6 + 0x14u, 0u);
                wr32(r6 + 0x18u, 0u);
                wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0x14u) - 1u);
            }
            r7 = rd32(r4 + 0x10u);
            wr32(rd32(r7 + 0xcu) + 0x10u, rd32(r7 + 0x10u));
            r4 = rd32(r7 + 0x10u);
            if (r4 != 0u) {
                wr32(r4 + 0xcu, rd32(r7 + 0xcu));
            }
            r6 = rd32(r7 + 0xcu);
            wr32(r6 + 8u, rd32(r6 + 8u) + rd32(r7 + 8u));
            r4 = rd32(r7 + 0xcu);
        }
    }
    if (rd32(r4 + 0x10u) == 0u) {
        wr32((u32)param_1 + 0xcu, r4);
    }
    if ((u32)param_3 != 0u) {
        if (rd32((u32)param_1 + 0x10u) != 0u) {
            wr32(r4 + 0x14u, 0u);
            wr32(r4 + 0x18u, rd32((u32)param_1 + 0x10u));
            wr32(rd32((u32)param_1 + 0x10u) + 0x14u, r4);
        }
        r5 = rd32((u32)param_1 + 0x14u);
        wr32((u32)param_1 + 0x10u, r4);
        wr32((u32)param_1 + 0x14u, r5 + 1u);
    }
    return (s32)r4;
}
