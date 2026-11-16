#include "tc_rt.h"

u32 fn_802992b8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r28 = ((u32)param_2 * 0x22u) - 0x7fac21dcu;
    a.r[0] = param_1;
    a.r[1] = r28;
    a.r[2] = param_3;
    a.r[3] = 0x817fdfd8u;
    r3 = tc_call(0x80299158u, &a);
    r4 = (u32)rd8(r28 + 0x20u);
    r0 = r3 & 0xffu;
    wr8(0x817fdfe0u, (u8)r3);
    if (r4 == r0) {
        if (r0 == 0u) {
            r3 = 0xdu;
            return r3;
        }
        r4 = (u32)rd16(r28 + 0x1eu);
        if ((u32)rd16(0x817fdfd8u) >= r4 && (u32)rd16(0x817fdfdau) <= r4) {
            r3 = 0xdu;
            return r3;
        }
        r31 = 1u;
    }
    wr8(r28 + 0x21u, (u8)r31);
    if ((r3 & 0xffu) != 0u && (u32)rd8(r28 + 0x20u) != 0u) {
        wr8(r28 + 0x21u, 1u);
    }
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    r31 = r3;
    if (r3 != 0u) {
        if ((u32)rd8(r28 + 0x21u) == 1u) {
            wr8(0x817fdfe0u, 0u);
        }
        r0 = (u32)rd8(0x817fdfe0u);
        c0lt = (s32)r0 < 2;
        wr8(0x8053debcu, (u8)param_2);
        wr8(0x8053debdu, (u8)param_1);
        if (r0 == 2u) {
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = (u32)rd16(((u32)param_2 * 0x11cu) - 0x7fac2674u);
            a.r[2] = (u32)rd16(0x817fdfd8u);
            a.r[3] = (u32)rd16(0x817fdfdau);
            a.r[4] = (u32)rd16(0x817fdfdcu);
            a.r[5] = (u32)rd16(0x817fdfdeu);
            (void)tc_call(0x802a0be4u, &a);
        } else if (!c0lt) {
            if ((s32)r0 >= 4) {
                wr8(0x8053debcu, 4u);
            } else {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = (u32)rd16(((u32)param_2 * 0x11cu) - 0x7fac2674u);
                a.r[2] = (u32)rd16(0x817fdfd8u);
                a.r[3] = (u32)rd16(0x817fdfdau);
                (void)tc_call(0x802a0d34u, &a);
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r0 = (u32)rd8(r28 + 0x20u);
                c0lt = (s32)r0 < 3;
                if (r0 == 3u) {
                    r3 = r3;
                    a.r[0] = r3;
                    a.r[1] = (u32)rd16(((u32)param_2 * 0x11cu) - 0x7fac2674u);
                    (void)tc_call(0x802a0de8u, &a);
                } else if (!c0lt) {
                    wr8(0x8053debcu, 4u);
                } else if ((s32)r0 >= 2) {
                    r3 = r3;
                    a.r[0] = r3;
                    a.r[1] = (u32)rd16(((u32)param_2 * 0x11cu) - 0x7fac2674u);
                    (void)tc_call(0x802a0cb0u, &a);
                } else {
                    wr8(0x8053debcu, 4u);
                }
            } else if (!c0lt) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = (u32)rd16(((u32)param_2 * 0x11cu) - 0x7fac2674u);
                a.r[2] = (u32)rd16(0x817fdfd8u);
                a.r[3] = (u32)rd16(0x817fdfdau);
                (void)tc_call(0x802a0b30u, &a);
            } else {
                wr8(0x8053debcu, 4u);
            }
        }
        if ((u32)rd8(0x8053debcu) == 4u) {
            a.r[0] = r31;
            (void)tc_call(0x8028a35cu, &a);
        }
        r3 = 1u;
    } else {
        r3 = 3u;
    }
    return r3;
}
