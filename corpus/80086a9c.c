#include "tc_rt.h"

void fn_80086a9c(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    r8 = 0u;
    r6 = param_1;
    do {
        r7 = r6;
        r9 = 0u;
        ctr = 2u;
        do {
            if (rd32(r7 + 0x24u) != 0u) {
                wr32(r7 + 0x28u, 1u);
            }
            if (rd32(r7 + 0x2cu) != 0u) {
                wr32(r7 + 0x30u, 1u);
            }
            if (rd32(r7 + 0x34u) != 0u) {
                wr32(r7 + 0x38u, 1u);
            }
            if (rd32(r7 + 0x3cu) != 0u) {
                wr32(r7 + 0x40u, 1u);
            }
            if (rd32(r7 + 0x44u) != 0u) {
                wr32(r7 + 0x48u, 1u);
            }
            if (rd32(r7 + 0x4cu) != 0u) {
                wr32(r7 + 0x50u, 1u);
            }
            if (rd32(r7 + 0x54u) != 0u) {
                wr32(r7 + 0x58u, 1u);
            }
            if (rd32(r7 + 0x5cu) != 0u) {
                wr32(r7 + 0x60u, 1u);
            }
            if (rd32(r7 + 0x64u) != 0u) {
                wr32(r7 + 0x68u, 1u);
            }
            if (rd32(r7 + 0x6cu) != 0u) {
                wr32(r7 + 0x70u, 1u);
            }
            r7 = r7 + 0x50u;
            r9 = r9 + 9u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r8 = r8 + 1u;
        r6 = r6 + 0xa0u;
    } while ((s32)r8 < 2);
    r6 = param_1;
    r8 = 0u;
    do {
        r7 = r6;
        r9 = 0u;
        ctr = 2u;
        do {
            if (rd32(r7 + 0x2a4u) != 0u) {
                wr32(r7 + 0x2a8u, 1u);
            }
            if (rd32(r7 + 0x2acu) != 0u) {
                wr32(r7 + 0x2b0u, 1u);
            }
            if (rd32(r7 + 0x2b4u) != 0u) {
                wr32(r7 + 0x2b8u, 1u);
            }
            if (rd32(r7 + 0x2bcu) != 0u) {
                wr32(r7 + 0x2c0u, 1u);
            }
            if (rd32(r7 + 0x2c4u) != 0u) {
                wr32(r7 + 0x2c8u, 1u);
            }
            if (rd32(r7 + 0x2ccu) != 0u) {
                wr32(r7 + 0x2d0u, 1u);
            }
            if (rd32(r7 + 0x2d4u) != 0u) {
                wr32(r7 + 0x2d8u, 1u);
            }
            if (rd32(r7 + 0x2dcu) != 0u) {
                wr32(r7 + 0x2e0u, 1u);
            }
            if (rd32(r7 + 0x2e4u) != 0u) {
                wr32(r7 + 0x2e8u, 1u);
            }
            if (rd32(r7 + 0x2ecu) != 0u) {
                wr32(r7 + 0x2f0u, 1u);
            }
            r7 = r7 + 0x50u;
            r9 = r9 + 9u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r8 = r8 + 1u;
        r6 = r6 + 0xa0u;
    } while ((s32)r8 < 2);
    r0 = rd32(param_1);
    if (r0 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800dd89cu, &a);
        a.r[0] = param_1;
        (void)tc_call(0x800dd8ccu, &a);
        (void)tc_call(0x800dd6a4u, &a);
    } else {
        if (r0 == 2u) {
            a.r[0] = param_1;
            (void)tc_call(0x80145c30u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x80145d44u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x80145b1cu, &a);
        } else {
            if (r0 == 9u) {
                a.r[0] = param_1;
                (void)tc_call(0x800de218u, &a);
                a.r[0] = param_1;
                (void)tc_call(0x800ddf68u, &a);
                a.r[0] = param_1;
                (void)tc_call(0x800ddc64u, &a);
                (void)tc_call(0x800de4c8u, &a);
            } else {
                if (r0 == 3u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x800de864u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x800de7ecu, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x800de774u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x800de980u, &a);
                } else {
                    if (r0 == 4u) {
                        a.r[0] = param_1;
                        (void)tc_call(0x801ca1ccu, &a);
                        a.r[0] = param_1;
                        (void)tc_call(0x801ca2a0u, &a);
                    }
                }
            }
        }
    }
    r0 = rd32(param_1);
    if (r0 == 0xau) {
        a.r[0] = param_1;
        (void)tc_call(0x800dec54u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x800deb74u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x800dea94u, &a);
    } else {
        if (r0 == 0x17u) {
            a.r[0] = param_1;
            (void)tc_call(0x800defa4u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800deeecu, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800dee34u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x800df05cu, &a);
        } else {
            if (r0 == 6u) {
                a.r[0] = param_1;
                (void)tc_call(0x8017b0c0u, &a);
            } else {
                if (r0 == 0x10u) {
                    a.r[0] = param_1;
                    (void)tc_call(0x801772bcu, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x80177314u, &a);
                    a.r[0] = param_1;
                    (void)tc_call(0x80177374u, &a);
                } else {
                    if (r0 == 0x1au) {
                        a.r[0] = param_1;
                        (void)tc_call(0x801a904cu, &a);
                        a.r[0] = param_1;
                        (void)tc_call(0x801a9058u, &a);
                    } else {
                        if (r0 == 8u) {
                            a.r[0] = param_1;
                            (void)tc_call(0x8022500cu, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
