#include "tc_rt.h"

s32 fn_8004c098(s32 param_1)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r4 = rd32(0x803c62ccu);
    ctr = 0x800u;
    for (;;) {
        if (rd32(r4) == 0u) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 8u) == 0u) {
            fl_ = 8u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 0x10u) == 0u) {
            fl_ = 7u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 0x18u) == 0u) {
            fl_ = 6u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 0x20u) == 0u) {
            fl_ = 5u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 0x28u) == 0u) {
            fl_ = 4u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 0x30u) == 0u) {
            fl_ = 3u;
            break;
        }
        r31 = r31 + 1u;
        if (rd32(r4 + 0x38u) == 0u) {
            fl_ = 2u;
            break;
        }
        r31 = r31 + 1u;
        r4 = r4 + 0x40u;
        ctr = ctr - 1u;
        if (ctr == 0u) {
            r31 = 0xffffffffu;
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 8u) {
        fl_ = 0u;
    } else if (fl_ == 7u) {
        fl_ = 0u;
    } else if (fl_ == 6u) {
        fl_ = 0u;
    } else if (fl_ == 5u) {
        fl_ = 0u;
    } else if (fl_ == 4u) {
        fl_ = 0u;
    } else if (fl_ == 3u) {
        fl_ = 0u;
    } else if (fl_ == 2u) {
        fl_ = 0u;
    } else if (fl_ == 1u) {
        fl_ = 0u;
    }
    if ((r31 + 0x10000u) != 0xffffu) {
        r30 = rd32(0x803c62ccu) + ((r31 << 3u) & 0xfffffff8u);
    } else {
        r30 = 0u;
    }
    wr32(r30, 0u);
    r28 = (u32)param_1 * 0x48u;
    wr32(r30 + 4u, 0u);
    a.r[0] = rd32(0x803c62c8u);
    a.r[1] = r28;
    a.r[2] = 0x4e4f5320u;
    a.r[3] = 0x8034f940u;
    r3 = tc_call(0x8003afb4u, &a);
    r29 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = r28;
    (void)tc_call(0x8000443cu, &a);
    wr32(r30 + 4u, r29);
    wr32(r30, (u32)param_1);
    wr32(0x803c62e0u, rd32(0x803c62e0u) + 1u);
    return (s32)r31;
}
