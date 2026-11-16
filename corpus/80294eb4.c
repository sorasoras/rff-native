#include "tc_rt.h"

void fn_80294eb4(u32 param_1, u32 param_2, u32 param_3, s32 param_4, u32 param_5, s32 param_6)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0x8053f888u;
    r31 = 0u;
    for (;;) {
        if (((u32)rd8(r30 + 0x76u) & 0x80u) != 0u) {
            a.r[0] = r30 + 0x1cu;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x88u;
        if ((s32)r31 >= 16) {
            r30 = 0u;
            break;
        }
    }
    if (r30 != 0u) {
        r3 = rd32(0x8053f2ccu);
        wr32(r30 + 0xcu, r3);
        wr32(0x8053f2ccu, r3 + 1u);
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x80295188u, &a);
        r30 = r3;
        if (r3 == 0u) {
            return;
        }
    }
    if (param_2 != 0u) {
        a.r[0] = r30 + 0x22u;
        a.r[1] = param_2;
        a.r[2] = 3u;
        (void)tc_call(0x80004338u, &a);
    }
    a.r[0] = r30 + 0x35u;
    a.r[1] = 0u;
    a.r[2] = 0x41u;
    (void)tc_call(0x8000443cu, &a);
    if (param_3 != 0u && (u32)rd8(param_3) != 0u) {
        wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) | 8u));
        a.r[0] = r30 + 0x35u;
        a.r[1] = param_3;
        a.r[2] = 0x40u;
        (void)tc_call(0x8025bdf4u, &a);
    }
    if ((u32)param_4 == 0u) {
        a.r[0] = r30 + 0x77u;
        a.r[1] = 0u;
        a.r[2] = 8u;
        (void)tc_call(0x8000443cu, &a);
    } else {
        a.r[0] = r30 + 0x77u;
        a.r[1] = (u32)param_4;
        a.r[2] = 8u;
        (void)tc_call(0x80004338u, &a);
    }
    wr32(r30 + 0x10u, rd32(param_5));
    wr32(r30 + 0x14u, rd32(param_5 + 4u));
    if ((u32)param_6 != 0u) {
        wr8(r30 + 0x76u, (u8)((u32)rd8(r30 + 0x76u) | 0x10u));
        a.r[0] = r30 + 0x25u;
        a.r[1] = (u32)param_6;
        a.r[2] = 0x10u;
        (void)tc_call(0x80004338u, &a);
    }
    return;
}
