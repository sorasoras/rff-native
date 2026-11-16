#include "tc_rt.h"

void fn_80309b04(u32 param_r3)
{
    u32 c0eq = 0, c0gt = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    c0eq = (u32)rd8(param_r3 + 0x12au) == 0u;
    wr32(param_r3 + 0x164u, rd32(param_r3 + 0x164u) + 1u);
    if (c0eq) {
        r8 = rd32(param_r3 + 0x14cu);
        if ((s32)r8 < (s32)(rd32(param_r3 + 0xfcu) - 1u)) {
            r31 = rd32(param_r3 + 0x100u);
        } else {
            r31 = rd32(param_r3 + 0x110u);
        }
        r30 = 0u;
        r7 = (u32)rd16(param_r3 + 0xecu);
        r27 = r7 + (r31 * rd32(param_r3 + 0x82cu));
        r26 = rd32(param_r3 + 0xf8u) + (r8 * (r7 + (rd32(param_r3 + 0x100u) * rd32(param_r3 + 0xe4u))));
        if (rd32(param_r3 + 0x148u) == 0u && rd32(param_r3 + 0xdcu) == 3u) {
            r30 = 1u;
        }
        a.r[0] = param_r3 + 0x19cu;
        r3 = tc_call(0x802facacu, &a);
        c0eq = r3 == 0u;
        if (c0eq) {
            r28 = 0u;
        } else {
            r28 = r3;
            if (!c0eq) {
                wr32(r3 + 4u, 0u);
                wr32(r3 + 8u, 0u);
                wr8(r3 + 0xcu, 0u);
                wr32(r3, 0x8039d660u);
                wr32(r3 + 0x10u, 0u);
                wr32(r3 + 0x14u, 0u);
                wr32(r3 + 0x18u, 0u);
                wr32(r3 + 0x1cu, 0u);
                wr32(r3 + 0x20u, 0u);
                wr32(r3 + 0x24u, 0xffffffffu);
                wr8(r3 + 0x28u, 0u);
                wr32(r3 + 0x2cu, 0u);
                wr32(r3 + 0x30u, 0u);
            }
        }
        wr32(r28 + 0x10u, param_r3);
        wr32(r28 + 0x14u, rd32(param_r3 + 0x824u));
        wr32(r28 + 0x18u, r27);
        wr32(r28 + 0x1cu, r26);
        wr32(r28 + 0x20u, r31);
        wr32(r28 + 0x24u, rd32(param_r3 + 0x148u));
        wr8(r28 + 0x28u, (u8)r30);
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = r3;
        wr32(0x817fdfd8u, param_r3 + 0x194u);
        a.r[0] = param_r3 + 0x190u;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = r28 + 0x2cu;
        (void)tc_call(0x802deba4u, &a);
        r31 = 1u;
        if ((u32)rd8(param_r3 + 0x11eu) != 0u) {
            r31 = 2u;
        }
        r3 = tc_call(0x8030abd4u, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = r31;
        (void)tc_call(0x8030ad4cu, &a);
        r3 = rd32(param_r3 + 0x14cu) + 1u;
        c0gt = (s32)r3 > (s32)rd32(param_r3 + 0x160u);
        wr32(param_r3 + 0x14cu, r3);
        if (c0gt) {
            if ((u32)rd8(param_r3 + 0xe0u) != 0u) {
                wr32(param_r3 + 0x14cu, rd32(param_r3 + 0x15cu));
            } else {
                wr8(param_r3 + 0x12au, 1u);
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
        }
        r3 = rd32(param_r3 + 0x148u) + 1u;
        c0lt = (s32)r3 < (s32)rd32(param_r3 + 0x144u);
        wr32(param_r3 + 0x148u, r3);
        if (!c0lt) {
            r5 = rd32(param_r3 + 0x160u);
            r6 = rd32(param_r3 + 0x140u);
            r0 = rd32(param_r3 + 0x15cu);
            r3 = r5 - rd32(param_r3 + 0x14cu);
            wr32(param_r3 + 0x148u, 0u);
            r7 = r6 + 1u;
            r4 = r7 - (r3 + 1u);
            r3 = r5 - r0 + 1u;
            if ((r4 - ((u32)ppc_divw((s32)r4, (s32)r3) * r3)) == 0u) {
                r6 = r7;
            }
            wr32(param_r3 + 0x144u, r6);
        }
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
