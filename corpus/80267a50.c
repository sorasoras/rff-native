#include "tc_rt.h"

u32 fn_80267a50(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd16((u32)param_1 + 0x1cu) <= (u32)rd16((u32)param_1 + 0x20u)) {
        r5 = rd32(0x80502708u);
        wr8(0x817fdfb0u, 0x80u);
        wr32(0x817fdfacu, 0x468u);
        wr32(0x80502708u, r5 + 1u);
        wr32(0x817fdfb8u, r5);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80266cb8u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfacu;
        a.r[2] = 0x40u;
        (void)tc_call(0x802669f4u, &a);
        a.r[0] = 0u;
        a.r[1] = 0x24u;
        a.r[2] = (u32)param_1;
        a.r[3] = 0x817fdf28u;
        a.r[4] = 1u;
        r3 = tc_call(0x8026a078u, &a);
        if (r3 == 0u) {
            a.r[0] = 0u;
            a.r[1] = 0x21u;
            a.r[2] = (u32)param_1;
            a.r[3] = 0x817fdf28u;
            a.r[4] = 1u;
            r3 = tc_call(0x80269b6cu, &a);
        }
        if (r3 == 0u) {
            a.r[0] = 0u;
            a.r[1] = 0x60u;
            a.r[2] = (u32)param_1;
            a.r[3] = 0x817fdf28u;
            a.r[4] = 1u;
            r3 = tc_call(0x802699fcu, &a);
        }
        if (r3 == 0u) {
            a.r[0] = 0u;
            a.r[1] = 0x1fu;
            a.r[2] = (u32)param_1;
            a.r[3] = 0x817fdf28u;
            a.r[4] = 1u;
            r3 = tc_call(0x802695c4u, &a);
        }
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8026665cu, &a);
        } else {
            c0lt = (s32)r3 < 1796;
            if (r3 == 0x704u) {
                r31 = 0x21u;
            } else if (!c0lt) {
                c0lt = (s32)r3 < 1798;
                if (r3 == 0x706u) {
                    r31 = 0x20u;
                } else if (!c0lt) {
                    r31 = 3u;
                } else {
                    r31 = 0x22u;
                }
            } else {
                c0lt = (s32)r3 < 1794;
                if (r3 == 0x702u) {
                    r31 = 0x15u;
                } else if (!c0lt) {
                    r31 = 0x12u;
                } else if ((s32)r3 >= 1793) {
                    r31 = 0x14u;
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
