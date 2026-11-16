#include "tc_rt.h"

u32 fn_8006cee8(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    r0 = 0u;
    r5 = (u32)rd8(((rd32((u32)param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u);
    if (param_2 >= 635 && param_2 <= 639) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        r0 = 0u;
        if (param_2 >= 630 && param_2 <= 634) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r0 = 0u;
            if (param_2 >= 625 && param_2 <= 629) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                return 0u;
            }
        }
        c0lt = (s32)r5 < 3;
        if (r5 == 3u) {
            wr32((u32)param_1 + 0x9ecu, 3u);
            wr32((u32)param_1 + 0x9e4u, 1u);
            wr32((u32)param_1 + 0x9e8u, 3u);
            wr32((u32)param_1 + 0x9f0u, 0u);
            wr32((u32)param_1 + 0x9f8u, 0u);
        } else if (!c0lt) {
            if ((s32)r5 < 5) {
                wr32((u32)param_1 + 0x9ecu, 4u);
                wr32((u32)param_1 + 0x9e4u, 1u);
                wr32((u32)param_1 + 0x9e8u, 4u);
                wr32((u32)param_1 + 0x9f0u, 0u);
                wr32((u32)param_1 + 0x9f8u, 0u);
            }
        } else {
            c0lt = (s32)r5 < 1;
            if (r5 == 1u) {
                wr32((u32)param_1 + 0x9e4u, 0u);
                wr32((u32)param_1 + 0x9ecu, 1u);
                wr32((u32)param_1 + 0x9e8u, 1u);
                wr32((u32)param_1 + 0x9f0u, 0u);
                wr32((u32)param_1 + 0x9f8u, 0u);
            } else if (!c0lt) {
                wr32((u32)param_1 + 0x9ecu, 2u);
                wr32((u32)param_1 + 0x9e4u, 1u);
                wr32((u32)param_1 + 0x9e8u, 2u);
                wr32((u32)param_1 + 0x9f0u, 0u);
                wr32((u32)param_1 + 0x9f8u, 0u);
            }
        }
        return 1u;
    }
    c0lt = (s32)r5 < 3;
    if (r5 == 3u) {
        wr32((u32)param_1 + 0x9e4u, 0u);
        wr32((u32)param_1 + 0x9ecu, 3u);
        wr32((u32)param_1 + 0x9e8u, 1u);
        wr32((u32)param_1 + 0x9f0u, 0u);
        wr32((u32)param_1 + 0x9f8u, 0u);
    } else if (!c0lt) {
        if ((s32)r5 < 5) {
            wr32((u32)param_1 + 0x9e4u, 0u);
            wr32((u32)param_1 + 0x9ecu, 6u);
            wr32((u32)param_1 + 0x9e8u, 1u);
            wr32((u32)param_1 + 0x9f0u, 0u);
            wr32((u32)param_1 + 0x9f8u, 0u);
        }
    } else {
        c0lt = (s32)r5 < 1;
        if (r5 == 1u) {
            wr32((u32)param_1 + 0x9e4u, 0u);
            wr32((u32)param_1 + 0x9ecu, 1u);
            wr32((u32)param_1 + 0x9e8u, 1u);
            wr32((u32)param_1 + 0x9f0u, 0u);
            wr32((u32)param_1 + 0x9f8u, 0u);
        } else if (!c0lt) {
            wr32((u32)param_1 + 0x9e4u, 0u);
            wr32((u32)param_1 + 0x9ecu, 2u);
            wr32((u32)param_1 + 0x9e8u, 1u);
            wr32((u32)param_1 + 0x9f0u, 0u);
            wr32((u32)param_1 + 0x9f8u, 0u);
        }
    }
    return 1u;
}
