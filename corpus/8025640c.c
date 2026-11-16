#include "tc_rt.h"

void fn_8025640c(u32 param_r3, u32 param_r4)
{
    u32 c1gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    r0 = (u32)rd16(rd32(param_r4));
    r7 = rd32(rd32(param_r3 + 0x284u));
    r6 = (r0 >> 1u) & 1u;
    r0 = (r0 >> 6u) & 0x1fu;
    if (r6 == 0u) {
        r8 = r7 - ((r0 << 3u) & 0xfffffff8u);
    } else {
        r8 = r7 - ((r0 << 4u) & 0xfffffff0u);
    }
    if (r6 == 0u) {
        r5 = 0x20u - r0;
        r6 = 0u;
        c1gt = (s32)r5 > 32;
        r9 = 0u;
        if ((s32)r5 < 32) {
            if ((s32)r0 > 8) {
                r11 = 0u;
                r12 = 0u;
                r29 = 0u;
                if (!c1gt && (s32)r5 <= 2147483646) {
                    r29 = 1u;
                }
                if (r29 != 0u && (r5 - 0x80000000u) != 0u) {
                    r12 = 1u;
                }
                if (r12 != 0u) {
                    r12 = 1u;
                    if (((0u - r5) & 0x80000000u) == 0u) {
                        r0 = r0 & 0x80000000u;
                        if (r0 != 0u) {
                            r12 = 0u;
                        }
                    }
                    if (r12 != 0u) {
                        r11 = 1u;
                    }
                }
                if (r11 != 0u) {
                    r31 = param_r3 + ((r5 << 4u) & 0xfffffff0u);
                    ctr = ((0x1fu - r5) >> 3u) & 0x1fffffffu;
                    if ((s32)r5 < 24) {
                        do {
                            wrf64(r31, rdf64(r8 + r9));
                            wrf64(r31 + 0x10u, rdf64(r8 + (((r6 + 1u) << 3u) & 0xfffffff8u)));
                            r29 = ((r6 + 3u) << 3u) & 0xfffffff8u;
                            r12 = ((r6 + 4u) << 3u) & 0xfffffff8u;
                            r11 = ((r6 + 5u) << 3u) & 0xfffffff8u;
                            f0 = rdf64(r8 + (((r6 + 2u) << 3u) & 0xfffffff8u));
                            r10 = ((r6 + 6u) << 3u) & 0xfffffff8u;
                            r0 = ((r6 + 7u) << 3u) & 0xfffffff8u;
                            r6 = r6 + 8u;
                            wrf64(r31 + 0x20u, f0);
                            r9 = r9 + 0x40u;
                            r5 = r5 + 8u;
                            wrf64(r31 + 0x30u, rdf64(r8 + r29));
                            wrf64(r31 + 0x40u, rdf64(r8 + r12));
                            wrf64(r31 + 0x50u, rdf64(r8 + r11));
                            wrf64(r31 + 0x60u, rdf64(r8 + r10));
                            wrf64(r31 + 0x70u, rdf64(r8 + r0));
                            r31 = r31 + 0x80u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r9 = r8 + ((r6 << 3u) & 0xfffffff8u);
            r6 = param_r3 + ((r5 << 4u) & 0xfffffff0u);
            ctr = 0x20u - r5;
            if ((s32)r5 < 32) {
                do {
                    f0 = rdf64(r9);
                    r9 = r9 + 8u;
                    wrf64(r6, f0);
                    r6 = r6 + 0x10u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    } else {
        r5 = 0x20u - r0;
        r6 = 0u;
        c1gt = (s32)r5 > 32;
        r9 = 0u;
        if ((s32)r5 < 32) {
            if ((s32)r0 > 8) {
                r11 = 0u;
                r12 = 0u;
                r29 = 0u;
                if (!c1gt && (s32)r5 <= 2147483646) {
                    r29 = 1u;
                }
                if (r29 != 0u && (r5 - 0x80000000u) != 0u) {
                    r12 = 1u;
                }
                if (r12 != 0u) {
                    r12 = 1u;
                    if (((0u - r5) & 0x80000000u) == 0u) {
                        r0 = r0 & 0x80000000u;
                        if (r0 != 0u) {
                            r12 = 0u;
                        }
                    }
                    if (r12 != 0u) {
                        r11 = 1u;
                    }
                }
                if (r11 != 0u) {
                    r28 = param_r3 + ((r5 << 4u) & 0xfffffff0u);
                    ctr = ((0x1fu - r5) >> 3u) & 0x1fffffffu;
                    if ((s32)r5 < 24) {
                        do {
                            r27 = r8 + r9;
                            wrf32d(r28 + 8u, (f64)rdf32(r27 + 8u));
                            wrf32d(r28 + 0xcu, (f64)rdf32(r27 + 0xcu));
                            r27 = r8 + (((r6 + 1u) << 4u) & 0xfffffff0u);
                            r0 = ((r6 + 7u) << 4u) & 0xfffffff0u;
                            r30 = r8 + (((r6 + 2u) << 4u) & 0xfffffff0u);
                            wrf64(r28, rdf64(r8 + r9));
                            r29 = r8 + (((r6 + 3u) << 4u) & 0xfffffff0u);
                            r12 = r8 + (((r6 + 4u) << 4u) & 0xfffffff0u);
                            r11 = r8 + (((r6 + 5u) << 4u) & 0xfffffff0u);
                            r10 = r8 + (((r6 + 6u) << 4u) & 0xfffffff0u);
                            r31 = r8 + r0;
                            r6 = r6 + 8u;
                            wrf32d(r28 + 0x18u, (f64)rdf32(r27 + 8u));
                            r9 = r9 + 0x80u;
                            r5 = r5 + 8u;
                            wrf32d(r28 + 0x1cu, (f64)rdf32(r27 + 0xcu));
                            wrf64(r28 + 0x10u, rdf64(r27));
                            wrf32d(r28 + 0x28u, (f64)rdf32(r30 + 8u));
                            wrf32d(r28 + 0x2cu, (f64)rdf32(r30 + 0xcu));
                            wrf64(r28 + 0x20u, rdf64(r30));
                            wrf32d(r28 + 0x38u, (f64)rdf32(r29 + 8u));
                            wrf32d(r28 + 0x3cu, (f64)rdf32(r29 + 0xcu));
                            wrf64(r28 + 0x30u, rdf64(r29));
                            wrf32d(r28 + 0x48u, (f64)rdf32(r12 + 8u));
                            wrf32d(r28 + 0x4cu, (f64)rdf32(r12 + 0xcu));
                            wrf64(r28 + 0x40u, rdf64(r12));
                            wrf32d(r28 + 0x58u, (f64)rdf32(r11 + 8u));
                            wrf32d(r28 + 0x5cu, (f64)rdf32(r11 + 0xcu));
                            wrf64(r28 + 0x50u, rdf64(r11));
                            wrf32d(r28 + 0x68u, (f64)rdf32(r10 + 8u));
                            wrf32d(r28 + 0x6cu, (f64)rdf32(r10 + 0xcu));
                            wrf64(r28 + 0x60u, rdf64(r10));
                            wrf32d(r28 + 0x78u, (f64)rdf32(r31 + 8u));
                            wrf32d(r28 + 0x7cu, (f64)rdf32(r31 + 0xcu));
                            wrf64(r28 + 0x70u, rdf64(r8 + r0));
                            r28 = r28 + 0x80u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r9 = r8 + ((r6 << 4u) & 0xfffffff0u);
            r6 = param_r3 + ((r5 << 4u) & 0xfffffff0u);
            ctr = 0x20u - r5;
            if ((s32)r5 < 32) {
                do {
                    wrf32d(r6 + 8u, (f64)rdf32(r9 + 8u));
                    wrf32d(r6 + 0xcu, (f64)rdf32(r9 + 0xcu));
                    f0 = rdf64(r9);
                    r9 = r9 + 0x10u;
                    wrf64(r6, f0);
                    r6 = r6 + 0x10u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    }
    r6 = 0u;
    r9 = 0u;
    r27 = (u32)((s32)rd16(rd32(param_r4)) >> 11);
    r5 = 0x20u - r27;
    c1gt = (s32)r5 > 32;
    r8 = r8 - ((r27 << 2u) & 0xfffffffcu);
    if ((s32)r5 < 32) {
        if ((s32)r27 > 8) {
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            if (!c1gt && (s32)r5 <= 2147483646) {
                r12 = 1u;
            }
            if (r12 != 0u && (r5 - 0x80000000u) != 0u) {
                r11 = 1u;
            }
            if (r11 != 0u) {
                r4 = 1u;
                if (((0u - r5) & 0x80000000u) == 0u && (r27 & 0x80000000u) != 0u) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r10 = 1u;
                }
            }
            if (r10 != 0u) {
                r4 = param_r3 + ((r5 << 2u) & 0xfffffffcu);
                ctr = ((0x1fu - r5) >> 3u) & 0x1fffffffu;
                if ((s32)r5 < 24) {
                    do {
                        wr32(r4 + 0x200u, rd32(r8 + r9));
                        wr32(r4 + 0x204u, rd32(r8 + (((r6 + 1u) << 2u) & 0xfffffffcu)));
                        r31 = ((r6 + 3u) << 2u) & 0xfffffffcu;
                        r12 = ((r6 + 4u) << 2u) & 0xfffffffcu;
                        r11 = ((r6 + 5u) << 2u) & 0xfffffffcu;
                        r30 = rd32(r8 + (((r6 + 2u) << 2u) & 0xfffffffcu));
                        r10 = ((r6 + 6u) << 2u) & 0xfffffffcu;
                        r0 = ((r6 + 7u) << 2u) & 0xfffffffcu;
                        r6 = r6 + 8u;
                        wr32(r4 + 0x208u, r30);
                        r9 = r9 + 0x20u;
                        r5 = r5 + 8u;
                        r31 = rd32(r8 + r31);
                        wr32(r4 + 0x20cu, r31);
                        r12 = rd32(r8 + r12);
                        wr32(r4 + 0x210u, r12);
                        r11 = rd32(r8 + r11);
                        wr32(r4 + 0x214u, r11);
                        r10 = rd32(r8 + r10);
                        wr32(r4 + 0x218u, r10);
                        r0 = rd32(r8 + r0);
                        wr32(r4 + 0x21cu, r0);
                        r4 = r4 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r6 = (r6 << 2u) & 0xfffffffcu;
        r6 = r8 + r6;
        r4 = param_r3 + ((r5 << 2u) & 0xfffffffcu);
        ctr = 0x20u - r5;
        if ((s32)r5 < 32) {
            do {
                r0 = rd32(r6);
                r6 = r6 + 4u;
                wr32(r4 + 0x200u, r0);
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(param_r3 + 0x284u, r7);
    return;
}
