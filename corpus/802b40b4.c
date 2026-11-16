#include "tc_rt.h"

void fn_802b40b4(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r6 = (u32)rd8(param_2);
    r3 = param_2 + 1u;
    if ((u32)((s32)r6 >> 3) != 6u) {
        if ((u32)rd8(0x80545c50u) >= 2u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0xa0001u;
            a.r[1] = 0x80397a08u;
            a.r[2] = r6;
            a.r[3] = r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
    } else {
        a.r[0] = r3;
        a.r[1] = r6;
        a.r[2] = 0x817fdfdcu;
        r3 = tc_call(0x802b6c90u, &a);
        f1 = tc_lastf();
        r5 = rd32(0x817fdfdcu);
        r30 = r3;
        if ((r3 + r5) > param_3) {
            if ((u32)rd8(0x80545c50u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xa0001u;
                a.r[1] = 0x80397a30u;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
        } else {
            a.r[0] = rd32(param_1 + 0x410u);
            a.r[1] = param_1 + 2u;
            r3 = tc_call(0x802b42a0u, &a);
            f1 = tc_lastf();
            r27 = r3;
            if (r3 == 0u) {
                if ((u32)rd8(0x80545c50u) >= 2u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xa0001u;
                    a.r[1] = 0x80397a50u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
            } else {
                r28 = r30 + rd32(0x817fdfdcu);
                while (r30 < r28) {
                    r29 = (u32)rd8(r30);
                    a.r[0] = r30 + 1u;
                    a.r[1] = r29;
                    a.r[2] = 0x817fdfd8u;
                    r3 = tc_call(0x802b6c90u, &a);
                    f1 = tc_lastf();
                    if (((r29 >> 3u) & 0x1fu) != 1u || rd32(0x817fdfd8u) != 2u) {
                        if ((u32)rd8(0x80545c50u) >= 2u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0xa0001u;
                            a.r[1] = 0x80397a60u;
                            a.r[2] = r29;
                            a.r[3] = rd32(0x817fdfd8u);
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc84u, &a);
                        }
                        return;
                    }
                    r6 = ((((u32)rd8(r3) << 8u) & 0xffffff00u) + (u32)rd8(r3 + 1u)) & 0xffffu;
                    r3 = r3 + 2u;
                    a.r[0] = r3;
                    a.r[1] = rd32(param_1 + 0x410u);
                    a.r[2] = r27;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    r3 = tc_call(0x802b4340u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                    if (r3 == 0u) {
                        if ((u32)rd8(0x80545c50u) >= 2u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0xa0001u;
                            a.r[1] = 0x80397a50u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        return;
                    }
                }
            }
        }
    }
    return;
}
