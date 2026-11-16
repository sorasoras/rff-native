#include "tc_rt.h"

void fn_8024c700(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)param_1 * 0x44u;
    r3 = rd32(0x80571928u);
    r31 = r3 + r0;
    r3 = rd32(r3 + r0);
    if ((r3 & 0xc0000000u) != 0u) {
        if ((r3 & 0x80000000u) != 0u) {
            wr16(r31 + 0x24u, rd16(r31 + 0x26u));
            wr16(r31 + 0x28u, rd16(r31 + 0x2au));
            wr16(r31 + 0x2cu, rd16(r31 + 0x2eu));
            wr16(r31 + 0x30u, rd16(r31 + 0x32u));
            wr16(r31 + 0x34u, rd16(r31 + 0x36u));
            wr16(r31 + 0x38u, rd16(r31 + 0x3au));
            wr16(r31 + 0x3cu, rd16(r31 + 0x3eu));
            wr16(r31 + 0x40u, rd16(r31 + 0x42u));
            wr32(r31, rd32(r31) & 0x7fffffffu);
        }
        if ((rd32(r31) & 0x40000000u) != 0u) {
            a.r[0] = rd32(r31 + 4u);
            r3 = tc_call(0x80249808u, &a);
            wr16(r31 + 0x26u, (u16)r3);
            a.r[0] = rd32(r31 + 8u);
            r3 = tc_call(0x80249808u, &a);
            wr16(r31 + 0x2eu, (u16)r3);
            a.r[0] = rd32(r31 + 0xcu);
            r3 = tc_call(0x80249808u, &a);
            wr16(r31 + 0x36u, (u16)r3);
            a.r[0] = rd32(r31 + 0x10u);
            r3 = tc_call(0x80249808u, &a);
            wr16(r31 + 0x3eu, (u16)r3);
            if ((rd32(r31) & 1u) != 0u) {
                a.r[0] = rd32(r31 + 0x14u);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x2au, (u16)r3);
            } else {
                a.r[0] = rd32(r31 + 4u) + rd32(r31 + 0x14u);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x2au, (u16)r3);
            }
            if ((rd32(r31) & 2u) != 0u) {
                a.r[0] = rd32(r31 + 0x18u);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x32u, (u16)r3);
            } else {
                a.r[0] = rd32(r31 + 8u) + rd32(r31 + 0x18u);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x32u, (u16)r3);
            }
            if ((rd32(r31) & 4u) != 0u) {
                a.r[0] = rd32(r31 + 0x1cu);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x3au, (u16)r3);
            } else {
                a.r[0] = rd32(r31 + 0xcu) + rd32(r31 + 0x1cu);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x3au, (u16)r3);
            }
            if ((rd32(r31) & 8u) != 0u) {
                a.r[0] = rd32(r31 + 0x20u);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x42u, (u16)r3);
            } else {
                a.r[0] = rd32(r31 + 0x10u) + rd32(r31 + 0x20u);
                r3 = tc_call(0x80249808u, &a);
                wr16(r31 + 0x42u, (u16)r3);
            }
            wr32(r31, (rd32(r31) & 0xbfffffffu) | 0x80000000u);
        }
        r4 = (u32)rd16(r31 + 0x24u);
        r3 = (u32)param_2 + 0x104u;
        r0 = 0u;
        wr16((u32)param_2 + 0x102u, (u16)r4);
        if (r4 != 0u) {
            r0 = 1u;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x26u) - (u32)rd16(r31 + 0x24u))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 2u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x28u);
        wr16(r3 + 2u, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 4u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x2au) - (u32)rd16(r31 + 0x28u))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 4u, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 8u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x2cu);
        wr16(r3 + 6u, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x10u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x2eu) - (u32)rd16(r31 + 0x2cu))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 8u, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 0x20u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x30u);
        wr16(r3 + 0xau, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x40u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x32u) - (u32)rd16(r31 + 0x30u))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 0xcu, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 0x80u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x34u);
        wr16(r3 + 0xeu, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x100u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x36u) - (u32)rd16(r31 + 0x34u))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 0x10u, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 0x200u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x38u);
        wr16(r3 + 0x12u, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x400u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x3au) - (u32)rd16(r31 + 0x38u))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 0x14u, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 0x800u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x3cu);
        wr16(r3 + 0x16u, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x1000u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x3eu) - (u32)rd16(r31 + 0x3cu))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 0x18u, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 0x2000u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)rd16(r31 + 0x40u);
        wr16(r3 + 0x1au, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x4000u;
            r0 = r0 & 0xffffu;
        }
        r4 = (u32)((s32)ppc_mulhw(954437177, (s32)((u32)rd16(r31 + 0x42u) - (u32)rd16(r31 + 0x40u))) >> 2);
        r5 = r4 + ((r4 >> 0x1fu) & 1u);
        wr16(r3 + 0x1cu, (u16)r5);
        if ((r5 & 0xffffu) != 0u) {
            r0 = r0 | 0x8000u;
            r0 = r0 & 0xffffu;
        }
        r3 = rd32((u32)param_2 + 0x1cu);
        wr16((u32)param_2 + 0x100u, (u16)r0);
        wr32((u32)param_2 + 0x1cu, r3 | 0x3000000u);
    }
    return;
}
