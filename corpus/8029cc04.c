#include "tc_rt.h"

void fn_8029cc04(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r28 = 0u;
    r30 = 0u;
    if ((u32)rd8(0x80540118u) >= 4u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x803949bcu;
        a.r[2] = (u32)rd8(param_r3);
        a.r[3] = (u32)rd8(param_r3 + 1u);
        a.r[4] = (u32)rd8(param_r3 + 2u);
        a.r[5] = (u32)rd8(param_r3 + 3u);
        a.r[6] = (u32)rd8(param_r3 + 4u);
        a.r[7] = (u32)rd8(param_r3 + 5u);
        (void)tc_call(0x8028cce4u, &a);
    }
    if ((u32)rd8(0x8053f2d1u) != 0u || (u32)rd8(0x8053d978u) != 1u) {
        a.r[0] = param_r3;
        r3 = tc_call(0x80295360u, &a);
        r30 = r3;
        if (r3 == 0u) {
            a.r[0] = param_r3;
            r3 = tc_call(0x80295188u, &a);
            r30 = r3;
        }
        a.r[0] = 0x8053f2acu;
        a.r[1] = param_r3;
        a.r[2] = 6u;
        f1 = tc_callf(0x80004338u, &a);
        if (r30 == 0u) {
            r28 = 1u;
        } else {
            a.r[0] = param_r3;
            a.r[1] = 0x8054010cu;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) {
                a.r[0] = r30 + 0x22u;
                a.r[1] = 0x80540112u;
                a.r[2] = 3u;
                f1 = tc_callf(0x80004338u, &a);
            }
            if (((u32)rd8(r30 + 0x81u) & 0x40u) == 0u) {
                if ((u32)rd8(0x8053f2d1u) != 0u || rd32(0x8053f268u) == 0u || ((u32)rd8(r30 + 0x80u) == 0u && ((u32)rd8(r30 + 0x23u) & 0x1fu) == 5u && ((u32)rd8(r30 + 0x24u) & 0x40u) != 0u)) {
                    r28 = 1u;
                } else {
                    a.r[0] = 0x8054010cu;
                    a.r[1] = param_r3;
                    a.r[2] = 6u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = 0x80540112u;
                    a.r[1] = r30 + 0x22u;
                    a.r[2] = 3u;
                    (void)tc_call(0x80004338u, &a);
                    wr32(0x8053f2a4u, 0x8029cb90u);
                    a.r[0] = 0x8053f294u;
                    a.r[1] = 0x16u;
                    a.r[2] = 0x3cu;
                    f1 = tc_callf(0x8028d220u, &a);
                    a.r[0] = param_r3;
                    a.r[1] = r30 + 0x22u;
                    a.r[2] = r30 + 0x35u;
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
                    f1 = tc_callf(rd32(0x8053f268u), &a);
                }
            } else {
                if ((u32)rd8(0x80540118u) >= 4u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0003u;
                    a.r[1] = 0x803949fcu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                a.r[0] = param_r3;
                a.r[1] = (u32)rd8(0x8053f2d7u);
                a.r[2] = 0x8053f2d8u;
                f1 = tc_callf(0x802a01e4u, &a);
                if ((u32)rd8(0x8053f2d3u) != 0u) {
                    r0 = (u32)rd8(0x80540118u);
                    wr8(0x8053f2d3u, 0u);
                    if (r0 >= 5u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0xd0004u;
                        a.r[1] = 0x80394a2cu;
                        a.r[2] = (ppc_cntlzw((u32)rd8(0x8053f2d0u) - 3u) >> 5u) & 0x7ffffffu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc6cu, &a);
                    }
                    a.r[0] = (ppc_cntlzw((u32)rd8(0x8053f2d0u) - 3u) >> 5u) & 0xffu;
                    f1 = tc_callf(0x802a173cu, &a);
                }
            }
        }
        if (r28 != 0u) {
            if ((u32)rd8(0x80540118u) >= 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0001u;
                a.r[1] = 0x80394a5cu;
                a.r[2] = (u32)rd8(0x8053f2d1u);
                a.r[3] = rd32(0x8053f268u);
                a.r[4] = r30;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc9cu, &a);
            }
            a.r[0] = param_r3;
            (void)tc_call(0x802a03c8u, &a);
        }
    } else {
        a.r[0] = param_r3;
        r3 = tc_call(0x80295360u, &a);
        if (r3 == 0u) {
            r3 = 0x8053f888u;
            ctr = 2u;
            while (((u32)rd8(r3 + 0x76u) & 0x80u) != 0u) {
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0xfeu) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0x186u) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0x20eu) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0x296u) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0x31eu) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0x3a6u) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                if (((u32)rd8(r3 + 0x42eu) & 0x80u) == 0u) break;
                r30 = r30 + 1u;
                r3 = r3 + 0x440u;
                ctr = ctr - 1u;
                if (ctr == 0u) break;
            }
        }
        if ((s32)r30 < 16) {
            a.r[0] = param_r3;
            a.r[1] = (u32)rd8(0x8053d979u);
            a.r[2] = 0x8053d97au;
            (void)tc_call(0x802a01e4u, &a);
        } else {
            a.r[0] = param_r3;
            (void)tc_call(0x802a03c8u, &a);
        }
    }
    return;
}
