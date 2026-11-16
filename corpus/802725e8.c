#include "tc_rt.h"

s32 fn_802725e8(u32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_2 + 0x34u;
            a.r[1] = 0x80570c48u;
            (void)tc_call(0x8025bd34u, &a);
        } else {
            if ((u32)rd8(param_1) == 0x2fu) {
                r0 = 0u;
            } else {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = (u32)param_2 + 0x34u;
                a.r[1] = 0x8038f580u;
                a.r[2] = param_1;
                (void)tc_call(0x80271fdcu, &a);
            } else {
                a.r[0] = (u32)param_2 + 0x34u;
                a.r[1] = param_1;
                (void)tc_call(0x8025bd34u, &a);
                a.r[0] = (u32)param_2 + 0x34u;
                r3 = tc_call(0x802550d4u, &a);
                if (r3 != 0u) {
                    r4 = r3 + (u32)param_2;
                    if ((u32)rd8(r4 + 0x33u) == 0x2fu && (r3 - 1u) != 0u) {
                        wr8(r4 + 0x33u, 0u);
                    }
                }
            }
        }
        if ((u32)param_4 == 0u) {
            a.r[0] = (u32)param_2 + 0x34u;
            a.r[1] = 0x8038f5d0u;
            a.r[2] = 8u;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 == 0u) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                r3 = 0xffffff9au;
                return (s32)r3;
            }
        }
        a.r[0] = (u32)param_2 + 0x34u;
        a.r[1] = 0u;
        a.r[2] = (u32)param_2 + 0x30u;
        a.r[3] = 0x802728c0u;
        a.r[4] = (u32)param_2;
        r3 = tc_call(0x8026df34u, &a);
    } else {
        wr32(0x817fdfa8u, 0u);
        wr32(0x817fdfb0u, 0u);
        wr32(0x817fdfb4u, 0u);
        wr32(0x817fdfb8u, 0u);
        wr32(0x817fdfbcu, 0u);
        wr32(0x817fdfc0u, 0u);
        wr32(0x817fdfc4u, 0u);
        wr32(0x817fdfc8u, 0u);
        wr32(0x817fdfccu, 0u);
        wr32(0x817fdfd0u, 0u);
        wr32(0x817fdfd4u, 0u);
        wr32(0x817fdfd8u, 0u);
        wr32(0x817fdfdcu, 0u);
        wr32(0x817fdfe0u, 0u);
        wr32(0x817fdfe4u, 0u);
        wr32(0x817fdfe8u, 0u);
        wr32(0x817fdfecu, 0u);
        a.r[0] = param_1;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 == 0u) {
            a.r[0] = 0x817fdfb0u;
            a.r[1] = 0x80570c48u;
            (void)tc_call(0x8025bd34u, &a);
        } else {
            if ((u32)rd8(param_1) == 0x2fu) {
                r0 = 0u;
            } else {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = 0x817fdfb0u;
                a.r[1] = 0x8038f580u;
                a.r[2] = param_1;
                (void)tc_call(0x80271fdcu, &a);
            } else {
                a.r[0] = 0x817fdfb0u;
                a.r[1] = param_1;
                (void)tc_call(0x8025bd34u, &a);
                a.r[0] = 0x817fdfb0u;
                r3 = tc_call(0x802550d4u, &a);
                if (r3 != 0u) {
                    r4 = r3 - 0x7e802050u;
                    if ((u32)rd8(r4 - 1u) == 0x2fu && (r3 - 1u) != 0u) {
                        wr8(r4 - 1u, 0u);
                    }
                }
            }
        }
        if ((u32)param_4 == 0u) {
            a.r[0] = 0x817fdfb0u;
            a.r[1] = 0x8038f5d0u;
            a.r[2] = 8u;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 == 0u) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                r3 = 0xffffff9au;
                return (s32)r3;
            }
        }
        a.r[0] = 0x817fdfb0u;
        a.r[1] = 0u;
        a.r[2] = 0x817fdfa8u;
        r3 = tc_call(0x8026dde0u, &a);
        r31 = r3;
        if (r3 == 0u) {
            r3 = tc_call(0x8022c2b0u, &a);
            r30 = r3;
            a.r[0] = 0x8038f580u;
            a.r[1] = 0x817fdfb0u;
            (void)tc_call(0x8025bd34u, &a);
            a.r[0] = r30;
            (void)tc_call(0x8022c2d8u, &a);
        }
        r3 = r31;
    }
    return (s32)r3;
}
