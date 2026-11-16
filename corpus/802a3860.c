#include "tc_rt.h"

void fn_802a3860(u32 param_1, u32 param_2, s32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r24 = 0, r25 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_3;
    r6 = param_4;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    r7 = 0x80540618u;
    r25 = 1u;
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
        a.r[1] = 0x80395220u;
        a.r[2] = (u32)param_3;
        a.r[3] = param_2;
        a.r[4] = 0x80540618u;
        a.r[5] = param_r8;
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
    r24 = 0u;
    r30 = 0x80540618u;
    do {
        if ((u32)rd8(r30) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r30 + 1u;
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
            if (r3 == 0u) break;
        }
        r24 = r24 + 1u;
        r30 = r30 + 0x34u;
    } while ((s32)r24 < 16);
    if (r24 != 0x10u) {
        r30 = (r24 * 0x34u) - 0x7fabf9e8u;
        if ((u32)param_3 != 0x13u) {
            r5 = (u32)rd8(r30 + 0x10u);
            if (r5 != 0u) {
                if ((u32)rd8(0x80540a19u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x1e0001u;
                    a.r[1] = 0x803952b8u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x8028cc6cu, &a);
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
                r25 = 0u;
            }
        } else {
            if ((u32)rd16(r30 + 0x14u) == 0u) {
                if ((u32)rd8(0x80540a19u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x1e0001u;
                    a.r[1] = 0x80395254u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
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
                r25 = 0u;
            }
            r5 = (u32)rd8(r30 + 0x10u);
            if (r5 != 2u) {
                if ((u32)rd8(0x80540a19u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x1e0001u;
                    a.r[1] = 0x80395288u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x8028cc6cu, &a);
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
                r25 = 0u;
            }
        }
        if (r25 != 0u) {
            if ((u32)param_3 != 0x11u) {
                wr8(r30 + 0x10u, 3u);
                wr16(r30 + 0x16u, (u16)param_2);
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = param_1;
                a.r[1] = param_4;
                a.r[2] = param_2;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802a59d4u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_2;
                a.r[1] = 0x8054095cu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802a5b64u, &a);
                if ((u32)rd8(0x80540a19u) >= 4u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x1e0003u;
                    a.r[1] = 0x803952e8u;
                    a.r[2] = (u32)param_3;
                    a.r[3] = param_2;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc84u, &a);
                }
            } else {
                wr8(r30 + 0x11u, 0u);
                wr16(r30 + 0x14u, (u16)param_2);
                wr8(r30 + 0x12u, (u8)param_4);
                wr16(r30 + 0x1au, 0x100u);
                wr8(r30 + 0x10u, 6u);
                a.r[0] = r30 + 1u;
                a.r[1] = 0x11u;
                a.r[2] = 0u;
                a.r[3] = 6u;
                a.r[4] = 0u - (((u32)rd16(r30 + 8u) >> 0xfu) & 1u) + 2u;
                a.r[5] = 0x802a3730u;
                a.r[6] = r30;
                (void)tc_call(0x8029b4c0u, &a);
            }
        } else {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = param_1;
            a.r[1] = param_4;
            a.r[2] = param_2;
            a.r[3] = 4u;
            a.r[4] = 0u;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x802a59d4u, &a);
        }
    } else {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = param_1;
        a.r[1] = param_4;
        a.r[2] = param_2;
        a.r[3] = 3u;
        a.r[4] = 0u;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x802a59d4u, &a);
    }
    return;
}
