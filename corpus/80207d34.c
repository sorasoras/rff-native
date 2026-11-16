#include "tc_rt.h"

u32 fn_80207d34(s32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    (void)param_3;
    r6 = (u32)param_4;
    r0 = 0u;
    wr16(0x817fdff8u, 0u);
    if (param_1 < 37 || param_1 > 84) {
        if (param_1 < 115 || param_1 > 133) {
            if (param_1 < 134 || param_1 > 336) {
                if (param_1 >= 337 && param_1 <= 352) {
                    r0 = (u32)param_1 - 0x43u;
                }
            } else {
                r0 = (u32)param_1 - 0x43u;
            }
        } else {
            r0 = (u32)param_1 - 0x43u;
        }
    } else {
        r0 = (u32)param_1 - 0x25u;
    }
    r0 = (r0 << 4u) & 0xfffffff0u;
    r0 = (u32)rd8(r0 - 0x7fb5fba1u);
    wr8(0x817fdff8u, (u8)r0);
    if (param_1 < 37 || param_1 > 84) {
        if (param_1 < 115 || param_1 > 133) {
            if (param_1 < 134 || param_1 > 336) {
                if (param_1 >= 337 && param_1 <= 352) {
                    r6 = (u32)param_1 - 0x43u;
                }
            } else {
                r6 = (u32)param_1 - 0x43u;
            }
        } else {
            r6 = (u32)param_1 - 0x43u;
        }
    } else {
        r6 = (u32)param_1 - 0x25u;
    }
    wr8(0x817fdff9u, rd8(((r6 << 4u) & 0xfffffff0u) - 0x7fb5fb9fu));
    r0 = (u32)(s8)param_2;
    r3 = (u32)(s8)rd8(0x817fdff8u);
    if ((s32)r3 < 0 || (r3 != r0 && r3 != 0x31u)) {
        r3 = (u32)(s8)rd8(0x817fdff9u);
        if ((s32)r3 < 0 || (r3 != r0 && r3 != 0x31u)) {
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    } else {
        r3 = 1u;
    }
    return r3;
}
