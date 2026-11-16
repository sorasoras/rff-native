#include "tc_rt.h"

void fn_802a287c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = 0u;
    wr32(0x817fdff0u, 0u);
    wr16(0x817fdfd8u, 2u);
    r4 = rd32(0x805409a0u);
    wr16(0x817fdfdcu, 0x1124u);
    wr8(0x80540998u, 0u);
    if ((u32)param_1 == 0u) {
        a.r[0] = r4;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0u;
        r3 = tc_call(0x802b2058u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = 0x805409a4u;
            a.r[1] = 0u;
            a.r[2] = 0x74u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = r31;
            a.r[1] = 0x206u;
            r3 = tc_call(0x802b1f64u, &a);
            f1 = tc_lastf();
            if (r3 != 0u && (u32)((s32)rd16(r3 + 6u) >> 12) == 6u) {
                r3 = rd32(r3 + 8u);
                if (r3 != 0u && (u32)((s32)rd16(r3 + 6u) >> 12) == 6u) {
                    r3 = rd32(r3 + 8u);
                    if (r3 != 0u) {
                        r4 = rd32(r3);
                        if (r4 != 0u) {
                            r3 = (u32)rd16(r4 + 6u);
                            if ((u32)((s32)r3 >> 12) == 4u) {
                                r0 = r3 & 0xfffu;
                                wr16(0x80540a0cu, (u16)r0);
                                if (r0 != 0u) {
                                    wr32(0x80540a10u, r4 + 8u);
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x204u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u && (u32)rd8(r3 + 8u) != 0u) {
                                    r29 = 1u;
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x205u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u && (u32)rd8(r3 + 8u) != 0u) {
                                    r29 = (r29 | 4u) & 0xffffu;
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x20du;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u && (u32)rd8(r3 + 8u) != 0u) {
                                    r29 = (r29 | 2u) & 0xffffu;
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x208u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u && (u32)rd8(r3 + 8u) != 0u) {
                                    r29 = (r29 | 8u) & 0xffffu;
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x209u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u && (u32)rd8(r3 + 8u) != 0u) {
                                    r29 = (r29 | 0x10u) & 0xffffu;
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x20au;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u && (u32)rd8(r3 + 8u) != 0u) {
                                    r29 = (r29 | 0x20u) & 0xffffu;
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x100u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 == 0u) {
                                    wr8(0x805409a4u, 0u);
                                } else {
                                    r28 = (u32)rd16(r3 + 6u) & 0xfffu;
                                    if (r28 >= 0x20u) {
                                        a.r[0] = 0x805409a4u;
                                        a.r[1] = r3 + 8u;
                                        a.r[2] = 0x1fu;
                                        (void)tc_call(0x80004338u, &a);
                                        wr8(0x805409c4u, 0u);
                                    } else {
                                        a.r[0] = 0x805409a4u;
                                        a.r[1] = r3 + 8u;
                                        a.r[2] = r28;
                                        (void)tc_call(0x80004338u, &a);
                                        wr8(r28 - 0x7fabf65cu, 0u);
                                    }
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x101u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 == 0u) {
                                    wr8(0x805409c4u, 0u);
                                } else {
                                    r28 = (u32)rd16(r3 + 6u) & 0xfffu;
                                    if (r28 >= 0x20u) {
                                        a.r[0] = 0x805409c4u;
                                        a.r[1] = r3 + 8u;
                                        a.r[2] = 0x1fu;
                                        (void)tc_call(0x80004338u, &a);
                                        wr8(0x805409e4u, 0u);
                                    } else {
                                        a.r[0] = 0x805409c4u;
                                        a.r[1] = r3 + 8u;
                                        a.r[2] = r28;
                                        (void)tc_call(0x80004338u, &a);
                                        wr8(r28 - 0x7fabf63cu, 0u);
                                    }
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x102u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 == 0u) {
                                    wr8(0x805409e4u, 0u);
                                } else {
                                    r28 = (u32)rd16(r3 + 6u) & 0xfffu;
                                    if (r28 >= 0x20u) {
                                        a.r[0] = 0x805409e4u;
                                        a.r[1] = r3 + 8u;
                                        a.r[2] = 0x1fu;
                                        (void)tc_call(0x80004338u, &a);
                                        wr8(0x80540a04u, 0u);
                                    } else {
                                        a.r[0] = 0x805409e4u;
                                        a.r[1] = r3 + 8u;
                                        a.r[2] = r28;
                                        (void)tc_call(0x80004338u, &a);
                                        wr8(r28 - 0x7fabf61cu, 0u);
                                    }
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x200u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u) {
                                    wr16(0x80540a04u, rd16(r3 + 8u));
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x203u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u) {
                                    wr8(0x80540a09u, rd8(r3 + 8u));
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x202u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u) {
                                    wr8(0x80540a08u, rd8(r3 + 8u));
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x201u;
                                r3 = tc_call(0x802b1f64u, &a);
                                if (r3 != 0u) {
                                    wr16(0x80540a06u, rd16(r3 + 8u));
                                }
                                a.r[0] = r31;
                                a.r[1] = 0x20cu;
                                r3 = tc_call(0x802b1f64u, &a);
                                f1 = tc_lastf();
                                if (r3 != 0u) {
                                    r29 = (r29 | 0x40u) & 0xffffu;
                                    wr16(0x80540a0au, rd16(r3 + 8u));
                                }
                                r12 = rd32(0x8054099cu);
                                wr32(0x80540a14u, r31);
                                a.r[0] = 0u;
                                a.r[1] = r29 & 0xffffu;
                                a.r[2] = 0x805409a4u;
                                a.r[3] = 0x80540618u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                                return;
                            }
                        }
                    }
                }
            }
            a.r[0] = 0xdu;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(0x8054099cu), &a);
        } else {
            a.r[0] = 0xcu;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(0x8054099cu), &a);
        }
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(0x8054099cu), &a);
    }
    return;
}
