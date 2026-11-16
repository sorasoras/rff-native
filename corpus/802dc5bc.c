#include "tc_rt.h"

void fn_802dc5bc(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r23 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_4 != 0u) {
        r31 = (param_3 << 2u) & 0x3fcu;
        r30 = param_1 + ((param_2 << 9u) & 0x1fe00u) + 0x408u;
        r3 = rd32(r30 + r31);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802dd5f8u, &a);
            wr32(r30 + r31, 0u);
        }
        a.r[0] = 0x1fu;
        a.r[1] = 0x802dd554u;
        a.r[2] = param_1;
        r3 = tc_call(0x80243534u, &a);
        r29 = r3;
        if (r3 == 0u) {
            return;
        }
        r3 = rd32(r3 + 0x18u);
        a.r[0] = r3;
        r3 = tc_call(0x802dbfb0u, &a);
        r28 = r3;
        if ((s32)r3 >= 0) {
            r27 = rd32(0x80547c1cu) + (r3 * 0x4cu);
            wr32(r27 + 4u, r29);
            wr32(r27 + 8u, param_1);
            wr8(r27 + 0xcu, (u8)param_2);
            wr8(r27 + 0xdu, (u8)param_3);
            wr8(r27 + 0xeu, (u8)param_4);
            r0 = (u32)rd16(rd32(param_1 + ((param_2 << 2u) & 0x3fcu) + 0x28u) + ((param_3 << 1u) & 0x1feu));
            if (r0 == 0xffffu) {
                r5 = 0u;
            } else {
                r0 = r0 * 0x18u;
                r5 = 1u;
                r4 = rd32(param_1 + 0xcu) + r0;
                wr32(r27 + 0x10u, r4);
                wr32(r27 + 0x14u, rd32(param_1 + 0x10u) + (rd32(r4 + 0x10u) * 0x50u));
                r3 = rd32(param_1 + 0x14u) + ((rd32(r4 + 0x14u) << 4u) & 0xfffffff0u);
                wr32(r27 + 0x18u, r3);
                wr32(r27 + 0x1cu, rd32(param_1 + 0x18u) + ((u32)rd16(r3 + 0xcu) * 0x2eu));
            }
            if (r5 != 0u) {
                wr32(r30 + r31, r27);
                wr32(param_1 + 0x404u, rd32(param_1 + 0x404u) + 1u);
                a.r[0] = r27;
                (void)tc_call(0x802dcf84u, &a);
                a.r[0] = r27;
                (void)tc_call(0x802dcd5cu, &a);
                a.r[0] = r27;
                (void)tc_call(0x802dcd84u, &a);
                a.r[0] = r27;
                (void)tc_call(0x802dc978u, &a);
                a.r[0] = r27;
                r3 = tc_call(0x802dcdb0u, &a);
                r25 = r3;
                a.r[0] = r27;
                r3 = tc_call(0x802dcd9cu, &a);
                a.r[0] = r29;
                a.r[1] = r3;
                a.r[2] = (u32)((s32)rd32(param_1 + ((param_2 << 2u) & 0x3fcu) + 0xacu) >> 16);
                a.r[3] = (u32)rd8(param_1 + param_2 + 0xecu);
                a.r[4] = r25;
                (void)tc_call(0x802daa10u, &a);
                a.r[0] = r27;
                (void)tc_call(0x802dd518u, &a);
                a.r[0] = r27;
                (void)tc_call(0x802dcfecu, &a);
                wr16(r29 + 0x38u, 1u);
                wr32(r29 + 0x1cu, rd32(r29 + 0x1cu) | 4u);
                return;
            }
            wr32(r27 + 8u, 0u);
            a.r[0] = r29;
            (void)tc_call(0x802db360u, &a);
            a.r[0] = r28;
            (void)tc_call(0x802dc018u, &a);
            a.r[0] = r29;
            (void)tc_call(0x802434b8u, &a);
            return;
        }
        a.r[0] = r29;
        (void)tc_call(0x802434b8u, &a);
    } else {
        r23 = param_1 + ((param_2 << 9u) & 0x1fe00u) + ((param_3 << 2u) & 0x3fcu);
        r3 = rd32(r23 + 0x408u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802dd5f8u, &a);
            wr32(r23 + 0x408u, 0u);
        }
    }
    return;
}
