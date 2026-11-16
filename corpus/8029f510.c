#include "tc_rt.h"

void fn_8029f510(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r9)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
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
    r9 = param_r9;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = 0x80394d70u;
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = param_2;
    if (param_1 < 2u) {
        r8 = 0x80540120u;
        r31 = ((param_1 << 4u) & 0xffff0u) - 0x7fabfee0u;
        if ((u32)rd8(r31 + 0xfu) != 0u) {
            r0 = (u32)rd16(r31 + 0xcu);
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                r5 = (u32)rd16(param_2);
                if (r5 == 0u) {
                    if ((u32)rd8(0x80540148u) >= 4u) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0xe0003u;
                        a.r[1] = 0x80394de0u;
                        a.r[2] = r5;
                        a.r[3] = param_r6;
                        a.r[4] = 0x80394d70u;
                        a.r[5] = 0x80540120u;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        f1 = tc_callf(0x8028cc54u, &a);
                        r5 = 0u;
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
                } else if ((u32)rd8(0x80540148u) >= 4u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0xe0003u;
                    a.r[1] = 0x80394dacu;
                    a.r[2] = r5;
                    a.r[3] = param_r6;
                    a.r[4] = 0x80394d70u;
                    a.r[5] = 0x80540120u;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x8028cc6cu, &a);
                    r5 = 0u;
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
            } else if (!c0lt) {
                if ((s32)r0 < 5) {
                    r0 = (u32)rd16(param_2) & 0xffu;
                    if (r0 > 8u) {
                        r5 = 0x114u;
                    } else {
                        r0 = (r0 << 2u) & 0xfffffffcu;
                        r3 = rd32(r0 - 0x7fc6b1c4u);
                        sw_ = r3;
                        switch (sw_) {
                        case 0x8029f63cu:
                            r5 = 0u;
                            break;
                        case 0x8029f644u:
                            r5 = 0x10bu;
                            break;
                        case 0x8029f64cu:
                            r5 = 0x103u;
                            break;
                        case 0x8029f674u:
                            r5 = 0x114u;
                            break;
                        case 0x8029f654u:
                            r5 = 0x109u;
                            break;
                        case 0x8029f65cu:
                            r5 = 0x10cu;
                            break;
                        case 0x8029f664u:
                            r5 = 0x10du;
                            break;
                        case 0x8029f66cu:
                            r5 = 0x115u;
                            break;
                        default:
                            a.r[0] = r3;
                            a.r[1] = param_2;
                            a.r[2] = 0u;
                            a.r[3] = param_r6;
                            a.r[4] = 0x80394d70u;
                            a.r[5] = 0x80540120u;
                            a.r[6] = param_r9;
                            a.r[7] = param_r10;
                            a.f[0] = param_f1;
                            a.f[1] = param_f2;
                            a.f[2] = param_f3;
                            a.f[3] = param_f4;
                            a.f[4] = param_f5;
                            a.f[5] = param_f6;
                            a.f[6] = param_f7;
                            a.f[7] = param_f8;
                            r3 = tc_call(sw_, &a);
                            r0 = 0u;
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                            r8 = 0u;
                            r9 = 0u;
                            r10 = 0u;
                            r11 = 0u;
                            r12 = 0u;
                            f0 = 0.0;
                            f2 = 0.0;
                            f3 = 0.0;
                            f4 = 0.0;
                            f5 = 0.0;
                            f6 = 0.0;
                            f7 = 0.0;
                            f8 = 0.0;
                            f9 = 0.0;
                            f10 = 0.0;
                            f11 = 0.0;
                            f12 = 0.0;
                            f13 = 0.0;
                            ctr = 0u;
                            return;
                        }
                    }
                    wr16(param_2, (u16)r5);
                    if ((u32)rd8(0x80540148u) >= 4u) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0xe0003u;
                        a.r[1] = 0x80394e08u;
                        a.r[2] = r5;
                        a.r[3] = param_r6;
                        a.r[4] = 0x80394d70u;
                        a.r[5] = 0x80540120u;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        f1 = tc_callf(0x8028cc6cu, &a);
                        r5 = 0u;
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
                }
            } else if ((s32)r0 >= 2) {
                r6 = (u32)rd8(param_2 + 1u);
                r0 = (u32)rd8(0x80540148u);
                r30 = 0x817fdfe8u;
                wr8(0x817fdfeau, (u8)r6);
                c0lt = r0 < 4u;
                r0 = ~(0u - ((ppc_cntlzw((u32)rd8(param_2)) >> 5u) & 1u)) & 0x114u;
                wr16(0x817fdfe8u, (u16)r0);
                if (!c0lt) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0xe0003u;
                    a.r[1] = 0x80394d70u;
                    a.r[2] = r0 & 0xffffu;
                    a.r[3] = r6;
                    a.r[4] = 0x80394d70u;
                    a.r[5] = 0x80540120u;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x8028cc84u, &a);
                    r5 = 0u;
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
            }
            r12 = rd32(r31 + 4u);
            if (r12 != 0u) {
                a.r[0] = (u32)rd16(r31 + 0xcu);
                a.r[1] = r30;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                (void)tc_call(r12, &a);
            }
            if (r31 != 0u) {
                wr32(r31 + 4u, 0u);
                wr8(r31 + 0xfu, 0u);
            }
        }
    }
    return;
}
