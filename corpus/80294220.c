#include "tc_rt.h"

void fn_80294220(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
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
    if (param_2 == 0u) {
        r27 = 0x8054010cu;
    } else {
        r27 = param_2;
    }
    r30 = 0u;
    r29 = 0x8053d98cu;
    for (;;) {
        if ((u32)rd8(r29 + 0x119u) != 0u) {
            a.r[0] = r29 + 8u;
            a.r[1] = r27;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
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
        r30 = r30 + 1u;
        r29 = r29 + 0x11cu;
        if (r30 >= 4u) {
            r29 = 0u;
            break;
        }
    }
    if (r29 != 0u) {
        wr8(0x8053df7cu, (u8)param_1);
        if (param_1 == 0u) {
            wr8(0x8053df7du, (u8)param_3);
            a.r[0] = 0x8053df7eu;
            a.r[1] = r27;
            a.r[2] = 6u;
            f1 = tc_callf(0x80004338u, &a);
            r4 = tc_lastr4();
            r5 = 0u;
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
            wr8(r29 + 0x11au, (u8)param_3);
        }
        if (param_2 != 0u) {
            r30 = (u32)rd16(r29 + 0x10eu);
            r28 = 0u;
            r27 = 0x8053d98cu;
            for (;;) {
                if ((u32)rd8(r27 + 0x119u) != 0u) {
                    a.r[0] = r27 + 8u;
                    a.r[1] = r29 + 8u;
                    a.r[2] = 6u;
                    r3 = tc_call(0x802592d8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = 0u;
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
                r28 = r28 + 1u;
                r27 = r27 + 0x11cu;
                if (r28 >= 4u) {
                    r27 = 0u;
                    break;
                }
            }
            if (r27 != 0u) {
                wr16(r27 + 0x10eu, (u16)r30);
                if ((u32)rd8(r27 + 0x11au) == 0u) {
                    a.r[0] = (u32)rd16(r27);
                    a.r[1] = r30;
                    f1 = tc_callf(0x802a1968u, &a);
                    r4 = tc_lastr4();
                    r5 = 0u;
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
            }
        }
        if ((u32)rd8(r29 + 0x11bu) == 3u) {
            a.r[0] = (u32)rd16(r29);
            a.r[1] = 1u;
            r3 = tc_call(0x802a0574u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
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
            if ((r3 & 0xffu) != 0u) {
                wr8(r29 + 0x11bu, 4u);
                return;
            }
        }
        if (r29 != 0u && (u32)rd8(r29 + 0x11bu) == 5u) {
            wr8(r29 + 0x11bu, 0u);
        }
        r12 = rd32(0x8053df84u);
        if (r12 != 0u) {
            a.r[0] = 0x8053df7cu;
            a.r[1] = r4;
            a.r[2] = r5;
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
            f1 = tc_callf(r12, &a);
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
            wr32(0x8053df84u, 0u);
        }
        if ((u32)rd8(0x80540118u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0xd0003u;
            a.r[1] = 0x8039384cu;
            a.r[2] = (u32)rd8(0x8053df7du);
            a.r[3] = (u32)rd8(0x8053df7cu);
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc84u, &a);
        }
    }
    return;
}
