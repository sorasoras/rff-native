#include "tc_rt.h"

void fn_803089b4(u32 param_1, u32 param_2, s32 param_3, u32 param_4, s32 param_5, s32 param_6, s32 param_7)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r15 = 0, r16 = 0, r17 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_2 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = (u32)param_3;
        a.r[3] = param_4;
        a.r[4] = (u32)param_5;
        a.r[5] = (u32)param_6;
        a.r[6] = (u32)param_7;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 8u), &a);
        for (;;) {
            if (r3 == 0u) {
                r0 = 0u;
                break;
            }
            if (r3 == 0x80571cf8u) {
                r0 = 1u;
                break;
            }
            r3 = rd32(r3);
        }
        if (r0 == 0u) {
            r3 = 0u;
        } else {
            r3 = param_2;
        }
    }
    if (r3 != 0u) {
        wr32(r3 + 0x68u, 1u);
    }
    a.r[0] = 0x80563da0u;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = 0x8055fda0u;
    a.r[1] = 0x4000u;
    f1 = tc_callf(0x8022770cu, &a);
    r26 = 0u;
    r27 = (u32)param_3 + (u32)rd16(param_1 + 0xecu);
    for (;;) {
        r7 = rd32(param_1 + 0x82cu);
        if ((s32)r26 >= (s32)r7) {
            if ((u32)param_7 != 0u && ((ppc_cntlzw(rd32(param_1 + 0xdcu) - 3u) >> 5u) & 0x7ffffffu) != 0u) {
                r8 = 0u;
                r3 = 0u;
                r4 = 0u;
                while ((s32)r8 < (s32)r7 && (s32)r8 < 16) {
                    r0 = (u32)rd16(r4 - 0x7e802068u);
                    r4 = r4 + 2u;
                    r8 = r8 + 1u;
                    wr16(param_1 + r3 + 0x866u, (u16)r0);
                    r3 = r3 + 0x34u;
                }
                wr8(param_1 + 0x128u, 1u);
            }
            if ((u32)rd8(param_1 + 0x11fu) == 0u) {
                r0 = rd32(param_1 + 0x130u) - 1u;
                wr32(param_1 + 0x130u, r0);
                if (r0 == 0u) {
                    wr8(param_1 + 0x11fu, 1u);
                }
            }
            a.r[0] = 0x80563da0u;
            (void)tc_call(0x8022d648u, &a);
            return;
        }
        r0 = rd32(param_1 + 0x82cu);
        r25 = 2u;
        if ((s32)(r26 + 2u) > (s32)r0) {
            r25 = r0 - r26;
        }
        r24 = (u32)param_5 * r25;
        a.r[0] = param_2;
        a.r[1] = r27;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = r7;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_2) + 0x44u), &a);
        a.r[0] = param_2;
        a.r[1] = 0x8055fda0u;
        a.r[2] = r24;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x14u), &a);
        f1 = tc_lastf();
        if (r3 != r24) break;
        r17 = r26 * 0x34u;
        r16 = (r26 << 1u) & 0xfffffffeu;
        r23 = 0u;
        while ((s32)r23 < (s32)r25) {
            if ((u32)param_7 != 0u) {
                wr16(r16 - 0x7e802068u, (u16)rd8(((u32)param_5 * r23) - 0x7faa0260u));
            }
            r15 = (rd32(param_1 + 0x138u) * (u32)param_6) + rd32(param_1 + r17 + 0x834u);
            a.r[0] = r15;
            a.r[1] = ((u32)param_5 * r23) - 0x7faa0260u;
            a.r[2] = (u32)param_5;
            (void)tc_call(0x80004338u, &a);
            a.r[0] = r15;
            a.r[1] = (u32)param_5;
            f1 = tc_callf(0x80227738u, &a);
            r26 = r26 + 1u;
            r17 = r17 + 0x34u;
            r16 = r16 + 2u;
            r23 = r23 + 1u;
        }
        r27 = r27 + r24;
    }
    a.r[0] = 0x80563da0u;
    (void)tc_call(0x8022d648u, &a);
    return;
}
