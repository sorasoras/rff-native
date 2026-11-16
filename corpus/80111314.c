#include "tc_rt.h"

u32 fn_80111314(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r8 = rd32(param_1 + 4u);
    r9 = rd32(r8);
    wr32(r8, r9 + 1u);
    r30 = rd32(param_1 + 8u);
    r31 = rd32(param_1) + (r9 * 0x50u);
    wr32(r31 + 0x40u, 0u);
    wr32(r31 + 0x44u, 0xffffffffu);
    wr32(r31 + 0x4cu, 0u);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    f1 = tc_callf(0x8000443cu, &a);
    r3 = rd32(r31 + 0x48u);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3 + 0x30u) + 8u), &a);
        }
        wr32(r31 + 0x48u, 0u);
    }
    if (param_3 < 16 && param_3 > 2) {
        c1lt = param_3 < 0;
        wr32(r31 + 0x40u, (u32)param_3);
        r5 = r31;
        r4 = 0u;
        if (param_3 > 0) {
            r6 = (u32)param_3 - 8u;
            if (param_3 > 8) {
                r7 = 0u;
                if (!c1lt && param_3 <= 2147483646) {
                    r7 = 1u;
                }
                if (r7 != 0u) {
                    r3 = param_2;
                    ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                    if ((s32)r6 > 0) {
                        do {
                            r4 = r4 + 8u;
                            wr32(r5, rd32(r3));
                            wr32(r5 + 4u, rd32(r3 + 4u));
                            wr32(r5 + 8u, rd32(r3 + 8u));
                            wr32(r5 + 0xcu, rd32(r3 + 0xcu));
                            wr32(r5 + 0x10u, rd32(r3 + 0x10u));
                            wr32(r5 + 0x14u, rd32(r3 + 0x14u));
                            wr32(r5 + 0x18u, rd32(r3 + 0x18u));
                            r0 = rd32(r3 + 0x1cu);
                            r3 = r3 + 0x20u;
                            wr32(r5 + 0x1cu, r0);
                            r5 = r5 + 0x20u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r3 = param_2 + ((r4 << 2u) & 0xfffffffcu);
            ctr = (u32)param_3 - r4;
            if ((s32)r4 < param_3) {
                do {
                    r0 = rd32(r3);
                    r3 = r3 + 4u;
                    wr32(r5, r0);
                    r5 = r5 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r6 = rd32(0x805707e8u);
        r5 = 0u;
        r3 = (u32)param_3 - r6;
        r4 = param_2 + ((r6 << 2u) & 0xfffffffcu);
        ctr = r3;
        if ((s32)r3 > 0) {
            while ((rd32(r4) - 0x7fff0000u) == 0xffffu) {
                r5 = r5 + 1u;
                r4 = r4 + 4u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        r4 = r5 + r6;
        wr32(r31 + 0x44u, r4);
        r0 = rd32(r31 + 0x40u);
        if (r0 == 0u) {
            r3 = 0xffffffffu;
        } else {
            r3 = rd32(r31 + 4u);
        }
        if (r0 == 0u) {
            r0 = 0xffffffffu;
        } else {
            r0 = rd32(r31);
        }
        if (r0 != 4u) {
            r4 = param_2 + ((r4 << 2u) & 0xfffffffcu);
            a.r[0] = r3;
            a.r[1] = r4;
            r3 = tc_call(0x80110458u, &a);
            wr32(r31 + 0x48u, r3);
        }
    }
    if (rd32(r31 + 0x40u) == 0u) {
        r0 = 0xffffffffu;
    } else {
        r0 = rd32(r31);
    }
    if (r0 != 4u) {
        r0 = rd32(r30);
        if (r0 != 0u) {
            wr32(r31 + 0x4cu, r0);
            wr32(r30, 0u);
        }
    } else {
        wr32(r30, r31);
    }
    return 0u;
}
