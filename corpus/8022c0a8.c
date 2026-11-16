#include "tc_rt.h"

void fn_8022c0a8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = tc_argr(5u), r12 = tc_argr(9u), r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    do {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        wr32(r1 + 0x1cu, r31);
        r31 = param_5;
        wr32(r1 + 0x18u, r30);
        r30 = r6;
        wr32(r1 + 0x14u, r29);
        r29 = r5;
        wr32(r1 + 0x10u, r28);
        r28 = r4;
        r0 = (u32)rd16(0x80570a78u);
        if (r0 == 0xffffu) {
            r0 = rd32(0x800000ccu);
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r0 = ((u32)rd16(0xcc00206eu) >> 1u) & 1u;
                wr16(0x80570a78u, (u16)r0);
            } else {
                r0 = 0u;
                wr16(0x80570a78u, 0u);
            }
            r0 = r0 & 0xffffu;
            wr32(0x805714c8u, 0x8022b704u);
        }
        r12 = rd32(0x805714c8u);
        r4 = r3;
        r3 = r0 & 0xffffu;
        r5 = r1 + 0xcu;
        r6 = r1 + 8u;
        lr = 0x8022c144u;
    } while (r12 == 0x8022c0a8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = param_5;
    a.r[5] = tc_argr(5u);
    a.r[6] = tc_argr(6u);
    a.r[7] = tc_argr(7u);
    a.f[0] = tc_argf(0u);
    a.f[1] = tc_argf(1u);
    a.f[2] = tc_argf(2u);
    a.f[3] = tc_argf(3u);
    a.f[4] = tc_argf(4u);
    a.f[5] = tc_argf(5u);
    a.f[6] = tc_argf(6u);
    a.f[7] = tc_argf(7u);
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r7 = rd32(r1 + 0xcu);
    r6 = rd32(r1 + 8u);
    r5 = (u32)rd16(r7 + 0x1au);
    r5 = r5 * (u32)rd16(r7 + 0x1cu);
    r0 = r7 + rd32(r7 + 0x24u);
    r6 = (u32)ppc_divw((s32)r6, (s32)r5);
    r0 = (rd32(r7 + 0x14u) * r6) + r0;
    wr32(r28, r0);
    r8 = rd32(r1 + 0xcu);
    r4 = rd32(r1 + 8u);
    r7 = (u32)rd16(r8 + 0x1au);
    r6 = r6 * r7;
    r5 = r4 - (r6 * (u32)rd16(r8 + 0x1cu));
    r6 = (u32)ppc_divw((s32)r5, (s32)r7);
    wr32(r29, (r5 - (r6 * r7)) * (u32)rd16(r8 + 0x10u));
    r4 = rd32(r1 + 0xcu);
    wr32(r30, r6 * (u32)rd16(r4 + 0x12u));
    if (param_5 != 0u) {
        r5 = rd32(r1 + 0xcu);
        r4 = rd32(r1 + 8u);
        r0 = r5 + (u32)rd16(r5 + 0x22u);
        r0 = (u32)rd8(r4 + r0);
        wr32(param_5, r0);
    }
    r0 = rd32(r1 + 0x24u);
    r31 = rd32(r1 + 0x1cu);
    r30 = rd32(r1 + 0x18u);
    r29 = rd32(r1 + 0x14u);
    r28 = rd32(r1 + 0x10u);
    return;
}
