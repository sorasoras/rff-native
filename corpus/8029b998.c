#include "tc_rt.h"

void fn_8029b998(u32 param_1, u32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r28 = 0;
    u32 r29 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_3;
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
    if (param_1 == 0u) {
        r4 = 0u;
        r31 = 0x8053f888u;
        ctr = 4u;
        while (((u32)rd8(r31 + 0x76u) & 0x80u) == 0u || (u32)rd8(r31 + 0x7fu) != 3u) {
            r0 = (u32)rd8(r31 + 0xfeu);
            r4 = r4 + 1u;
            r31 = r31 + 0x88u;
            r0 = r0 & 0x80u;
            if (r0 != 0u && (u32)rd8(r31 + 0x7fu) == 3u) break;
            r0 = (u32)rd8(r31 + 0xfeu);
            r4 = r4 + 1u;
            r31 = r31 + 0x88u;
            r0 = r0 & 0x80u;
            if (r0 != 0u && (u32)rd8(r31 + 0x7fu) == 3u) break;
            r0 = (u32)rd8(r31 + 0xfeu);
            r4 = r4 + 1u;
            r31 = r31 + 0x88u;
            r0 = r0 & 0x80u;
            if (r0 != 0u && (u32)rd8(r31 + 0x7fu) == 3u) break;
            r4 = r4 + 1u;
            r31 = r31 + 0x88u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
        if (r4 == 0x10u) {
            r31 = 0u;
        }
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x80295360u, &a);
        f1 = tc_lastf();
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
        r31 = r3;
    }
    if ((u32)rd8(0x80540118u) >= 4u) {
        if (r31 == 0u) {
            r6 = 0u;
        } else {
            r6 = (u32)rd8(r31 + 0x7fu);
        }
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x803947d4u;
        a.r[2] = (u32)param_3;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
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
    if (r31 != 0u) {
        if ((u32)param_3 == 0u) {
            a.r[0] = r31 + 0x35u;
            a.r[1] = param_2;
            a.r[2] = 0x40u;
            f1 = tc_callf(0x80004338u, &a);
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
            r29 = 0x8053d958u;
            r28 = 0u;
            wr8(r31 + 0x76u, (u8)((u32)rd8(r31 + 0x76u) | 8u));
            do {
                r12 = rd32(r29 + 0x192cu);
                if (r12 != 0u) {
                    a.r[0] = param_1;
                    a.r[1] = r31 + 0x22u;
                    a.r[2] = r31 + 0x35u;
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
                r28 = r28 + 1u;
                r29 = r29 + 4u;
            } while ((s32)r28 < 2);
        }
        if ((u32)rd8(r31 + 0x82u) != 0u) {
            if (((u32)rd8(r31 + 0x81u) & 0x40u) != 0u && (u32)rd8(r31 + 0x85u) == 0u) {
                return;
            }
            wr8(r31 + 0x82u, 0u);
            r12 = rd32(0x8053f26cu);
            if (r12 != 0u) {
                a.r[0] = r31 + 0x1cu;
                a.r[1] = r31 + 0x22u;
                a.r[2] = r31 + 0x35u;
                a.r[3] = r31 + 0x25u;
                a.r[4] = (u32)rd8(r31 + 0x83u);
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
                f1 = tc_callf(r12, &a);
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
            r28 = 0u;
            r29 = 0x8053d958u;
            do {
                r12 = rd32(r29 + 0x1924u);
                if (r12 != 0u) {
                    a.r[0] = r31 + 0x1cu;
                    a.r[1] = r31 + 0x22u;
                    a.r[2] = r31 + 0x35u;
                    a.r[3] = r31 + 0x25u;
                    a.r[4] = (u32)rd8(r31 + 0x83u);
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
                    f1 = tc_callf(r12, &a);
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
                r28 = r28 + 1u;
                r29 = r29 + 4u;
            } while ((s32)r28 < 2);
        }
        r3 = (u32)rd8(r31 + 0x81u);
        if ((r3 & 0x40u) == 0u || ((u32)rd8(r31 + 0x76u) & 2u) == 0u) {
            if ((u32)rd8(r31 + 0x7fu) == 3u) {
                wr8(r31 + 0x7fu, 0u);
                if ((u32)param_3 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = r31;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    r3 = tc_call(0x8029cfb0u, &a);
                    f1 = tc_lastf();
                    r5 = r3 & 0xffu;
                    if (r5 != 1u) {
                        r12 = rd32(r31 + 4u);
                        if (r12 != 0u) {
                            a.r[0] = r31 + 0x1cu;
                            a.r[1] = rd32(r31 + 8u);
                            a.r[2] = r5;
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
                            (void)tc_call(r12, &a);
                            wr32(r31 + 4u, 0u);
                        }
                    }
                } else {
                    r12 = rd32(r31 + 4u);
                    if (r12 != 0u) {
                        a.r[0] = r31 + 0x1cu;
                        a.r[1] = rd32(r31 + 8u);
                        a.r[2] = 0xau;
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
                        wr32(r31 + 4u, 0u);
                    }
                }
            }
        } else {
            wr8(r31 + 0x81u, (u8)(r3 & 0xffffffafu));
            a.r[0] = (u32)rd16(r31 + 0x18u);
            a.r[1] = 0x13u;
            (void)tc_call(0x8029fdd4u, &a);
        }
    }
    return;
}
