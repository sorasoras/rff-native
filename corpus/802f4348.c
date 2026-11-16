#include "tc_rt.h"

void fn_802f4348(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r5 = rd32(param_1);
    if (r5 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        r0 = (u32)rd16(param_2);
        r4 = r5 + 0x104u;
        r6 = 0u;
        wr16(r5 + 0x102u, (u16)r0);
        if (r0 != 0u) {
            r6 = 1u;
        }
        r0 = (u32)rd16(param_2 + 2u);
        r5 = param_2 + 4u;
        wr16(r4, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 2u) & 0xffffu;
        }
        r0 = (u32)rd16(r5);
        wr16(r4 + 2u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 4u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 2u);
        wr16(r4 + 4u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 8u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 4u);
        wr16(r4 + 6u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x10u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 6u);
        wr16(r4 + 8u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x20u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 8u);
        wr16(r4 + 0xau, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x40u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0xau);
        wr16(r4 + 0xcu, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x80u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0xcu);
        wr16(r4 + 0xeu, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x100u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0xeu);
        wr16(r4 + 0x10u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x200u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0x10u);
        wr16(r4 + 0x12u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x400u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0x12u);
        wr16(r4 + 0x14u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x800u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0x14u);
        wr16(r4 + 0x16u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x1000u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0x16u);
        wr16(r4 + 0x18u, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x2000u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0x18u);
        wr16(r4 + 0x1au, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x4000u) & 0xffffu;
        }
        r0 = (u32)rd16(r5 + 0x1au);
        wr16(r4 + 0x1cu, (u16)r0);
        if (r0 != 0u) {
            r6 = (r6 | 0x8000u) & 0xffffu;
        }
        wr16(rd32(param_1) + 0x100u, (u16)r6);
        wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x3000000u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
