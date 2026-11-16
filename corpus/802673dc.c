#include "tc_rt.h"

u32 fn_802673dc(s32 param_1)
{
    u32 c0lt = 0, fl_ = 0, r3 = 0, r7 = 0, r8 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdea0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x80266c88u, &a);
    r31 = (u32)rd8((u32)param_1 + 0x18u);
    r29 = rd32((u32)param_1 + 0x20u);
    c0lt = (s32)r31 < 16;
    r28 = rd32((u32)param_1 + 0x24u);
    do {
        if (r31 != 0x10u) {
            do {
                if (!c0lt) {
                    if ((s32)r31 >= 18) break;
                } else {
                    c0lt = (s32)r31 < 1;
                    if (r31 != 1u) {
                        if (!c0lt) break;
                        if ((s32)r31 >= 0) {
                            fl_ = 1u;
                            break;
                        }
                        break;
                    }
                }
                r3 = tc_call(0x802691b4u, &a);
                if (r3 < r29 || r3 > r28) {
                    a.r[0] = 0x817fdf68u;
                    a.r[1] = 0u;
                    a.r[2] = 0x40u;
                    (void)tc_call(0x8000446cu, &a);
                    r8 = rd32(0x80502708u);
                    wr8(0x817fdf6cu, 0x80u);
                    r7 = r8 + 1u;
                    wr32(0x817fdf74u, r8);
                    wr32(0x80502708u, r7);
                    wr32(0x817fdf68u, 0x40u);
                    wr8(0x817fdf70u, 0x11u);
                    wr32(0x80502708u, r7 + 1u);
                    wr32(0x817fdf74u, r7);
                    (void)tc_call(0x8026af8cu, &a);
                    r3 = 0u;
                    return r3;
                }
                fl_ = 2u;
                break;
            } while (0);
            if (fl_ == 2u) {
                fl_ = 0u;
                break;
            }
            if (fl_ != 1u) {
                a.r[0] = 0x817fdf28u;
                a.r[1] = 0u;
                a.r[2] = 0x40u;
                (void)tc_call(0x8000446cu, &a);
                r8 = rd32(0x80502708u);
                wr8(0x817fdf2cu, 0x80u);
                r7 = r8 + 1u;
                wr32(0x817fdf34u, r8);
                wr32(0x80502708u, r7);
                wr32(0x817fdf28u, 0x40u);
                wr8(0x817fdf30u, 0x12u);
                wr32(0x80502708u, r7 + 1u);
                wr32(0x817fdf34u, r7);
                (void)tc_call(0x8026af8cu, &a);
                r3 = 0u;
                return r3;
            }
            fl_ = 0u;
        }
        r30 = (u32)rd8((u32)param_1 + 0x1cu);
        if (r30 < 1u) {
            a.r[0] = 0x817fdfa8u;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            (void)tc_call(0x8000446cu, &a);
            r8 = rd32(0x80502708u);
            wr8(0x817fdfacu, 0x80u);
            r7 = r8 + 1u;
            wr32(0x817fdfb4u, r8);
            wr32(0x80502708u, r7);
            wr32(0x817fdfa8u, 0x40u);
            wr8(0x817fdfb0u, 0x11u);
            wr32(0x80502708u, r7 + 1u);
            wr32(0x817fdfb4u, r7);
            (void)tc_call(0x8026af8cu, &a);
            r3 = 0u;
            return r3;
        }
    } while (0);
    r3 = tc_call(0x80268fa4u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x817fdea8u;
        a.r[1] = 0u;
        a.r[2] = 0x40u;
        (void)tc_call(0x8000446cu, &a);
        r8 = rd32(0x80502708u);
        wr8(0x817fdeacu, 0x80u);
        r7 = r8 + 1u;
        wr32(0x817fdeb4u, r8);
        wr32(0x80502708u, r7);
        wr32(0x817fdea8u, 0x40u);
        wr8(0x817fdeb0u, 0u);
        wr32(0x80502708u, r7 + 1u);
        wr32(0x817fdeb4u, r7);
        (void)tc_call(0x8026af8cu, &a);
        c0lt = (s32)r31 < 16;
        r3 = 0u;
        if (r31 == 0x10u) {
            a.r[0] = r30;
            a.r[1] = (ppc_cntlzw(0x10u - r31) >> 5u) & 0x7ffffffu;
            r3 = tc_call(0x80269240u, &a);
        } else {
            if (!c0lt) {
                if ((s32)r31 >= 18) {
                    return r3;
                }
            } else {
                c0lt = (s32)r31 < 1;
                if (r31 != 1u) {
                    if (!c0lt) {
                        return r3;
                    }
                    if ((s32)r31 >= 0) {
                        a.r[0] = r30;
                        a.r[1] = (ppc_cntlzw(0x10u - r31) >> 5u) & 0x7ffffffu;
                        r3 = tc_call(0x80269240u, &a);
                        return r3;
                    }
                    return r3;
                }
            }
            a.r[0] = r29;
            a.r[1] = r28;
            a.r[2] = (ppc_cntlzw(0x11u - r31) >> 5u) & 0x7ffffffu;
            r3 = tc_call(0x802691c4u, &a);
        }
    } else {
        a.r[0] = 0x817fdee8u;
        a.r[1] = 0u;
        a.r[2] = 0x40u;
        (void)tc_call(0x8000446cu, &a);
        r8 = rd32(0x80502708u);
        wr8(0x817fdeecu, 0x80u);
        r7 = r8 + 1u;
        wr32(0x817fdef4u, r8);
        wr32(0x80502708u, r7);
        wr32(0x817fdee8u, 0x40u);
        wr8(0x817fdef0u, 0x16u);
        wr32(0x80502708u, r7 + 1u);
        wr32(0x817fdef4u, r7);
        (void)tc_call(0x8026af8cu, &a);
        r3 = 0u;
    }
    return r3;
}
