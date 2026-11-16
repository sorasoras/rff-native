#include "tc_rt.h"

void fn_80292870(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    f1 = tc_callf(0x8000443cu, &a);
    if (param_1 != 0u) {
        r30 = (u32)rd8(param_1 + 0x1cu);
        if ((u32)rd8(0x80571b80u) >= 4u) {
            c0lt = (s32)r30 < 2;
            if (r30 == 2u) {
                r26 = 0x803930ccu;
            } else if (!c0lt) {
                if ((s32)r30 >= 4) {
                    r26 = 0x803930f0u;
                } else {
                    r26 = 0x803930e0u;
                }
            } else {
                c0lt = (s32)r30 < 0;
                if (r30 == 0u) {
                    r26 = 0x803930acu;
                } else if (!c0lt) {
                    r26 = 0x803930bcu;
                } else {
                    r26 = 0x803930f0u;
                }
            }
            a.r[0] = param_2;
            r3 = tc_call(0x80292d10u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x503u;
            a.r[1] = 0x80393108u;
            a.r[2] = r30;
            a.r[3] = r26;
            a.r[4] = r3;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc9cu, &a);
        }
        r28 = param_2 & 0xffu;
        r4 = (r28 << 1u) & 0xfffffffeu;
        r5 = rd32(((((u32)rd8(param_1 + 0x1cu) - 1u) << 2u) & 0xfffffffcu) - 0x7fcb7be8u);
        wr8(param_1 + 0x1cu, rd8(r5 + r4 + 1u));
        r0 = (u32)rd8(r5 + r4);
        if (r0 != 0xcu) {
            r0 = (r0 << 2u) & 0x3fcu;
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(r0 - 0x7fcb7c60u), &a);
        }
        r3 = (u32)rd8(param_1 + 0x1cu);
        if (r30 != r3 && (u32)rd8(0x80571b80u) >= 5u) {
            c0lt = (s32)r30 < 2;
            if (r30 == 2u) {
                r26 = 0x803930ccu;
            } else if (!c0lt) {
                if ((s32)r30 >= 4) {
                    r26 = 0x803930f0u;
                } else {
                    r26 = 0x803930e0u;
                }
            } else {
                c0lt = (s32)r30 < 0;
                if (r30 == 0u) {
                    r26 = 0x803930acu;
                } else if (!c0lt) {
                    r26 = 0x803930bcu;
                } else {
                    r26 = 0x803930f0u;
                }
            }
            c0lt = (s32)r3 < 2;
            if (r3 == 2u) {
                r27 = 0x803930ccu;
            } else if (!c0lt) {
                if ((s32)r3 >= 4) {
                    r27 = 0x803930f0u;
                } else {
                    r27 = 0x803930e0u;
                }
            } else {
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    r27 = 0x803930acu;
                } else if (!c0lt) {
                    r27 = 0x803930bcu;
                } else {
                    r27 = 0x803930f0u;
                }
            }
            a.r[0] = r28;
            r3 = tc_call(0x80292d10u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x504u;
            a.r[1] = 0x8039313cu;
            a.r[2] = r26;
            a.r[3] = r27;
            a.r[4] = r3;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc9cu, &a);
        }
    } else if (rd32(0x8053d94cu) != 0u) {
        c0lt = (s32)param_2 < 5896;
        do {
            if (param_2 == 0x1708u) {
                r30 = (u32)rd8((u32)param_3 + 8u);
                if (r30 == 7u || r30 == 5u || r30 == 9u) {
                    wr8(0x817fdfc8u, 0xdu);
                    wr8(0x817fdfc9u, (u8)rd16((u32)param_3 + 6u));
                } else if (r30 != 0xau && r30 != 1u) {
                    wr8(0x817fdfc9u, (u8)rd16((u32)param_3 + 6u));
                    wr8(0x817fdfc8u, 0xdu);
                }
            } else {
                if (!c0lt) {
                    if (param_2 == 0x170au) {
                        r30 = (u32)rd16((u32)param_3 + 0x10u);
                        if (r30 != 0xbu) {
                            wr8(0x817fdfceu, 0xdu);
                            wr8(0x817fdfcfu, (u8)rd16((u32)param_3 + 6u));
                            break;
                        }
                        a.r[0] = 0x817fdfc8u;
                        a.r[1] = (u32)param_3 + 8u;
                        f1 = tc_callf(0x8028d2a4u, &a);
                        wr8(0x817fdfceu, 9u);
                        wr8(0x817fdfcfu, 0xffu);
                        break;
                    }
                } else {
                    c0lt = (s32)param_2 < 5889;
                    if (param_2 == 0x1701u) {
                        r30 = 3u;
                        wr8(0x817fdfc8u, 0xdu);
                        wr8(0x817fdfc9u, (u8)rd16((u32)param_3 + 6u));
                        break;
                    }
                    if (c0lt && (s32)param_2 >= 5888) {
                        r30 = 2u;
                        a.r[0] = 0x817fdfc8u;
                        a.r[1] = (u32)param_3 + 8u;
                        f1 = tc_callf(0x8028d2a4u, &a);
                        wr8(0x817fdfceu, 9u);
                        wr8(0x817fdfcfu, 0xffu);
                        break;
                    }
                }
                if ((u32)rd8(0x80571b80u) >= 1u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x500u;
                    a.r[1] = 0x80393090u;
                    a.r[2] = (u32)rd16((u32)param_3 + 6u);
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x8028cc6cu, &a);
                }
            }
        } while (0);
        r3 = r30 & 0xffffu;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x817fdfc8u;
            a.r[2] = 0x8053d728u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(0x8053d94cu), &a);
        }
    }
    return;
}
