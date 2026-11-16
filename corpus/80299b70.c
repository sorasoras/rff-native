#include "tc_rt.h"

void fn_80299b70(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r5 = param_3;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r6 = 0x8053d958u;
    r28 = 0u;
    r27 = 0x8053f1acu;
    for (;;) {
        r3 = (u32)rd16(r27 + 8u);
        if ((r3 == 1u && (u32)rd8(r27 + 0xdu) != 0u) || r3 == 3u) {
            a.r[0] = r27 + 0x28u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
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
            if (r3 == 0u) {
                fl_ = 1u;
                break;
            }
        }
        r28 = r28 + 1u;
        r27 = r27 + 0x34u;
        if (r28 >= 3u) {
            if (rd32(0x8053f1a8u) != 0u) {
                r28 = 0x8053f1acu;
                r27 = 0u;
                ctr = 3u;
                do {
                    if ((u32)rd16(r28 + 8u) == 0u) {
                        wr8(r28 + 0xcu, 0u);
                        wr16(r28 + 8u, 1u);
                        wr8(r28 + 0x2eu, (u8)param_3);
                        a.r[0] = r28 + 0x28u;
                        a.r[1] = param_1;
                        a.r[2] = 6u;
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
                        wr8(r28 + 0xdu, 1u);
                        break;
                    }
                    r27 = r27 + 1u;
                    r28 = r28 + 0x34u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r3 = r27 & 0xffffu;
                if (r3 < 3u) {
                    a.r[0] = r3;
                    a.r[1] = 0x8053d958u;
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
                    (void)tc_call(rd32(0x8053f1a8u), &a);
                    return;
                }
            }
            if ((u32)rd8(0x80540118u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0xd0001u;
                a.r[1] = 0x8039402cu;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                (void)tc_call(0x8028cc54u, &a);
            }
            a.r[0] = 3u;
            a.r[1] = 0xdu;
            a.r[2] = param_1;
            a.r[3] = 0u;
            (void)tc_call(0x80299808u, &a);
            return;
        }
    }
    if (fl_ == 1u) {
        fl_ = 0u;
    }
    wr8(r27 + 0xdu, 1u);
    wr8(r27 + 0x2eu, (u8)param_3);
    a.r[0] = r27 + 0x28u;
    a.r[1] = param_1;
    a.r[2] = 6u;
    (void)tc_call(0x80004338u, &a);
    if (rd32(r27 + 0x10u) != 0u) {
        a.r[0] = 0x817fdfdau;
        a.r[1] = param_1;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = 0x817fdfe0u;
        a.r[1] = param_2;
        a.r[2] = 3u;
        f1 = tc_callf(0x80004338u, &a);
        wr8(0x817fdfe3u, (u8)param_3);
        wr16(r27 + 8u, 2u);
        r12 = rd32(r27 + 0x10u);
        wr16(0x817fdfd8u, (u16)r28);
        a.r[0] = 2u;
        a.r[1] = 0x817fdfd8u;
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
        (void)tc_call(r12, &a);
        return;
    }
    a.r[0] = r28 & 0xffffu;
    a.r[1] = 0u;
    a.r[2] = param_1;
    a.r[3] = 0u;
    (void)tc_call(0x80299808u, &a);
    return;
}
