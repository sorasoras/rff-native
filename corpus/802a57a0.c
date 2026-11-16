#include "tc_rt.h"

u32 fn_802a57a0(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
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
    if ((u32)rd8(0x80540a20u) >= 3u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80002u;
        a.r[1] = 0x803956c0u;
        a.r[2] = param_1;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc6cu, &a);
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
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
        a.r[1] = 0x803956e0u;
        a.r[2] = (u32)rd8(param_2);
        a.r[3] = (u32)rd8(param_2 + 1u);
        a.r[4] = (u32)rd8(param_2 + 2u);
        a.r[5] = (u32)rd8(param_2 + 3u);
        a.r[6] = (u32)rd8(param_2 + 4u);
        a.r[7] = (u32)rd8(param_2 + 5u);
        (void)tc_call(0x8028cce4u, &a);
    }
    r3 = tc_call(0x80295814u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) == 0u) {
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
            a.r[1] = 0x80395718u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x802aaf40u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 == 0u) {
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
                a.r[1] = 0x8039573cu;
                a.r[2] = param_1;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
            r3 = 0u;
        } else {
            a.r[0] = param_2;
            r3 = tc_call(0x802a99acu, &a);
            f1 = tc_lastf();
            r29 = r3;
            if (r3 == 0u) {
                a.r[0] = param_2;
                r3 = tc_call(0x802a97d8u, &a);
                f1 = tc_lastf();
                r29 = r3;
                if (r3 == 0u) {
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
                        a.r[1] = 0x8039576cu;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = r3;
                r3 = tc_call(0x802ab33cu, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    r3 = 0u;
                    return r3;
                }
            }
            if (rd32(r29 + 4u) == 5u) {
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
                    a.r[1] = 0x80395790u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                r3 = 0u;
            } else {
                a.r[0] = r29;
                r3 = tc_call(0x802aabd8u, &a);
                f1 = tc_lastf();
                r28 = r3;
                if (r3 == 0u) {
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
                        a.r[1] = 0x803957c8u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    r3 = 0u;
                } else {
                    wr32(r3 + 0x30u, r30);
                    if (rd32(r29 + 4u) == 4u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r3;
                        a.r[1] = 0x14u;
                        a.r[2] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        f1 = tc_callf(0x802a6140u, &a);
                    }
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
                        a.r[1] = 0x803957ecu;
                        a.r[2] = (u32)rd16(r28 + 0x14u);
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc6cu, &a);
                    }
                    r3 = (u32)rd16(r28 + 0x14u);
                }
            }
        }
    }
    return r3;
}
