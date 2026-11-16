#include "tc_rt.h"

void fn_80288fb8(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r27 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8(param_r3);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        (void)tc_call(0x80289ba4u, &a);
        (void)tc_call(0x80289ba4u, &a);
        wr8(0x8050f10eu, 0u);
    } else {
        if (!c0lt) {
            if ((s32)r0 < 5) {
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                if ((u32)rd16(param_r3 + 2u) == 0u) {
                    (void)tc_call(0x80289ba4u, &a);
                }
                wr8(0x8050f10eu, 0u);
                return;
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                (void)tc_call(0x80289ba4u, &a);
                r29 = param_r3 + 2u;
                r27 = 0u;
                while ((s32)r27 < (s32)rd8(param_r3 + 1u)) {
                    a.r[0] = r29;
                    r3 = tc_call(0x80287bc4u, &a);
                    r31 = r3;
                    (void)tc_call(0x80289ba4u, &a);
                    (void)tc_call(0x80289ba4u, &a);
                    if (r31 != 0u) {
                        a.r[0] = r31 + 0x40u;
                        a.r[1] = r29;
                        a.r[2] = 6u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = r31 + 0x46u;
                        a.r[1] = r29 + 6u;
                        a.r[2] = 0x10u;
                        (void)tc_call(0x80004338u, &a);
                        if ((u32)rd8(r31 + 0x5cu) == 2u) {
                            wr8(r31 + 0x5cu, 3u);
                        }
                        a.r[0] = 0x8050f7fcu;
                        a.r[1] = r29;
                        a.r[2] = 6u;
                        (void)tc_call(0x80004338u, &a);
                        (void)tc_call(0x80289ba4u, &a);
                    } else {
                        (void)tc_call(0x80289ba4u, &a);
                        r3 = tc_call(0x80287c9cu, &a);
                        r31 = r3;
                        if (r3 == 0u) {
                            r3 = 0x8050f100u;
                            r27 = 0u;
                            ctr = 6u;
                            do {
                                if ((u32)rd8(r3 + 0x4fdu) == 0u) {
                                    r31 = (r27 * 0x60u) - 0x7faf0a5cu;
                                    break;
                                }
                                r3 = r3 + 0x60u;
                                r27 = r27 + 1u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                        if (r31 != 0u) {
                            wr8(r31 + 0x5cu, 1u);
                            wr8(r31 + 0x59u, 1u);
                            a.r[0] = r31 + 0x40u;
                            a.r[1] = r29;
                            a.r[2] = 6u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r31 + 0x46u;
                            a.r[1] = r29 + 6u;
                            a.r[2] = 0x10u;
                            (void)tc_call(0x80004338u, &a);
                        }
                    }
                    r29 = r29 + 0x16u;
                    r27 = r27 + 1u;
                }
                return;
            }
            if (!c0lt) {
                (void)tc_call(0x80289ba4u, &a);
                (void)tc_call(0x80289ba4u, &a);
                wr8(0x8050f10eu, 0u);
                return;
            }
        }
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x80570dc8u;
        a.r[1] = 0x1192u;
        a.r[2] = 0x8039241cu;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802285e4u, &a);
    }
    return;
}
