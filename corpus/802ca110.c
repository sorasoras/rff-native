#include "tc_rt.h"

void fn_802ca110(u32 param_r3)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r25 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    r25 = 0u;
    r26 = param_r3;
    for (;;) {
        r0 = rd32(param_r3 + 0xcu);
        if ((s32)r25 >= (s32)r0) break;
        if (rd32(r26 + 0x20u) != 0u) {
            r0 = rd32(param_r3 + 0x10u);
            r4 = 0x80348688u;
            r3 = 0u;
            ctr = r0;
            if ((s32)r0 <= 0) {
                r3 = 0xffffffffu;
            } else {
                while (r25 != rd32(r4) || rd32(r4 + 4u) != 2u) {
                    r4 = r4 + 8u;
                    r3 = r3 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        r3 = 0xffffffffu;
                        break;
                    }
                }
            }
            r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
            r27 = rd32(r3 + 0x2c0u);
            a.r[0] = r27;
            (void)tc_call(0x802bed24u, &a);
            wr32(r27 + 0x14u, 1u);
            wr32(r26 + 0x20u, 0u);
        }
        r26 = r26 + 4u;
        r25 = r25 + 1u;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r0 = rd32(param_r3 + r0 + 0x20u);
    if (r0 != 0u) {
        r27 = rd32(param_r3 + 0x448u);
        a.r[0] = r27;
        (void)tc_call(0x802bed24u, &a);
        wr32(r27 + 0x14u, 1u);
        wr32(param_r3 + (((rd32(param_r3 + 0xcu) + 1u) << 2u) & 0xfffffffcu) + 0x20u, 0u);
    }
    if (rd32(param_r3 + (((rd32(param_r3 + 0xcu) + 1u) << 2u) & 0xfffffffcu) + 0x20u) != 0u) {
        if (rd32(param_r3) != 1u) {
            r4 = 0x803486e8u;
            r3 = 0u;
            ctr = 0x25u;
            for (;;) {
                if (rd32(r4) == 5u && rd32(r4 + 4u) == 3u) {
                    fl_ = 3u;
                    break;
                }
                r3 = r3 + 1u;
                if (rd32(r4 + 8u) == 5u && rd32(r4 + 0xcu) == 3u) {
                    fl_ = 1u;
                    break;
                }
                r4 = r4 + 0x10u;
                r3 = r3 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    fl_ = 2u;
                    break;
                }
            }
            do {
                if (fl_ == 3u) {
                    fl_ = 0u;
                    fl_ = 4u;
                    break;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
                r3 = 0xffffffffu;
                fl_ = 5u;
                break;
            } while (0);
            if (fl_ == 5u) {
                fl_ = 0u;
            } else if (fl_ == 4u) {
                fl_ = 0u;
            }
            r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
            r27 = rd32(r3 + 0x2f0u);
            a.r[0] = r27;
            (void)tc_call(0x802bed24u, &a);
            wr32(r27 + 0x14u, 1u);
            wr32(param_r3 + ((rd32(param_r3 + 0xcu) << 2u) & 0xfffffffcu) + 0x20u, 0u);
        } else if (rd32(param_r3 + 0x1cu) == 0u) {
            r4 = 0x803486e8u;
            r3 = 0u;
            ctr = 0x25u;
            for (;;) {
                if (rd32(r4) == 5u && rd32(r4 + 4u) == 0x14u) {
                    fl_ = 8u;
                    break;
                }
                r3 = r3 + 1u;
                if (rd32(r4 + 8u) == 5u && rd32(r4 + 0xcu) == 0x14u) {
                    fl_ = 7u;
                    break;
                }
                r4 = r4 + 0x10u;
                r3 = r3 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    r3 = 0xffffffffu;
                    fl_ = 6u;
                    break;
                }
            }
            if (fl_ == 8u) {
                fl_ = 0u;
            } else if (fl_ == 7u) {
                fl_ = 0u;
            } else if (fl_ == 6u) {
                fl_ = 0u;
            }
            r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
            r27 = rd32(r3 + 0x2f0u);
            a.r[0] = r27;
            (void)tc_call(0x802bed24u, &a);
            wr32(r27 + 0x14u, 1u);
            wr32(param_r3 + ((rd32(param_r3 + 0xcu) << 2u) & 0xfffffffcu) + 0x20u, 0u);
        }
    }
    return;
}
