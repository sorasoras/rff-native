#include "tc_rt.h"

void fn_802a4e18(u32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0, r31 = 0;
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
    r9 = 0u;
    r31 = 0u;
    r7 = (u32)param_2 + (u32)rd16((u32)param_2 + 4u);
    ctr = 4u;
    do {
        r0 = (r31 & 0xffu) * 0x34u;
        r8 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r8 + 0x10u) != 0u && (param_1 == (u32)rd16(r8 + 0x14u) || param_1 == (u32)rd16(r8 + 0x16u))) break;
        r31 = r31 + 1u;
        r0 = (r31 & 0xffu) * 0x34u;
        r8 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r8 + 0x10u) != 0u && (param_1 == (u32)rd16(r8 + 0x14u) || param_1 == (u32)rd16(r8 + 0x16u))) break;
        r31 = r31 + 1u;
        r0 = (r31 & 0xffu) * 0x34u;
        r8 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r8 + 0x10u) != 0u && (param_1 == (u32)rd16(r8 + 0x14u) || param_1 == (u32)rd16(r8 + 0x16u))) break;
        r31 = r31 + 1u;
        r0 = (r31 & 0xffu) * 0x34u;
        r8 = r0 - 0x7fabf9e8u;
        r0 = (u32)rd8(r0 - 0x7fabf9e8u);
        if (r0 != 0u && (u32)rd8(r8 + 0x10u) != 0u && (param_1 == (u32)rd16(r8 + 0x14u) || param_1 == (u32)rd16(r8 + 0x16u))) break;
        r31 = r31 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = r31 & 0xffu;
    if (r0 != 0x10u) {
        r0 = r0 * 0x34u;
        r9 = r0 - 0x7fabf9d8u;
    }
    if (r9 != 0u) {
        r7 = (u32)rd8(r7 + 8u);
        r0 = (r7 >> 4u) & 0xfu;
        r6 = (u32)rd16((u32)param_2 + 2u) - 1u;
        r8 = r7 & 0xfu;
        r3 = (u32)rd16((u32)param_2 + 4u) + 1u;
        c0lt = (s32)r0 < 10;
        wr16((u32)param_2 + 2u, (u16)r6);
        r7 = r7 & 3u;
        wr16((u32)param_2 + 4u, (u16)r3);
        if (r0 == 0xau) {
            r3 = r31 & 0xffu;
            r4 = 5u;
            if (param_1 == (u32)rd16((r3 * 0x34u) - 0x7fabf9d2u)) {
                r4 = 3u;
            }
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r7;
            a.r[3] = (u32)param_2;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = param_r10;
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            (void)tc_call(rd32(0x80540958u), &a);
        } else {
            if (!c0lt) {
                if ((s32)r0 < 12) {
                    r3 = r31 & 0xffu;
                    r4 = 6u;
                    if (param_1 == (u32)rd16((r3 * 0x34u) - 0x7fabf9d2u)) {
                        r4 = 4u;
                    }
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r7;
                    a.r[3] = (u32)param_2;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    (void)tc_call(rd32(0x80540958u), &a);
                    return;
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    if (r8 == 5u) {
                        r29 = ((r31 & 0xffu) * 0x34u) - 0x7fabf9e8u;
                        if ((u32)rd8(0x80540a19u) >= 4u) {
                            a.f[0] = param_f1;
                            a.f[1] = param_f2;
                            a.f[2] = param_f3;
                            a.f[3] = param_f4;
                            a.f[4] = param_f5;
                            a.f[5] = param_f6;
                            a.f[6] = param_f7;
                            a.f[7] = param_f8;
                            a.r[0] = 0x1e0003u;
                            a.r[1] = 0x8039520cu;
                            a.r[2] = param_1;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.r[6] = r9;
                            a.r[7] = param_r10;
                            f1 = tc_callf(0x8028cc54u, &a);
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
                        if ((u32)rd16(r29 + 0x14u) != 0u || (u32)rd16(r29 + 0x16u) != 0u) {
                            wr8(r29 + 0x10u, 5u);
                            r3 = (u32)rd16(r29 + 0x16u);
                            if (r3 != 0u) {
                                a.f[0] = f1;
                                a.f[1] = f2;
                                a.f[2] = f3;
                                a.f[3] = f4;
                                a.f[4] = f5;
                                a.f[5] = f6;
                                a.f[6] = f7;
                                a.f[7] = f8;
                                a.r[0] = r3;
                                a.r[3] = r6;
                                a.r[4] = r7;
                                a.r[5] = r8;
                                a.r[6] = r9;
                                a.r[7] = r10;
                                f1 = tc_callf(0x802a5cecu, &a);
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
                            r3 = (u32)rd16(r29 + 0x14u);
                            if (r3 != 0u) {
                                a.f[0] = f1;
                                a.f[1] = f2;
                                a.f[2] = f3;
                                a.f[3] = f4;
                                a.f[4] = f5;
                                a.f[5] = f6;
                                a.f[6] = f7;
                                a.f[7] = f8;
                                a.r[0] = r3;
                                a.r[3] = r6;
                                a.r[4] = r7;
                                a.r[5] = r8;
                                a.r[6] = r9;
                                a.r[7] = r10;
                                f1 = tc_callf(0x802a5cecu, &a);
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
                        } else {
                            wr8(r29 + 0x10u, 0u);
                        }
                        a.r[0] = r31 & 0xffu;
                        a.r[1] = 8u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
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
                        (void)tc_call(rd32(0x80540958u), &a);
                    }
                    a.r[0] = (u32)param_2;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                }
                if (c0lt && (s32)r0 >= 0) {
                    a.r[0] = r31 & 0xffu;
                    a.r[1] = 7u;
                    a.r[2] = r8;
                    a.r[3] = 0u;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = param_r10;
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    (void)tc_call(rd32(0x80540958u), &a);
                    a.r[0] = (u32)param_2;
                    (void)tc_call(0x8028a35cu, &a);
                    return;
                }
            }
            a.r[0] = (u32)param_2;
            (void)tc_call(0x8028a35cu, &a);
        }
    } else {
        if ((u32)rd8(0x80540a19u) >= 2u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x1e0001u;
            a.r[1] = 0x80395580u;
            a.r[2] = param_1;
            a.r[3] = 0x80540618u;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
        a.r[0] = (u32)param_2;
        (void)tc_call(0x8028a35cu, &a);
    }
    return;
}
