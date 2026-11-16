#include "tc_rt.h"

void fn_80301544(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdd90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1 + 4u);
    a.r[1] = param_2;
    a.r[2] = 0x817fdda0u;
    r3 = tc_call(0x80302578u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r26 = rd32(0x817fdda8u);
        if (r26 == 0u) {
            a.r[0] = rd32(param_1 + 4u);
            a.r[1] = param_2;
            a.r[2] = 0u;
            a.r[3] = 0x817fdd98u;
            r3 = tc_call(0x80302678u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(param_1 + 4u);
                a.r[1] = rd32(0x817fdd98u);
                a.r[2] = 0x817fddc8u;
                r3 = tc_call(0x80302130u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(param_1 + 4u);
                    a.r[1] = rd32(0x817fdd98u);
                    a.r[2] = rd32(0x817fdd9cu);
                    a.r[3] = 0x817fddb0u;
                    r3 = tc_call(0x80302240u, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        r26 = rd32(0x817fddccu);
                        r25 = rd32(0x817fddb8u);
                        r27 = rd32(0x817fddd0u) + rd32(0x817fddb4u);
                        if (r26 == 0u) {
                            a.r[0] = param_1;
                            a.r[1] = param_3;
                            a.r[2] = param_4;
                            a.r[3] = r27;
                            a.r[4] = r25;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(param_1) + 0x18u), &a);
                        } else {
                            if ((u32)rd8(r26) != 0x2fu) {
                                a.r[0] = r26;
                                r3 = tc_call(0x802550d4u, &a);
                                r28 = r3;
                                a.r[0] = param_1 + 8u;
                                r3 = tc_call(0x802550d4u, &a);
                                if ((r28 + r3) >= 0x100u) {
                                    return;
                                }
                                a.r[0] = 0x817fdde0u;
                                a.r[1] = param_1 + 8u;
                                a.r[2] = r3 + 1u;
                                (void)tc_call(0x8025bdf4u, &a);
                                a.r[0] = 0x817fdde0u;
                                a.r[1] = r26;
                                a.r[2] = r28 + 1u;
                                f1 = tc_callf(0x8025be64u, &a);
                                r26 = 0x817fdde0u;
                            }
                            a.r[0] = param_1;
                            a.r[1] = param_3;
                            a.r[2] = param_4;
                            a.r[3] = r26;
                            a.r[4] = r27;
                            a.r[5] = r25;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
                        }
                    }
                }
            }
        } else {
            r27 = rd32(0x817fdda0u);
            if ((u32)rd8(r26) != 0x2fu) {
                a.r[0] = r26;
                r3 = tc_call(0x802550d4u, &a);
                r28 = r3;
                a.r[0] = param_1 + 8u;
                r3 = tc_call(0x802550d4u, &a);
                if ((r28 + r3) >= 0x100u) {
                    return;
                }
                a.r[0] = 0x817fdee0u;
                a.r[1] = param_1 + 8u;
                a.r[2] = r3 + 1u;
                (void)tc_call(0x8025bdf4u, &a);
                a.r[0] = 0x817fdee0u;
                a.r[1] = r26;
                a.r[2] = r28 + 1u;
                f1 = tc_callf(0x8025be64u, &a);
                r26 = 0x817fdee0u;
            }
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = param_4;
            a.r[3] = r26;
            a.r[4] = 0u;
            a.r[5] = r27;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
        }
    }
    return;
}
