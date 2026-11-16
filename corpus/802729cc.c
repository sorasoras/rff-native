#include "tc_rt.h"

void fn_802729cc(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x802550d4u, &a);
    if (r3 == 0u) {
        return;
    }
    if ((u32)param_4 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_3 + 0x34u;
            a.r[1] = 0x80570c48u;
            (void)tc_call(0x8025bd34u, &a);
        } else {
            if ((u32)rd8(param_1) == 0x2fu) {
                r0 = 0u;
            } else {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = (u32)param_3 + 0x34u;
                a.r[1] = 0x8038f580u;
                a.r[2] = param_1;
                (void)tc_call(0x80271fdcu, &a);
            } else {
                a.r[0] = (u32)param_3 + 0x34u;
                a.r[1] = param_1;
                (void)tc_call(0x8025bd34u, &a);
                a.r[0] = (u32)param_3 + 0x34u;
                r3 = tc_call(0x802550d4u, &a);
                if (r3 != 0u) {
                    r4 = r3 + (u32)param_3;
                    if ((u32)rd8(r4 + 0x33u) == 0x2fu && (r3 - 1u) != 0u) {
                        wr8(r4 + 0x33u, 0u);
                    }
                }
            }
        }
        if ((u32)param_5 == 0u) {
            a.r[0] = (u32)param_3 + 0x34u;
            a.r[1] = 0x8038f5dcu;
            a.r[2] = 9u;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 == 0u && (u32)(s8)rd8((u32)param_3 + 0x3du) != 0u) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                return;
            }
        }
        wr32((u32)param_3 + 0x88u, param_2);
        a.r[0] = (u32)param_3 + 0x34u;
        a.r[1] = 0u;
        a.r[2] = (u32)param_3 + 0x30u;
        a.r[3] = 0x80272ce8u;
        a.r[4] = (u32)param_3;
        (void)tc_call(0x8026df34u, &a);
    } else {
        wr32(0x817fdfa0u, 0u);
        wr32(0x817fdfa4u, 0u);
        wr32(0x817fdfa8u, 0u);
        wr32(0x817fdfacu, 0u);
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
        a.r[0] = param_1;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 == 0u) {
            a.r[0] = 0x817fdfa0u;
            a.r[1] = 0x80570c48u;
            (void)tc_call(0x8025bd34u, &a);
        } else {
            if ((u32)rd8(param_1) == 0x2fu) {
                r0 = 0u;
            } else {
                r0 = 1u;
            }
            if (r0 != 0u) {
                a.r[0] = 0x817fdfa0u;
                a.r[1] = 0x8038f580u;
                a.r[2] = param_1;
                (void)tc_call(0x80271fdcu, &a);
            } else {
                a.r[0] = 0x817fdfa0u;
                a.r[1] = param_1;
                (void)tc_call(0x8025bd34u, &a);
                a.r[0] = 0x817fdfa0u;
                r3 = tc_call(0x802550d4u, &a);
                if (r3 != 0u) {
                    r4 = r3 - 0x7e802060u;
                    if ((u32)rd8(r4 - 1u) == 0x2fu && (r3 - 1u) != 0u) {
                        wr8(r4 - 1u, 0u);
                    }
                }
            }
        }
        if ((u32)param_5 == 0u) {
            a.r[0] = 0x817fdfa0u;
            a.r[1] = 0x8038f5dcu;
            a.r[2] = 9u;
            r3 = tc_call(0x8025bfccu, &a);
            if (r3 == 0u && (u32)(s8)rd8(0x817fdfa9u) != 0u) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                return;
            }
        }
        wr32(0x817fdf98u, 0u);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = 0u;
        a.r[2] = 0x817fdf98u;
        r3 = tc_call(0x8026dde0u, &a);
        if (r3 == 0u || r3 == 0xffffff9au) {
            wr8(param_2, 2u);
        } else {
            if (r3 == 0xffffff9bu) {
                wr8(param_2, 1u);
            }
        }
    }
    return;
}
