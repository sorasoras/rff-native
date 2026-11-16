#include "tc_rt.h"

void fn_802f3ff0(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r6 = rd32(param_1);
    if (r6 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r4 = (u32)rd16(param_2);
        r5 = r6 + 0x3eu;
        r0 = 0u;
        wr16(r6 + 0x3cu, (u16)r4);
        if (r4 != 0u) {
            r0 = 1u;
        }
        r6 = (u32)rd16(param_2 + 2u);
        r4 = param_2 + 4u;
        wr16(r5, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 5u;
        }
        r6 = (u32)rd16(r4);
        wr16(r5 + 2u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 2u;
        }
        r6 = (u32)rd16(r4 + 2u);
        wr16(r5 + 4u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 6u;
        }
        r6 = (u32)rd16(r4 + 4u);
        wr16(r5 + 6u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x10000u;
        }
        r6 = (u32)rd16(r4 + 6u);
        wr16(r5 + 8u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x50000u;
        }
        r6 = (u32)rd16(r4 + 8u);
        wr16(r5 + 0xau, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x20000u;
        }
        r6 = (u32)rd16(r4 + 0xau);
        wr16(r5 + 0xcu, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x60000u;
        }
        r6 = (u32)rd16(r4 + 0xcu);
        wr16(r5 + 0xeu, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x200000u;
        }
        r6 = (u32)rd16(r4 + 0xeu);
        wr16(r5 + 0x10u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0xa00000u;
        }
        r6 = (u32)rd16(r4 + 0x10u);
        wr16(r5 + 0x12u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x400000u;
        }
        r6 = (u32)rd16(r4 + 0x12u);
        wr16(r5 + 0x14u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0xc00000u;
        }
        r6 = (u32)rd16(r4 + 0x14u);
        wr16(r5 + 0x16u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x4000000u;
        }
        r6 = (u32)rd16(r4 + 0x16u);
        wr16(r5 + 0x18u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x14000000u;
        }
        r6 = (u32)rd16(r4 + 0x18u);
        wr16(r5 + 0x1au, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x8000000u;
        }
        r6 = (u32)rd16(r4 + 0x1au);
        wr16(r5 + 0x1cu, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x18000000u;
        }
        r6 = (u32)rd16(r4 + 0x1cu);
        wr16(r5 + 0x1eu, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 8u;
        }
        r6 = (u32)rd16(r4 + 0x1eu);
        wr16(r5 + 0x20u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x18u;
        }
        r6 = (u32)rd16(r4 + 0x20u);
        wr16(r5 + 0x22u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x80000u;
        }
        r6 = (u32)rd16(r4 + 0x22u);
        wr16(r5 + 0x24u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x180000u;
        }
        r6 = (u32)rd16(r4 + 0x24u);
        wr16(r5 + 0x26u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x1000000u;
        }
        r6 = (u32)rd16(r4 + 0x26u);
        wr16(r5 + 0x28u, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x3000000u;
        }
        r6 = (u32)rd16(r4 + 0x28u);
        wr16(r5 + 0x2au, (u16)r6);
        if (r6 != 0u) {
            r0 = r0 | 0x20000000u;
        }
        r4 = (u32)rd16(r4 + 0x2au);
        wr16(r5 + 0x2cu, (u16)r4);
        if (r4 != 0u) {
            r0 = r0 | 0x60000000u;
        }
        wr32(rd32(param_1) + 0x34u, r0);
        if ((u32)param_3 != 0u) {
            r4 = rd32(param_1);
            wr32(r4 + 0x1cu, rd32(r4 + 0x1cu) | 0x12u);
        } else {
            wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x12u);
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
