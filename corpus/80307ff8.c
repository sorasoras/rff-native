#include "tc_rt.h"

void fn_80307ff8(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8(param_r3 + 0x11fu) != 0u) {
        if ((u32)rd8(param_r3 + 0x11eu) == 0u) {
            a.r[0] = param_r3;
            a.r[1] = rd32(param_r3 + 0x830u);
            r3 = tc_call(0x80308e0cu, &a);
            if (r3 == 0u) {
                r28 = param_r3;
                r27 = 0u;
                while ((s32)r27 < (s32)rd32(param_r3 + 0x82cu)) {
                    r4 = rd32(r28 + 0x834u);
                    if (r4 != 0u) {
                        a.r[0] = rd32(param_r3 + 0x820u);
                        a.r[1] = r4;
                        (void)tc_call(0x80306fa8u, &a);
                        wr32(r28 + 0x834u, 0u);
                    }
                    r28 = r28 + 0x34u;
                    r27 = r27 + 1u;
                }
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                return;
            }
            wr32(0x817fdf50u, 0u);
            wr32(0x817fdf4cu, 0u);
            wr32(0x817fdf48u, 0u);
            a.r[0] = param_r3;
            a.r[1] = 0x817fdf50u;
            a.r[2] = 0x817fdf4cu;
            a.r[3] = 0x817fdf48u;
            r3 = tc_call(0x80309de4u, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x80306860u, &a);
                r3 = r3 + 0x354u;
                a.r[0] = r3;
                (void)tc_call(0x8022d648u, &a);
                return;
            }
            r29 = 0u;
            r4 = rd32(param_r3 + 0xdcu);
            r5 = rd32(param_r3 + 0x138u) * rd32(param_r3 + 0x150u);
            c0lt = (s32)r4 < 2;
            wr32(param_r3 + 0x12cu, rd32(param_r3 + 0x12cu) + rd32(0x817fdf48u));
            if (r4 == 2u) {
                r29 = r5;
            } else if (!c0lt) {
                if ((s32)r4 < 4) {
                    r3 = r5 & 7u;
                    r29 = ((r5 >> 3u) & 0x1fffffffu) * 0xeu;
                    if (r3 != 0u) {
                        r29 = r29 + (((r3 - 1u) << 1u) & 0xfffffffeu);
                    }
                }
            } else if ((s32)r4 >= 1) {
                r29 = (r5 >> 1u) & 0x7fffffffu;
            }
            r28 = param_r3 + 0xb74u;
            r27 = 0u;
            while ((s32)r27 < (s32)rd32(param_r3 + 0x828u)) {
                if ((u32)rd8(r28) != 0u) {
                    r4 = 0x817fdf70u;
                    r5 = 0u;
                    wr32(0x817fdf58u, rd32(param_r3 + 0xdcu));
                    wr8(0x817fdf5cu, 1u);
                    wr32(0x817fdf60u, rd32(r28 + 0xcu));
                    wr32(0x817fdf64u, rd32(param_r3 + 0xe8u));
                    wr32(0x817fdf68u, 0u);
                    wr32(0x817fdf6cu, r29);
                    while ((s32)r5 < (s32)rd32(r28 + 0xcu)) {
                        if ((s32)r5 < 2) {
                            r0 = (u32)rd8(r28 + r5 + 0x10u);
                            if ((s32)r0 < 16) {
                                r0 = r0 * 0x34u;
                                r3 = param_r3 + r0 + 0x834u;
                            } else {
                                r3 = 0u;
                            }
                        } else {
                            r3 = 0u;
                        }
                        if (r3 != 0u) {
                            wr32(r4, rd32(r3));
                            r0 = (u32)rd16(r3 + 6u);
                            wr16(r4 + 4u, rd16(r3 + 4u));
                            wr16(r4 + 6u, (u16)r0);
                            r0 = (u32)rd16(r3 + 0xau);
                            wr16(r4 + 8u, rd16(r3 + 8u));
                            wr16(r4 + 0xau, (u16)r0);
                            r0 = (u32)rd16(r3 + 0xeu);
                            wr16(r4 + 0xcu, rd16(r3 + 0xcu));
                            wr16(r4 + 0xeu, (u16)r0);
                            r0 = (u32)rd16(r3 + 0x12u);
                            wr16(r4 + 0x10u, rd16(r3 + 0x10u));
                            wr16(r4 + 0x12u, (u16)r0);
                            r0 = (u32)rd16(r3 + 0x16u);
                            wr16(r4 + 0x14u, rd16(r3 + 0x14u));
                            wr16(r4 + 0x16u, (u16)r0);
                            r0 = (u32)rd16(r3 + 0x1au);
                            wr16(r4 + 0x18u, rd16(r3 + 0x18u));
                            wr16(r4 + 0x1au, (u16)r0);
                            r0 = (u32)rd16(r3 + 0x1eu);
                            wr16(r4 + 0x1cu, rd16(r3 + 0x1cu));
                            wr16(r4 + 0x1eu, (u16)r0);
                            r0 = (u32)rd16(r3 + 0x22u);
                            wr16(r4 + 0x20u, rd16(r3 + 0x20u));
                            wr16(r4 + 0x22u, (u16)r0);
                            wr16(r4 + 0x24u, rd16(r3 + 0x24u));
                            wr16(r4 + 0x26u, rd16(r3 + 0x26u));
                            wr16(r4 + 0x28u, rd16(r3 + 0x28u));
                            wr16(r4 + 0x2au, rd16(r3 + 0x2au));
                            wr16(r4 + 0x2cu, rd16(r3 + 0x2cu));
                            wr16(r4 + 0x2eu, rd16(r3 + 0x2eu));
                            wr16(r4 + 0x30u, rd16(r3 + 0x30u));
                            r3 = rd32(r3);
                            wr16(r4 + 0x26u, (u16)rd8(r3));
                        }
                        r4 = r4 + 0x34u;
                        r5 = r5 + 1u;
                    }
                    r3 = tc_call(0x8022c2b0u, &a);
                    r0 = rd32(r28 + 4u);
                    r25 = r3;
                    if (r0 != 0u) {
                        a.r[0] = r0;
                        a.r[1] = 0x817fdf58u;
                        a.r[2] = rd32(0x817fdf4cu);
                        (void)tc_call(0x8030c04cu, &a);
                        a.r[0] = rd32(r28 + 4u);
                        a.r[1] = 1u;
                        (void)tc_call(0x8030cbc4u, &a);
                        a.r[0] = rd32(r28 + 4u);
                        (void)tc_call(0x8030c2c4u, &a);
                    }
                    a.r[0] = r25;
                    (void)tc_call(0x8022c2d8u, &a);
                }
                r28 = r28 + 0x38u;
                r27 = r27 + 1u;
            }
            r3 = rd32(param_r3 + 0xfcu);
            r4 = rd32(0x817fdf50u);
            if (r4 != (r3 - 2u)) {
                if (r4 == (r3 - 1u)) {
                    a.r[0] = param_r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x803098b8u, &a);
                }
            } else {
                a.r[0] = param_r3;
                a.r[1] = 1u;
                (void)tc_call(0x803098b8u, &a);
            }
            a.r[0] = param_r3;
            (void)tc_call(0x80309d30u, &a);
            wr8(param_r3 + 0x11eu, 1u);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
