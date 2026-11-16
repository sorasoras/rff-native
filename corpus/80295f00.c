#include "tc_rt.h"

void fn_80295f00(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r28 = rd32(0x8053dee4u);
    wr32(0x8053dee4u, 0u);
    if ((u32)rd8(param_r3) == 0u) {
        wr8(0x8053dfa6u, 5u);
        r0 = (u32)rd8(param_r3 + 1u);
        wr8(0x8053df98u, (u8)r0);
        r0 = r0 & 1u;
        wr8(0x8053df99u, rd8(param_r3 + 2u));
        wr8(0x8053df9au, rd8(param_r3 + 3u));
        wr8(0x8053df9bu, rd8(param_r3 + 4u));
        wr8(0x8053df9cu, rd8(param_r3 + 5u));
        wr8(0x8053df9du, rd8(param_r3 + 6u));
        wr8(0x8053df9eu, rd8(param_r3 + 7u));
        wr8(0x8053df9fu, rd8(param_r3 + 8u));
        wr16(0x8053dfacu, 0x18u);
        if (r0 != 0u) {
            wr16(0x8053dfacu, 0xc18u);
        }
        if (((u32)rd8(0x8053df98u) & 2u) != 0u) {
            wr16(0x8053dfacu, (u16)((u32)rd16(0x8053dfacu) | 0xc000u));
        }
        if ((u32)rd8(0x8053df8eu) >= 3u) {
            if (((u32)rd8(0x8053df9bu) & 2u) == 0u) {
                wr16(0x8053dfacu, (u16)((u32)rd16(0x8053dfacu) | 0x1102u));
            }
            if (((u32)rd8(0x8053df9bu) & 4u) == 0u) {
                wr16(0x8053dfacu, (u16)((u32)rd16(0x8053dfacu) | 0x2204u));
            }
            r3 = (u32)rd8(0x8053df9bu);
            if ((r3 & 2u) != 0u || (r3 & 4u) != 0u) {
                if (((u32)rd8(0x8053df9cu) & 0x80u) == 0u) {
                    wr16(0x8053dfacu, (u16)((u32)rd16(0x8053dfacu) | 0x300u));
                }
                if (((u32)rd8(0x8053df9du) & 1u) == 0u) {
                    wr16(0x8053dfacu, (u16)((u32)rd16(0x8053dfacu) | 0x3000u));
                }
            }
        }
        if ((u32)rd8(0x80540118u) >= 5u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0xd0004u;
            a.r[1] = 0x80393a94u;
            a.r[2] = (u32)rd16(0x8053dfacu);
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            f1 = tc_callf(0x8028cc6cu, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        }
        r3 = (u32)rd8(0x8053df99u);
        wr16(0x8053dfaeu, 0u);
        wr8(0x8053f260u, 0u);
        if ((r3 & 8u) != 0u) {
            wr16(0x8053dfaeu, 1u);
            if ((r3 & 0x10u) != 0u) {
                wr16(0x8053dfaeu, 3u);
            }
            if (((u32)rd8(0x8053df99u) & 0x20u) != 0u) {
                wr16(0x8053dfaeu, (u16)((u32)rd16(0x8053dfaeu) | 4u));
            }
        }
        if (((u32)rd8(0x8053df9bu) & 0x80u) != 0u) {
            wr16(0x8053dfaeu, (u16)((u32)rd16(0x8053dfaeu) | 8u));
        }
        if (((u32)rd8(0x8053df9cu) & 1u) != 0u) {
            wr16(0x8053dfaeu, (u16)((u32)rd16(0x8053dfaeu) | 0x10u));
        }
        if (((u32)rd8(0x8053df9cu) & 2u) != 0u) {
            wr16(0x8053dfaeu, (u16)((u32)rd16(0x8053dfaeu) | 0x20u));
        }
        r3 = (u32)rd16(0x8053dfaeu);
        if ((r3 & 0x38u) != 0u) {
            r5 = (u32)rd8(0x8053df9du);
            wr8(0x8053f260u, 1u);
            if ((r5 & 0x20u) == 0u) {
                wr16(0x8053dfaeu, (u16)(r3 | 0x140u));
            } else if ((r5 & 0x80u) == 0u) {
                wr16(0x8053dfaeu, (u16)(r3 | 0x100u));
            }
            r3 = (u32)rd8(0x8053df9du);
            if ((r3 & 0x40u) == 0u) {
                wr16(0x8053dfaeu, (u16)((u32)rd16(0x8053dfaeu) | 0x280u));
            } else if ((r3 & 0x80u) == 0u) {
                wr16(0x8053dfaeu, (u16)((u32)rd16(0x8053dfaeu) | 0x200u));
            }
        }
        if ((u32)rd8(0x80540118u) >= 5u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0xd0004u;
            a.r[1] = 0x80393ac0u;
            a.r[2] = (u32)rd16(0x8053dfaeu);
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        if (((u32)rd8(0x8053df98u) & 0x20u) == 0u) {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) & 0xfffeu));
        } else {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) | 1u));
        }
        if (((u32)rd8(0x8053df98u) & 0x40u) == 0u) {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) & 0xfffffffdu));
        } else {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) | 2u));
        }
        if (((u32)rd8(0x8053df98u) & 0x80u) == 0u) {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) & 0xfffffffbu));
        } else {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) | 4u));
        }
        if (((u32)rd8(0x8053df99u) & 1u) == 0u) {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) & 0xfffffff7u));
        } else {
            wr16(0x8053de1cu, (u16)((u32)rd16(0x8053de1cu) | 8u));
        }
        f1 = tc_callf(0x8029b8a4u, &a);
        r29 = (u32)rd8(0x80540116u);
        if (r29 != 0xffu) {
            r27 = (u32)rd8(0x80540115u);
            c0lt = (u32)rd8(0x80540118u) < 3u;
            wr8(0x80540116u, 0xffu);
            wr8(0x80540115u, 0xffu);
            if (!c0lt) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0002u;
                a.r[1] = 0x80393a50u;
                a.r[2] = r27;
                a.r[3] = 0xffu;
                a.r[4] = r29;
                a.r[5] = 0xffu;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028ccb4u, &a);
            }
            r4 = (u32)rd8(0x8053df9du);
            if (((r4 & 8u) != 0u || ((u32)rd8(0x8053df9cu) & 0x10u) != 0u || (r4 & 0x10u) != 0u) && ((u32)rd8(0x80540115u) != r27 || (u32)rd8(0x80540116u) != r29)) {
                a.r[0] = r27;
                a.r[1] = r29;
                r3 = tc_call(0x802a1ca4u, &a);
                if ((r3 & 0xffu) != 0u) {
                    wr8(0x80540115u, (u8)r27);
                    wr8(0x80540116u, (u8)r29);
                }
            }
        }
        if (((u32)rd8(0x8053df9bu) & 0x40u) != 0u) {
            a.r[0] = 1u;
            (void)tc_call(0x80297420u, &a);
        }
        a.r[0] = 1u;
        (void)tc_call(0x80297370u, &a);
        a.r[0] = 1u;
        f1 = tc_callf(0x802972c0u, &a);
        r4 = tc_lastr4();
        r12 = rd32(0x8053dec0u);
        if (r12 != 0u) {
            a.r[0] = 0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            f1 = tc_callf(r12, &a);
            r4 = tc_lastr4();
        }
        if (r28 != 0u) {
            a.r[0] = 0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(r28, &a);
        }
    }
    return;
}
