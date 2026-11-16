#include "tc_rt.h"

void fn_802bb488(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 c0lt = 0, c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r11 = 0, r30 = 0;
    TcArgs a = {0};
    if (param_1 == 0u) {
        return;
    }
    if (param_2 == 0u || (u32)param_3 == 0u || (u32)param_4 == 0u) {
        return;
    }
    if ((u32)param_5 == 0u) {
        return;
    }
    r3 = tc_call(0x80225134u, &a);
    if ((r3 & 0x10000000u) == 0u) {
        return;
    }
    if (rd32(0x80571bc0u) == 0u) {
        return;
    }
    r3 = ((u32)param_5 + 0x1fu) & 0xffffffe0u;
    wr32(0x80571bc4u, r3);
    wr32(0x80571bc8u, r3 + 0x6bcu);
    a.r[0] = r3;
    a.r[1] = 0x6bcu;
    (void)tc_call(0x802277c4u, &a);
    r30 = 0u;
    wr32(rd32(0x80571bc4u) + 0x6a4u, 0x21u);
    wr16(rd32(0x80571bc4u) + 0x698u, 0u);
    wr32(rd32(0x80571bc4u) + 0x69cu, param_1);
    for (;;) {
        r4 = rd32(0x80571bc4u);
        r3 = rd32(r4 + 0x69cu);
        wr32(r4 + 0x69cu, r3 + 1u);
        if ((u32)rd8(r3) != 0xffu) break;
        for (;;) {
            r4 = rd32(0x80571bc4u);
            r3 = rd32(r4 + 0x69cu);
            if ((u32)rd8(r3) != 0xffu) break;
            wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 1u);
        }
        wr32(r4 + 0x69cu, r3 + 1u);
        r0 = (u32)rd8(r3);
        if (r0 > 0xd7u) {
            c1eq = r0 == 0xd8u;
            if (r0 < 0xd8u || r0 > 0xdfu) {
                c0lt = r0 < 0xe0u;
                if (!c0lt) {
                    if ((c0lt || r0 > 0xefu) && r0 != 0xfeu) {
                        return;
                    }
                    r4 = rd32(0x80571bc4u);
                    r5 = rd32(r4 + 0x69cu);
                    wr32(r4 + 0x69cu, r5 + (((u32)rd8(r5 + 1u) & 0xffff00ffu) | (((u32)rd8(r5) << 8u) & 0xff00u)));
                }
            } else if (r0 != 0xddu) {
                if (r0 != 0xdbu) {
                    if (r0 != 0xdau) {
                        if (!c1eq) {
                            return;
                        }
                    } else {
                        r3 = tc_call(0x802bb87cu, &a);
                        if ((r3 & 0xffu) != 0u) {
                            return;
                        }
                        r30 = 1u;
                    }
                } else {
                    r3 = tc_call(0x802bb990u, &a);
                    if ((r3 & 0xffu) != 0u) {
                        return;
                    }
                }
            } else {
                wr8(rd32(0x80571bc4u) + 0x6a9u, 1u);
                r4 = rd32(0x80571bc4u);
                wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 2u);
                r5 = rd32(0x80571bc4u);
                r4 = rd32(r5 + 0x69cu);
                wr16(r5 + 0x6aau, (u16)(((u32)rd8(r4 + 1u) & 0xffff00ffu) | (((u32)rd8(r4) << 8u) & 0xff00u)));
                r4 = rd32(0x80571bc4u);
                wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 2u);
                r3 = rd32(0x80571bc4u);
                wr16(r3 + 0x6acu, rd16(r3 + 0x6aau));
            }
        } else if (r0 != 0xc4u) {
            if (r0 != 0xc0u) {
                return;
            }
            r3 = tc_call(0x802bb748u, &a);
            if ((r3 & 0xffu) != 0u) {
                return;
            }
        } else {
            r3 = tc_call(0x802bbd28u, &a);
            if ((r3 & 0xffu) != 0u) {
                return;
            }
        }
        if (r30 != 0u) {
            r11 = (rd32(0x80571bc8u) + 0x1fu) & 0xffffffe0u;
            wr32(0x80547180u, r11);
            wr32(0x80547184u, r11 + 0x80u);
            wr32(0x80547188u, r11 + 0x100u);
            wr32(0x8054718cu, r11 + 0x180u);
            wr32(0x80547190u, r11 + 0x200u);
            wr32(0x80547194u, r11 + 0x280u);
            a.r[0] = param_2;
            a.r[1] = (u32)param_3;
            a.r[2] = (u32)param_4;
            (void)tc_call(0x802bc334u, &a);
            return;
        }
    }
    return;
}
