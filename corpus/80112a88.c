#include "tc_rt.h"

void fn_80112a88(u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    r7 = rd32(param_r3 + 0x40u);
    if (r7 == 0u) {
        r0 = 0xffffffffu;
    } else {
        r0 = rd32(param_r3);
    }
    if (r0 == 4u) {
        r8 = rd32(0x805707e8u);
        r6 = 0u;
        r4 = r7 - r8;
        r5 = param_r3 + ((r8 << 2u) & 0xfffffffcu);
        ctr = r4;
        if ((s32)r4 > 0) {
            while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                r6 = r6 + 1u;
                r5 = r5 + 4u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        r4 = r6 + r8;
        r29 = 0u;
        r30 = 0u;
        r5 = r4 + 5u;
        r28 = r7 - r5;
        r27 = param_r3 + ((r5 << 2u) & 0xfffffffcu);
        r26 = rd32(param_r3 + (((r4 + 1u) << 2u) & 0xfffffffcu)) & 8u;
        for (;;) {
            if ((s32)r30 >= (s32)r28) {
                if (r29 == 0u) break;
                break;
            }
            r3 = rd32(r27);
            if (r3 != 0xffffffffu) {
                if (r3 == 0u) break;
                r29 = 1u;
                a.r[0] = r3;
                r3 = tc_call(0x8014d8acu, &a);
                if (r26 != 0u) {
                    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                }
                if (r3 != 0u) break;
            }
            r27 = r27 + 4u;
            r30 = r30 + 1u;
        }
    }
    r7 = rd32(param_r3 + 0x40u);
    if (r7 == 0u) {
        r0 = 0xffffffffu;
    } else {
        r0 = rd32(param_r3);
    }
    if (r0 == 4u) {
        r9 = rd32(0x805707e8u);
        r4 = 0u;
        r0 = r7 - r9;
        r8 = (r9 << 2u) & 0xfffffffcu;
        r5 = param_r3 + r8;
        ctr = r0;
        if ((s32)r0 > 0) {
            while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                r4 = r4 + 1u;
                r5 = r5 + 4u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        r0 = r9 + (r4 + 1u);
        if ((s32)r0 < (s32)r7) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r6 = rd32(param_r3 + r0);
        } else {
            r6 = 0u;
        }
        r0 = r7 - r9;
        r5 = param_r3 + r8;
        r4 = 0u;
        ctr = r0;
        if ((s32)r0 > 0) {
            while ((rd32(r5) - 0x7fff0000u) == 0xffffu) {
                r4 = r4 + 1u;
                r5 = r5 + 4u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        r0 = r9 + (r4 + 2u);
        if ((s32)r0 < (s32)r7) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(param_r3 + r0);
        } else {
            r3 = 0u;
        }
        if ((r6 & 0x10u) == 0u) {
            if ((r6 & 0x40u) == 0u) {
                r0 = 1u;
            } else {
                a.r[0] = r3;
                r3 = tc_call(0x800a6894u, &a);
                r28 = r3;
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x800a68e0u, &a);
                    if (r3 == 0u) {
                        r0 = 1u;
                    } else {
                        a.r[0] = r28;
                        r3 = tc_call(0x8015e420u, &a);
                        r0 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
                    }
                } else {
                    r0 = 1u;
                }
            }
        } else {
            a.r[0] = r3;
            r3 = tc_call(0x800a7a44u, &a);
            if (r3 != 0u) {
                if ((rd32(r3 + 0x90u) & 7u) != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x800ca270u, &a);
                    r0 = (ppc_cntlzw(r3 & 1u) >> 5u) & 0x7ffffffu;
                } else {
                    r0 = 1u;
                }
            } else {
                r0 = 0u;
            }
        }
    } else {
        r0 = 1u;
    }
    return;
}
