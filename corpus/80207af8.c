#include "tc_rt.h"

u32 fn_80207af8(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    (void)param_4;
    (void)param_5;
    r3 = (u32)param_1;
    r8 = (u32)param_6;
    r9 = (u32)param_7;
    r6 = 0u;
    r0 = 0u;
    wr16(0x817fdffcu, 0u);
    wr16(0x817fdff8u, 0u);
    if (param_1 >= 37 && param_1 <= 84) {
        r6 = (u32)param_1 - 0x25u;
    } else {
        if (param_1 >= 115 && param_1 <= 133) {
            r6 = (u32)param_1 - 0x43u;
        } else {
            if (param_1 >= 134 && param_1 <= 336) {
                r6 = (u32)param_1 - 0x43u;
            } else {
                if (param_1 >= 337 && param_1 <= 352) {
                    r6 = (u32)param_1 - 0x43u;
                }
            }
        }
    }
    r6 = (r6 << 4u) & 0xfffffff0u;
    r6 = r6 - 0x7fb60e50u;
    r6 = (u32)rd8(r6 + 0x12afu);
    wr8(0x817fdffcu, (u8)r6);
    if (param_1 >= 37 && param_1 <= 84) {
        r8 = (u32)param_1 - 0x25u;
    } else {
        if (param_1 >= 115 && param_1 <= 133) {
            r8 = (u32)param_1 - 0x43u;
        } else {
            if (param_1 >= 134 && param_1 <= 336) {
                r8 = (u32)param_1 - 0x43u;
            } else {
                if (param_1 >= 337 && param_1 <= 352) {
                    r8 = (u32)param_1 - 0x43u;
                }
            }
        }
    }
    wr8(0x817fdff8u, rd8(((r8 << 4u) & 0xfffffff0u) - 0x7fb5fba0u));
    if (param_1 >= 37 && param_1 <= 84) {
        r9 = (u32)param_1 - 0x25u;
    } else {
        if (param_1 >= 115 && param_1 <= 133) {
            r9 = (u32)param_1 - 0x43u;
        } else {
            if (param_1 >= 134 && param_1 <= 336) {
                r9 = (u32)param_1 - 0x43u;
            } else {
                if (param_1 >= 337 && param_1 <= 352) {
                    r9 = (u32)param_1 - 0x43u;
                }
            }
        }
    }
    wr8(0x817fdffdu, rd8(((r9 << 4u) & 0xfffffff0u) - 0x7fb5fb9fu));
    if (param_1 >= 37 && param_1 <= 84) {
        r3 = (u32)param_1 - 0x25u;
    } else {
        if (param_1 >= 115 && param_1 <= 133) {
            r3 = (u32)param_1 - 0x43u;
        } else {
            if (param_1 >= 134 && param_1 <= 336) {
                r3 = (u32)param_1 - 0x43u;
            } else {
                if (param_1 >= 337 && param_1 <= 352) {
                    r3 = (u32)param_1 - 0x43u;
                }
            }
        }
    }
    r3 = (r3 << 4u) & 0xfffffff0u;
    r3 = r3 - 0x7fb60e50u;
    r4 = (u32)(s8)param_2;
    r6 = (u32)(s8)rd8(0x817fdffcu);
    r7 = (u32)rd8(r3 + 0x12b2u);
    r3 = (u32)(s8)param_3;
    wr8(0x817fdff9u, (u8)r7);
    if ((s32)r6 >= 0 && (r6 == r4 || r6 == r3)) {
        r0 = (u32)rd8(0x817fdff8u);
    }
    r6 = (u32)(s8)rd8(0x817fdffdu);
    if ((s32)r6 >= 0 && (r6 == r4 || r6 == r3)) {
        r0 = r0 + (u32)rd8(0x817fdff9u);
    }
    return r0;
}
