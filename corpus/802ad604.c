#include "tc_rt.h"

void fn_802ad604(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r28 = 0, r29 = 0;
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
    r0 = param_r3 - 0x40u;
    if ((s32)r0 >= 10) {
        if ((u32)rd8(0x8054161cu) >= 1u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x90000u;
            a.r[1] = 0x80397048u;
            a.r[2] = param_r3;
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
        r28 = 0u;
    } else {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r28 = rd32(r0 - 0x7fabedbcu);
        if (r28 != 0u) {
            r6 = (u32)rd16(r28 + 0x68u);
            if (r6 != param_r3) {
                if ((u32)rd8(0x8054161cu) >= 2u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x90001u;
                    a.r[1] = 0x80397064u;
                    a.r[2] = param_r3;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x8028cc84u, &a);
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
            }
        }
    }
    if (r28 == 0u) {
        if ((u32)rd8(0x8054161cu) >= 2u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x90001u;
            a.r[1] = 0x80397110u;
            a.r[2] = param_r3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        a.r[0] = param_r4;
        (void)tc_call(0x8028a35cu, &a);
    } else {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = r28;
        a.r[1] = 0x80541208u;
        a.r[2] = param_r4;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x802b07b4u, &a);
        f1 = tc_lastf();
        r4 = r3 & 0xffu;
        r29 = r3;
        if (r4 == 0x32u) {
            a.r[0] = param_r4;
            (void)tc_call(0x8028a35cu, &a);
        } else {
            r0 = (u32)rd8(0x80541208u);
            if (r0 == 0u) {
                if (r4 == 4u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r28;
                    a.r[1] = param_r4;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b0d28u, &a);
                    return;
                }
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = r28;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802ad9f4u, &a);
                a.r[0] = param_r4;
                (void)tc_call(0x8028a35cu, &a);
            } else {
                a.r[0] = r28;
                a.r[1] = r0;
                r3 = tc_call(0x802acd40u, &a);
                f1 = tc_lastf();
                r27 = r3;
                if (r3 == 0u || rd32(r3 + 0x6cu) == 0u) {
                    if ((r29 & 0xffu) != 0u) {
                        r4 = (u32)rd8(r28 + 0x6du);
                        if (r4 == 0u || (u32)rd8(0x8054120au) != 0u) {
                            if (r4 != 0u || (u32)rd8(0x8054120au) == 0u) {
                                a.r[0] = param_r4;
                                (void)tc_call(0x8028a35cu, &a);
                                return;
                            }
                        }
                        a.r[0] = r28;
                        a.r[1] = (u32)rd8(0x80541208u);
                        a.r[2] = (u32)rd8(0x8054120cu);
                        (void)tc_call(0x802afe64u, &a);
                        a.r[0] = param_r4;
                        (void)tc_call(0x8028a35cu, &a);
                        return;
                    }
                    a.r[0] = (u32)rd8(0x80541208u);
                    r3 = tc_call(0x802acd94u, &a);
                    f1 = tc_lastf();
                    r27 = r3;
                    if (r3 == 0u) {
                        a.r[0] = r28;
                        a.r[1] = (u32)rd8(0x80541208u);
                        a.r[2] = 1u;
                        (void)tc_call(0x802afe64u, &a);
                        a.r[0] = param_r4;
                        (void)tc_call(0x8028a35cu, &a);
                        return;
                    }
                    wr8(r28 + (u32)rd8(0x80541208u) + 0x24u, rd8(r3));
                    wr32(r3 + 0x6cu, r28);
                }
                r4 = r29 & 0xffu;
                if (r4 == 4u) {
                    if ((u32)rd16(param_r4 + 2u) != 0u) {
                        r3 = r3;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = param_r4;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        f1 = tc_callf(0x802ae638u, &a);
                    } else {
                        a.r[0] = param_r4;
                        f1 = tc_callf(0x8028a35cu, &a);
                    }
                    r4 = (u32)rd8(0x8054120du);
                    if (r4 == 0u) {
                        return;
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r27;
                    a.r[1] = r4;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b1a00u, &a);
                } else {
                    r3 = r3;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802ae638u, &a);
                    a.r[0] = param_r4;
                    (void)tc_call(0x8028a35cu, &a);
                }
            }
        }
    }
    return;
}
