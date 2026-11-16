#include "tc_rt.h"

void fn_80295bb8(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0;
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
    r10 = param_r10;
    r5 = param_r5;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
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
        a.r[1] = 0x80393a80u;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc54u, &a);
        r4 = tc_lastr4();
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
    r12 = rd32(0x8053df78u);
    if (r12 != 0u) {
        wr32(0x8053df78u, 0u);
        a.r[0] = 0u;
        a.r[1] = r4;
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
        (void)tc_call(r12, &a);
    } else {
        if ((u32)rd8(0x8053dfa6u) == 0u) {
            (void)tc_call(0x802ab2d0u, &a);
            wr16(0x8053eff8u, 0x12u);
            wr16(0x8053effau, 0x800u);
            wr16(0x8053effcu, 0u);
            wr16(0x8053eff4u, 0x12u);
            wr16(0x8053eff6u, 0x800u);
            wr16(0x8053effeu, 0u);
            wr8(0x8053dfa6u, 2u);
            wr8(0x8053dfa7u, 4u);
            a.r[0] = 0x8053deccu;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x8028d220u, &a);
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x802a1b28u, &a);
            }
            a.r[0] = 0x8053dfa0u;
            a.r[1] = 0x8053dfa0u;
            a.r[2] = 3u;
            f1 = tc_callf(0x80004338u, &a);
            r0 = (u32)rd8(0x8053dfa6u);
            if (r0 != 0u && r0 != 1u) {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0x8053dfa0u;
                    f1 = tc_callf(0x802a1824u, &a);
                }
            }
            r0 = (u32)rd8(0x8053dfa6u);
            if (r0 != 0u && r0 != 1u) {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0x8053d958u;
                    f1 = tc_callf(0x802a150cu, &a);
                }
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)rd8(0x8053d978u);
            a.r[1] = 0x8053d97au;
            a.r[2] = (u32)rd8(0x8053d979u);
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8029a718u, &a);
        }
    }
    return;
}
