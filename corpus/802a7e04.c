#include "tc_rt.h"

void fn_802a7e04(u32 param_1, u32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r26 = 0, r27 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    (void)param_2;
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
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_3 != 0u) {
        if ((u32)rd16(param_1 + 0x4cu) >= (u32)rd16(param_1 + 0x3au) && (u32)rd8(param_1 + 0x41u) == 0u) {
            r26 = rd32(param_1 + 8u);
            while (r26 != 0u) {
                if ((u32)rd8(0x80540a20u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80001u;
                    a.r[1] = 0x8039665cu;
                    a.r[2] = (u32)rd16(r26 + 0x14u);
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
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
                if (rd32(rd32(r26 + 0x30u) + 0x28u) != 0u) {
                    if ((u32)rd8(0x80540a20u) >= 3u) {
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        a.f[3] = f4;
                        a.f[4] = f5;
                        a.f[5] = f6;
                        a.f[6] = f7;
                        a.f[7] = f8;
                        a.r[0] = 0x80002u;
                        a.r[1] = 0x80396688u;
                        a.r[2] = (u32)rd16(r26 + 0x14u);
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
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
                    r5 = rd32(r26 + 0x30u);
                    a.r[0] = (u32)rd16(r26 + 0x14u);
                    a.r[1] = 1u;
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
                    f1 = tc_callf(rd32(r5 + 0x28u), &a);
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
                r26 = rd32(r26 + 8u);
            }
            wr8(param_1 + 0x41u, 1u);
        }
        if ((u32)rd16(param_1 + 0x4cu) > (u32)rd16(param_1 + 0x3eu)) {
            a.r[0] = (u32)param_3;
            f1 = tc_callf(0x8028a35cu, &a);
            if ((u32)rd8(0x80540a20u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80001u;
                a.r[1] = 0x803966c8u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
        } else {
            wr16((u32)param_3 + 6u, 0u);
            a.r[0] = param_1 + 0x44u;
            a.r[1] = (u32)param_3;
            (void)tc_call(0x8028a77cu, &a);
        }
    }
    if ((u32)rd8(param_1 + 0x40u) == 0u) {
        a.r[0] = param_1 + 0x2au;
        a.r[1] = 0x817fdfd8u;
        r3 = tc_call(0x80298dbcu, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) != 0u || (u32)rd8(0x817fdfd8u) != 3u || (u32)rd16(param_1 + 0x4cu) == 0u) {
            while ((u32)rd16(0x80540a24u) != 0u && (u32)rd16(param_1 + 0x36u) != 0u) {
                r3 = rd32(param_1 + 0x44u);
                if (r3 == 0u || (u32)rd16(r3 + 6u) != 0u) break;
                if ((u32)rd8(param_1 + 0x40u) != 0u) {
                    return;
                }
                a.r[0] = param_1 + 0x44u;
                r3 = tc_call(0x8028a9f8u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) break;
                a.r[0] = param_1;
                a.r[1] = r3;
                r3 = tc_call(0x802a7cfcu, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) break;
            }
            if ((u32)rd8(param_1 + 0x40u) == 0u) {
                if ((u32)rd16(param_1 + 0x4cu) != 0u && (u32)rd16(param_1 + 0x36u) != 0u) {
                    a.r[0] = param_1 + 0x10u;
                    a.r[1] = 2u;
                    a.r[2] = 2u;
                    f1 = tc_callf(0x8028d220u, &a);
                }
                if ((u32)rd8(param_1 + 0x41u) != 0u && (u32)rd16(param_1 + 0x4cu) <= (u32)rd16(param_1 + 0x3cu)) {
                    r27 = rd32(param_1 + 8u);
                    wr8(param_1 + 0x41u, 0u);
                    while (r27 != 0u) {
                        if (rd32(rd32(r27 + 0x30u) + 0x28u) != 0u) {
                            if ((u32)rd8(0x80540a20u) >= 3u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x80002u;
                                a.r[1] = 0x803966e8u;
                                a.r[2] = (u32)rd16(r27 + 0x14u);
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                f1 = tc_callf(0x8028cc6cu, &a);
                            }
                            r5 = rd32(r27 + 0x30u);
                            a.r[0] = (u32)rd16(r27 + 0x14u);
                            a.r[1] = 0u;
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
                            f1 = tc_callf(rd32(r5 + 0x28u), &a);
                            if ((u32)rd8(param_1 + 0x41u) != 0u) break;
                        }
                        r27 = rd32(r27 + 8u);
                    }
                }
            }
        } else {
            wr8(0x817fdfe4u, 0u);
            a.r[0] = 0x80u;
            a.r[1] = param_1 + 0x2au;
            a.r[2] = 0x817fdfdcu;
            (void)tc_call(0x80298becu, &a);
            a.r[0] = param_1 + 0x10u;
            a.r[1] = 2u;
            a.r[2] = 1u;
            (void)tc_call(0x8028d220u, &a);
        }
    }
    return;
}
