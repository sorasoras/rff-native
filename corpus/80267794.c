#include "tc_rt.h"

u32 fn_80267794(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r31 = (u32)rd8((u32)param_1 + 0x18u);
    r30 = (u32)rd16((u32)param_1 + 0x1cu);
    r29 = (u32)rd16((u32)param_1 + 0x20u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x80266c88u, &a);
    if (r30 <= r29) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x40u;
        (void)tc_call(0x80266c88u, &a);
        c0lt = (s32)r31 < 2;
        if (r31 == 2u) {
            a.r[0] = r30;
            a.r[1] = r29;
            a.r[2] = (u32)param_1;
            a.r[3] = 0x817fdf28u;
            a.r[4] = 0u;
            r3 = tc_call(0x802699fcu, &a);
            r31 = r3;
        } else if (!c0lt) {
            if ((s32)r31 >= 4) {
                r31 = 0x703u;
            } else {
                a.r[0] = r30;
                a.r[1] = r29;
                a.r[2] = (u32)param_1;
                a.r[3] = 0x817fdf28u;
                a.r[4] = 0u;
                r3 = tc_call(0x802695c4u, &a);
                r31 = r3;
            }
        } else {
            c0lt = (s32)r31 < 0;
            if (r31 == 0u) {
                a.r[0] = r30;
                a.r[1] = r29;
                a.r[2] = (u32)param_1;
                a.r[3] = 0x817fdf28u;
                a.r[4] = 0u;
                r3 = tc_call(0x8026a078u, &a);
                r31 = r3;
            } else if (!c0lt) {
                a.r[0] = r30;
                a.r[1] = r29;
                a.r[2] = (u32)param_1;
                a.r[3] = 0x817fdf28u;
                a.r[4] = 0u;
                r3 = tc_call(0x80269b6cu, &a);
                r31 = r3;
            } else {
                r31 = 0x703u;
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80266cb8u, &a);
        if (r31 == 0u) {
            a.r[0] = 0x817fdfacu;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            (void)tc_call(0x8000446cu, &a);
            r6 = rd32(0x80502708u);
            wr32(0x817fdfacu, 0x40u);
            wr8(0x817fdfb0u, 0x80u);
            wr8(0x817fdfb4u, (u8)r31);
            wr32(0x80502708u, r6 + 1u);
            wr32(0x817fdfb8u, r6);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfacu;
            a.r[2] = 0x40u;
            r3 = tc_call(0x80266be4u, &a);
            r31 = r3;
        }
        if (r31 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8026665cu, &a);
        } else {
            c0lt = (s32)r31 < 1795;
            if (r31 == 0x703u) {
                r31 = 0x12u;
            } else if (!c0lt) {
                c0lt = (s32)r31 < 1798;
                if (r31 == 0x706u) {
                    r31 = 0x20u;
                } else if (!c0lt) {
                    r31 = 3u;
                } else if ((s32)r31 >= 1797) {
                    r31 = 0x22u;
                } else {
                    r31 = 0x21u;
                }
            } else {
                c0lt = (s32)r31 < 1793;
                if (r31 == 0x701u) {
                    r31 = 0x14u;
                } else if (!c0lt) {
                    r31 = 0x15u;
                } else if (r31 == 0x302u) {
                    r31 = 2u;
                } else {
                    r31 = 3u;
                }
            }
            a.r[0] = 0x817fdf2cu;
            a.r[1] = 0u;
            a.r[2] = 0x40u;
            (void)tc_call(0x8000446cu, &a);
            r7 = rd32(0x80502708u);
            wr8(0x817fdf30u, 0x80u);
            r6 = r7 + 1u;
            wr32(0x817fdf38u, r7);
            wr32(0x80502708u, r6);
            wr32(0x817fdf2cu, 0x40u);
            wr8(0x817fdf34u, (u8)r31);
            wr32(0x80502708u, r6 + 1u);
            wr32(0x817fdf38u, r6);
            (void)tc_call(0x8026af8cu, &a);
            r3 = 0u;
        }
    } else {
        a.r[0] = 0x817fdf6cu;
        a.r[1] = 0u;
        a.r[2] = 0x40u;
        (void)tc_call(0x8000446cu, &a);
        r8 = rd32(0x80502708u);
        wr8(0x817fdf70u, 0x80u);
        r7 = r8 + 1u;
        wr32(0x817fdf78u, r8);
        wr32(0x80502708u, r7);
        wr32(0x817fdf6cu, 0x40u);
        wr8(0x817fdf74u, 0x14u);
        wr32(0x80502708u, r7 + 1u);
        wr32(0x817fdf78u, r7);
        (void)tc_call(0x8026af8cu, &a);
        r3 = 0u;
    }
    return r3;
}
