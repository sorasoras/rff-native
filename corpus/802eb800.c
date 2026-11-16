#include "tc_rt.h"

void fn_802eb800(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9, u32 param_10, u32 param_11, u32 param_12)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r21 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    (void)param_10;
    (void)param_11;
    (void)param_12;
    r0 = rd32(param_1 + 0x38u);
    r28 = (u32)rd8(0x817fe00bu);
    r29 = (u32)rd8(0x817fe00fu);
    r30 = (u32)rd8(0x817fe013u);
    r31 = (u32)rd8(0x817fe017u);
    if ((((((r0 >> 0x1cu) & 0xfu) >= param_2 && ((r0 >> 0x18u) & 0xfu) >= param_3) && (((r0 >> 0x14u) & 0xfu) >= param_4 && ((r0 >> 9u) & 0x1fu) >= param_5)) && ((((r0 >> 0xeu) & 1u) >= param_6 && ((r0 >> 0xfu) & 7u) >= param_7) && (((r0 >> 0x12u) & 3u) >= param_8 && ((r0 >> 8u) & 1u) >= r28))) && (((r0 >> 7u) & 1u) >= r29 && ((r0 >> 6u) & 1u) >= r30)) {
        r0 = (r0 >> 5u) & 1u;
        if (r0 >= r31) {
            return;
        }
    }
    if (rd32(param_1 + 0x40u) != 0u) {
        a.r[0] = rd32(0x80571d40u);
        r3 = tc_call(0x8026d4a0u, &a);
        f1 = tc_lastf();
        r3 = rd32(param_1 + 0x38u);
        r0 = rd32(param_1 + 0x3cu);
        r3 = r3 & 0x1fu;
        wr32(param_1 + 0x40u, 0u);
        r0 = r0 & 0x1fu;
        wr32(param_1 + 0x38u, r3);
        wr32(param_1 + 0x3cu, r0);
    }
    a.r[0] = rd32(0x80571d40u);
    r3 = tc_call(0x8026d490u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x40u, r3);
    if (r3 != 0u) {
        r6 = 0u;
        r0 = (((((((((rd32(param_1 + 0x38u) & 0xfffffffu) | ((param_2 << 0x1cu) & 0xf0000000u)) & 0xf0ffffffu) | ((param_3 << 0x18u) & 0xf000000u)) & 0xff0fffffu) | ((param_4 << 0x14u) & 0xf00000u)) & 0xfff3ffffu) | ((param_8 << 0x12u) & 0xc0000u)) & 0xfffc7fffu) | ((param_7 << 0xfu) & 0x38000u);
        r0 = (r0 & 0xffffbfffu) | ((param_6 << 0xeu) & 0x4000u);
        r0 = (r0 & 0xffffc1ffu) | ((param_5 << 9u) & 0x3e00u);
        r0 = (r0 & 0xfffffeffu) | ((r28 << 8u) & 0x100u);
        r0 = (r0 & 0xffffff7fu) | ((r29 << 7u) & 0x80u);
        r0 = (r0 & 0xffffffbfu) | ((r30 << 6u) & 0x40u);
        r0 = (r0 & 0xffffffdfu) | ((r31 << 5u) & 0x20u);
        r4 = (rd32(param_1 + 0x3cu) & 0xf0ffffffu) | (r0 & 0xf000000u);
        wr32(param_1 + 0x38u, r0);
        r0 = (r0 >> 0x1cu) & 0xfu;
        r0 = r0 * 0x1cu;
        r5 = (r4 >> 0x18u) & 0xfu;
        wr32(param_1 + 0x3cu, r4);
        r4 = r3 + r0;
        if (r5 != 0u) {
            r3 = r5 - 8u;
            if (r5 > 8u) {
                r7 = r4;
                f1 = (f64)rdf32(0x805774c0u);
                f0 = (f64)rdf32(0x805774c4u);
                ctr = ((r3 + 7u) >> 3u) & 0x1fffffffu;
                if (r3 > 0u) {
                    do {
                        wrf32d(r7, f1);
                        r6 = r6 + 8u;
                        wrf32d(r7 + 4u, f1);
                        wrf32d(r7 + 8u, f1);
                        wrf32d(r7 + 0xcu, f0);
                        wrf32d(r7 + 0x10u, f0);
                        wrf32d(r7 + 0x14u, f1);
                        wrf32d(r7 + 0x18u, f1);
                        wrf32d(r7 + 0x1cu, f1);
                        wrf32d(r7 + 0x20u, f0);
                        wrf32d(r7 + 0x24u, f0);
                        wrf32d(r7 + 0x28u, f1);
                        wrf32d(r7 + 0x2cu, f1);
                        wrf32d(r7 + 0x30u, f1);
                        wrf32d(r7 + 0x34u, f0);
                        wrf32d(r7 + 0x38u, f0);
                        wrf32d(r7 + 0x3cu, f1);
                        wrf32d(r7 + 0x40u, f1);
                        wrf32d(r7 + 0x44u, f1);
                        wrf32d(r7 + 0x48u, f0);
                        wrf32d(r7 + 0x4cu, f0);
                        wrf32d(r7 + 0x50u, f1);
                        wrf32d(r7 + 0x54u, f1);
                        wrf32d(r7 + 0x58u, f1);
                        wrf32d(r7 + 0x5cu, f0);
                        wrf32d(r7 + 0x60u, f0);
                        wrf32d(r7 + 0x64u, f1);
                        wrf32d(r7 + 0x68u, f1);
                        wrf32d(r7 + 0x6cu, f1);
                        wrf32d(r7 + 0x70u, f0);
                        wrf32d(r7 + 0x74u, f0);
                        wrf32d(r7 + 0x78u, f1);
                        wrf32d(r7 + 0x7cu, f1);
                        wrf32d(r7 + 0x80u, f1);
                        wrf32d(r7 + 0x84u, f0);
                        wrf32d(r7 + 0x88u, f0);
                        wrf32d(r7 + 0x8cu, f1);
                        wrf32d(r7 + 0x90u, f1);
                        wrf32d(r7 + 0x94u, f1);
                        wrf32d(r7 + 0x98u, f0);
                        wrf32d(r7 + 0x9cu, f0);
                        r7 = r7 + 0xa0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            f1 = (f64)rdf32(0x805774c0u);
            f0 = (f64)rdf32(0x805774c4u);
            r3 = r4 + (r6 * 0x14u);
            ctr = r5 - r6;
            if (r6 < r5) {
                do {
                    wrf32d(r3, f1);
                    wrf32d(r3 + 4u, f1);
                    wrf32d(r3 + 8u, f1);
                    wrf32d(r3 + 0xcu, f0);
                    wrf32d(r3 + 0x10u, f0);
                    r3 = r3 + 0x14u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r10 = rd32(param_1 + 0x38u);
        r4 = 0u;
        r0 = rd32(param_1 + 0x38u);
        r21 = (rd32(param_1 + 0x3cu) & 0xfff3ffffu) | (r0 & 0xc0000u);
        r5 = (r10 >> 0x1cu) & 0xfu;
        r9 = ((r10 >> 0xcu) & 4u) + ((r10 >> 0x12u) & 0x3cu);
        r11 = (r10 >> 0xdu) & 0x1cu;
        r7 = ((r10 >> 0x18u) & 0xfu) * 0x14u;
        r8 = ((r10 >> 4u) & 4u) + (((r10 >> 5u) & 4u) + ((r10 >> 6u) & 4u));
        r10 = (r10 >> 3u) & 4u;
        r12 = rd32(param_1 + 0x40u);
        r3 = (r21 >> 0x12u) & 3u;
        wr32(param_1 + 0x3cu, r21);
        r5 = r5 * 0x1cu;
        r5 = r7 + r5;
        r5 = r9 + r8 + r5;
        r6 = r5 + (r12 + (r11 + r10));
        if (r3 != 0u) {
            r5 = r3 - 8u;
            if (r3 > 8u) {
                r7 = r6;
                f1 = (f64)rdf32(0x805774c0u);
                f0 = (f64)rdf32(0x805774c4u);
                ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                if (r5 > 0u) {
                    do {
                        wrf32d(r7, f1);
                        r4 = r4 + 8u;
                        wrf32d(r7 + 4u, f1);
                        wrf32d(r7 + 8u, f1);
                        wrf32d(r7 + 0xcu, f0);
                        wrf32d(r7 + 0x10u, f0);
                        wrf32d(r7 + 0x14u, f1);
                        wrf32d(r7 + 0x18u, f1);
                        wrf32d(r7 + 0x1cu, f1);
                        wrf32d(r7 + 0x20u, f0);
                        wrf32d(r7 + 0x24u, f0);
                        wrf32d(r7 + 0x28u, f1);
                        wrf32d(r7 + 0x2cu, f1);
                        wrf32d(r7 + 0x30u, f1);
                        wrf32d(r7 + 0x34u, f0);
                        wrf32d(r7 + 0x38u, f0);
                        wrf32d(r7 + 0x3cu, f1);
                        wrf32d(r7 + 0x40u, f1);
                        wrf32d(r7 + 0x44u, f1);
                        wrf32d(r7 + 0x48u, f0);
                        wrf32d(r7 + 0x4cu, f0);
                        wrf32d(r7 + 0x50u, f1);
                        wrf32d(r7 + 0x54u, f1);
                        wrf32d(r7 + 0x58u, f1);
                        wrf32d(r7 + 0x5cu, f0);
                        wrf32d(r7 + 0x60u, f0);
                        wrf32d(r7 + 0x64u, f1);
                        wrf32d(r7 + 0x68u, f1);
                        wrf32d(r7 + 0x6cu, f1);
                        wrf32d(r7 + 0x70u, f0);
                        wrf32d(r7 + 0x74u, f0);
                        wrf32d(r7 + 0x78u, f1);
                        wrf32d(r7 + 0x7cu, f1);
                        wrf32d(r7 + 0x80u, f1);
                        wrf32d(r7 + 0x84u, f0);
                        wrf32d(r7 + 0x88u, f0);
                        wrf32d(r7 + 0x8cu, f1);
                        wrf32d(r7 + 0x90u, f1);
                        wrf32d(r7 + 0x94u, f1);
                        wrf32d(r7 + 0x98u, f0);
                        wrf32d(r7 + 0x9cu, f0);
                        r7 = r7 + 0xa0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            f1 = (f64)rdf32(0x805774c0u);
            f0 = (f64)rdf32(0x805774c4u);
            r5 = r6 + (r4 * 0x14u);
            ctr = r3 - r4;
            if (r4 < r3) {
                do {
                    wrf32d(r5, f1);
                    wrf32d(r5 + 4u, f1);
                    wrf32d(r5 + 8u, f1);
                    wrf32d(r5 + 0xcu, f0);
                    wrf32d(r5 + 0x10u, f0);
                    r5 = r5 + 0x14u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r0 = rd32(param_1 + 0x38u);
        r3 = (rd32(param_1 + 0x3cu) & 0xfffffeffu) | (r0 & 0x100u);
        wr32(param_1 + 0x3cu, r3);
        if (((r3 >> 8u) & 1u) != 0u) {
            r6 = rd32(param_1 + 0x38u);
            r4 = (r6 >> 0x1cu) & 0xfu;
            r5 = ((r6 >> 0x18u) & 0xfu) * 0x14u;
            r6 = (r6 >> 0x12u) & 0x3cu;
            r4 = r4 * 0x1cu;
            r5 = r6 + r5;
            r4 = rd32(param_1 + 0x40u) + r4;
            wr8(r4 + r5, 1u);
            r4 = r4 + r5;
            wr8(r4 + 1u, 1u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
        }
        r0 = rd32(param_1 + 0x38u);
        r3 = (rd32(param_1 + 0x3cu) & 0xffffff7fu) | (r0 & 0x80u);
        wr32(param_1 + 0x3cu, r3);
        if (((r3 >> 7u) & 1u) != 0u) {
            r5 = rd32(param_1 + 0x38u);
            r0 = (r5 >> 0x1cu) & 0xfu;
            r4 = ((r5 >> 0x18u) & 0xfu) * 0x14u;
            r6 = (r5 >> 6u) & 4u;
            r5 = (r5 >> 0x12u) & 0x3cu;
            wr32(r4 + (r0 * 0x1cu) + (rd32(param_1 + 0x40u) + (r6 + r5)), 0xffffffffu);
        }
        r0 = rd32(param_1 + 0x38u);
        r3 = (rd32(param_1 + 0x3cu) & 0xffffbfffu) | (r0 & 0x4000u);
        wr32(param_1 + 0x3cu, r3);
        if (((r3 >> 0xeu) & 1u) != 0u) {
            r9 = rd32(param_1 + 0x38u);
            r0 = (r9 >> 0x1cu) & 0xfu;
            r8 = ((r9 >> 0x18u) & 0xfu) * 0x14u;
            r7 = (r9 >> 5u) & 4u;
            r6 = (r9 >> 6u) & 4u;
            r9 = (r9 >> 0x12u) & 0x3cu;
            r6 = r7 + r6;
            r6 = r9 + r6;
            r7 = r8 + (r0 * 0x1cu);
            r6 = rd32(param_1 + 0x40u) + r6;
            wr8(r6 + r7, 0xe4u);
            r6 = r6 + r7;
            wr8(r6 + 1u, 0xc0u);
            wr8(r6 + 2u, 0xd5u);
            wr8(r6 + 3u, 0xeau);
        }
        r0 = rd32(param_1 + 0x38u);
        r3 = (rd32(param_1 + 0x3cu) & 0xffffffbfu) | (r0 & 0x40u);
        wr32(param_1 + 0x3cu, r3);
        if (((r3 >> 6u) & 1u) != 0u) {
            r6 = rd32(param_1 + 0x38u);
            r4 = (r6 >> 0x1cu) & 0xfu;
            r10 = (r6 >> 0xcu) & 4u;
            r7 = (r6 >> 0x12u) & 0x3cu;
            r9 = (r6 >> 5u) & 4u;
            r8 = (r6 >> 6u) & 4u;
            r6 = ((r6 >> 0x18u) & 0xfu) * 0x14u;
            r7 = r10 + r7;
            r8 = r9 + r8;
            r5 = r4 * 0x1cu;
            r4 = rd32(param_1 + 0x40u) + (r8 + r7);
            r5 = r6 + r5;
            wr8(r4 + r5, 0x77u);
            r4 = r4 + r5;
            wr8(r4 + 1u, 0u);
            wr8(r4 + 2u, 0u);
            wr8(r4 + 3u, 0u);
        }
        r0 = rd32(param_1 + 0x38u);
        r3 = (rd32(param_1 + 0x3cu) & 0xffffffdfu) | (r0 & 0x20u);
        wr32(param_1 + 0x3cu, r3);
        if (((r3 >> 5u) & 1u) != 0u) {
            r7 = rd32(param_1 + 0x38u);
            r3 = (r7 >> 0x18u) & 0xfu;
            r0 = (r7 >> 0x1cu) & 0xfu;
            r6 = ((r7 >> 5u) & 4u) + ((r7 >> 6u) & 4u);
            r10 = (r7 >> 4u) & 4u;
            r9 = (r7 >> 0xcu) & 4u;
            r7 = (r7 >> 0x12u) & 0x3cu;
            r6 = r10 + r6;
            r9 = r9 + r7;
            r6 = r9 + r6;
            r6 = rd32(param_1 + 0x40u) + r6;
            r7 = (r3 * 0x14u) + (r0 * 0x1cu);
            wr8(r6 + r7, 1u);
            r6 = r6 + r7;
            wr8(r6 + 1u, 4u);
            wr8(r6 + 2u, 5u);
            wr8(r6 + 3u, 0xfu);
        }
    }
    return;
}
