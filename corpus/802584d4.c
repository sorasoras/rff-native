#include "tc_rt.h"

void fn_802584d4(s32 param_1, s32 param_2, f64 param_f1)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)(s16)rd16((u32)param_1 + 2u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    (void)tc_call(0x80258370u, &a);
    if ((u32)rd8((u32)param_2 + 5u) <= 9u) {
        if ((s32)r31 > 36) {
            r31 = 0x24u;
        }
        if ((s32)r31 > 0 && (s32)r31 < (s32)rd8((u32)param_2 + 4u)) {
            r4 = (u32)param_2 + 5u;
            r0 = (u32)rd8(r4 + r31);
            r3 = r4 + r31;
            c0lt = r0 < 5u;
            do {
                if (r0 <= 5u) {
                    if (!c0lt) {
                        r3 = r3 + 1u;
                        r4 = r4 + (u32)rd8((u32)param_2 + 4u);
                        ctr = r4 - r3;
                        if (r3 < r4) {
                            for (;;) {
                                if ((u32)rd8(r3) != 0u) {
                                    r4 = 1u;
                                    fl_ = 1u;
                                    break;
                                }
                                r3 = r3 + 1u;
                                ctr = ctr - 1u;
                                if (ctr == 0u) {
                                    fl_ = 2u;
                                    break;
                                }
                            }
                            if (fl_ == 2u) {
                                fl_ = 0u;
                            } else if (fl_ == 1u) {
                                fl_ = 0u;
                                break;
                            }
                        }
                        r4 = 0xffffffffu;
                        if (((u32)rd8(r31 + (u32)param_2 + 4u) & 1u) != 0u) {
                            r4 = 1u;
                        }
                    } else {
                        r4 = 0xffffffffu;
                    }
                } else {
                    r4 = 1u;
                }
            } while (0);
            wr8((u32)param_2 + 4u, (u8)r31);
            if ((s32)r4 >= 0) {
                r4 = (u32)param_2 + 5u;
                r5 = r4 + r31 - 1u;
                for (;;) {
                    r3 = (u32)rd8(r5);
                    if (r3 < 9u) {
                        wr8(r5, (u8)(r3 + 1u));
                        break;
                    }
                    if (r5 == r4) {
                        wr8(r5, 1u);
                        wr16((u32)param_2 + 2u, (u16)((u32)(s16)rd16((u32)param_2 + 2u) + 1u));
                        break;
                    }
                    wr8(r5, 0u);
                    r5 = r5 - 1u;
                }
            }
        }
        for (;;) {
            r3 = (u32)rd8((u32)param_2 + 4u);
            if ((s32)r3 >= (s32)r31) break;
            r4 = (u32)rd8((u32)param_2 + 4u);
            wr8((u32)param_2 + r4 + 5u, 0u);
            wr8((u32)param_2 + 4u, (u8)(r4 + 1u));
        }
        r3 = r3 - 1u;
        r5 = 0u;
        wr16((u32)param_2 + 2u, (u16)((u32)(s16)rd16((u32)param_2 + 2u) - r3));
        while ((s32)r5 < (s32)rd8((u32)param_2 + 4u)) {
            r4 = (u32)param_2 + r5;
            r5 = r5 + 1u;
            wr8(r4 + 5u, (u8)((u32)rd8(r4 + 5u) + 0x30u));
        }
    }
    return;
}
