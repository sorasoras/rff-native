#include "tc_rt.h"

void fn_80252830(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    u32 c0lt = 0, r6 = 0;
    r6 = param_4;
    c0lt = (s32)param_4 < 1;
    if (param_4 == 1u) {
        r6 = 4u;
    } else if (!c0lt) {
        if ((s32)param_4 < 3) {
            r6 = 5u;
        }
    } else if ((s32)param_4 >= 0) {
        r6 = 3u;
    }
    c0lt = param_6 < 2;
    wr32(param_1, ((((param_3 >> 5u) & 0x7fffu) | ((r6 << 0xfu) & 0x38000u)) & 0xffe3ffffu) | ((r6 << 0x12u) & 0x1c0000u));
    if ((u32)param_6 == 2u) {
        r6 = 5u;
    } else if (!c0lt) {
        if (param_6 < 4) {
            r6 = 0u;
        }
    } else {
        c0lt = param_6 < 0;
        if ((u32)param_6 == 0u) {
            r6 = 3u;
        } else if (!c0lt) {
            r6 = 4u;
        }
    }
    wr8(param_1 + 0xcu, (u8)param_2);
    wr8(param_1 + 0xdu, 1u);
    wr32(param_1 + 4u, ((((param_5 >> 5u) & 0x7fffu) | ((r6 << 0xfu) & 0x38000u)) & 0xffe3ffffu) | ((r6 << 0x12u) & 0x1c0000u));
    return;
}
