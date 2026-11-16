#include "tc_rt.h"

s32 fn_8009fa14(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7)
{
    u32 c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r8 = 0, r9 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r8 = (u32)param_6;
    r9 = (u32)param_7;
    wr32(0x817fdfd0u, 0x817fe000u);
    c0lt = param_6 < 2;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = 1u;
    if ((u32)param_6 == 2u) {
        a.r[0] = param_5;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = (u32)param_6;
        a.r[6] = (u32)param_7;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(param_4), &a);
        f1 = tc_lastf();
        a.r[0] = 0x817fdfd8u;
        a.r[1] = 0x817fdfdcu;
        a.r[2] = r3 & 0xffffu;
        a.r[3] = (u32)(s8)param_7;
        a.r[4] = rd32(param_3 + 0x10u);
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(param_3), &a);
        if ((u32)(s8)r3 == 0u) {
            r31 = 0u;
        } else {
            r0 = (u32)(s8)rd8(param_2);
            c0lt = (s32)r0 < 0;
            c0gt = (s32)r0 > 0;
            if (r0 != 0u) {
                if (!c0gt) {
                    if (c0lt && (u32)(s8)rd8(0x817fdfd8u) == 0u) {
                        r31 = 0u;
                    }
                } else if ((u32)(s8)rd8(0x817fdfd8u) != 0u) {
                    r31 = 0u;
                }
            } else if ((u32)(s8)rd8(0x817fdfd8u) == 0u) {
                wr8(param_2, 1u);
            } else {
                wr8(param_2, 0xffu);
            }
            if (r31 != 0u) {
                wr32(param_1, rd32(0x817fdfdcu));
            }
        }
    } else if (!c0lt) {
        if (param_6 < 4) {
            r28 = (u32)rd8(param_5);
            r4 = (r28 >> 7u) & 1u;
            r0 = ((r28 >> 5u) & 3u) + 1u;
            wr8(0x817fdfd8u, (u8)r4);
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                a.r[0] = param_5 + 1u;
                a.r[1] = r4;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.r[4] = param_5;
                a.r[5] = (u32)param_6;
                a.r[6] = (u32)param_7;
                a.f[0] = 0.0;
                r3 = tc_call(rd32(param_4 + 4u), &a);
                f1 = tc_lastf();
                r8 = 0u;
                r9 = 0u;
            } else if (!c0lt) {
                if ((s32)r0 >= 5) {
                    r3 = (u32)rd8(param_5 + 1u);
                } else {
                    a.r[0] = param_5 + 1u;
                    a.r[1] = r4;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.r[4] = param_5;
                    a.r[5] = (u32)param_6;
                    a.r[6] = (u32)param_7;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(param_4 + 8u), &a);
                    f1 = tc_lastf();
                    r8 = 0u;
                    r9 = 0u;
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    r3 = (u32)rd8(param_5 + 1u);
                } else if (!c0lt) {
                    a.r[0] = param_5 + 1u;
                    a.r[1] = r4;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.r[4] = param_5;
                    a.r[5] = (u32)param_6;
                    a.r[6] = (u32)param_7;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(param_4), &a);
                    f1 = tc_lastf();
                    r8 = 0u;
                    r9 = 0u;
                    r3 = r3 & 0xffffu;
                } else {
                    r3 = (u32)rd8(param_5 + 1u);
                }
            }
            a.r[0] = 0x817fdfdcu;
            a.r[1] = (u32)(s8)rd8(0x817fdfd8u);
            a.r[2] = r3;
            a.r[3] = (r28 & 0x1fu) + 1u;
            a.r[4] = rd32(param_3 + 0x10u);
            a.r[5] = r8;
            a.r[6] = r9;
            a.f[0] = f1;
            r3 = tc_call(rd32(param_3 + 8u), &a);
            if ((u32)(s8)r3 == 0u) {
                r31 = 0u;
            } else {
                r0 = (u32)(s8)rd8(param_2);
                c0lt = (s32)r0 < 0;
                c0gt = (s32)r0 > 0;
                if (r0 != 0u) {
                    if (!c0gt) {
                        if (c0lt && (u32)(s8)rd8(0x817fdfd8u) == 0u) {
                            r31 = 0u;
                        }
                    } else if ((u32)(s8)rd8(0x817fdfd8u) != 0u) {
                        r31 = 0u;
                    }
                } else if ((u32)(s8)rd8(0x817fdfd8u) == 0u) {
                    wr8(param_2, 1u);
                } else {
                    wr8(param_2, 0xffu);
                }
                if (r31 != 0u) {
                    wr32(param_1, rd32(0x817fdfdcu));
                }
            }
        }
    } else if (param_6 >= 0) {
        a.r[0] = param_5;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = (u32)param_6;
        a.r[6] = (u32)param_7;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(param_4 + 8u), &a);
        wr32(param_1, r3);
    }
    return (s32)r31;
}
