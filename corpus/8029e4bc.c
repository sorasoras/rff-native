#include "tc_rt.h"

void fn_8029e4bc(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r29 = (u32)rd8(param_r3);
    r31 = 0u;
    r27 = 0u;
    wr16(0x8053d4b0u, (u16)rd8(param_r3 + 1u));
    r28 = ((u32)rd8(param_r3 + 2u) + (((u32)rd8(param_r3 + 3u) << 8u) & 0xffffff00u)) & 0xffffu;
    if ((r28 != 0xc03u && r28 != 0xc35u) && r28 != 0u) {
        a.r[0] = 0x8053d4a0u;
        r3 = tc_call(0x8028a9f8u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 != 0u) {
            r3 = r3 + (u32)rd16(r3 + 4u);
            r0 = (u32)rd8(r3 + 9u);
            r27 = r3 + 0xau;
            r3 = (u32)rd8(r3 + 8u);
            r0 = (r0 << 8u) & 0xffffff00u;
            r0 = r3 + r0;
            r6 = r0 & 0xffffu;
            if (r6 != r28) {
                r27 = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x70001u;
                a.r[1] = 0x80394c28u;
                a.r[2] = r28;
                a.r[3] = r6;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc84u, &a);
            }
        }
        a.r[0] = 0x8053d4a0u;
        r3 = tc_call(0x8028ab80u, &a);
        if ((r3 & 0xffu) == 0u) {
            a.r[0] = 0x8053d47cu;
            a.r[1] = 0x3cu;
            a.r[2] = 8u;
            f1 = tc_callf(0x8028d220u, &a);
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
        } else {
            a.r[0] = 0x8053d47cu;
            f1 = tc_callf(0x8028d290u, &a);
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
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = r28;
    a.r[1] = r29;
    a.r[2] = r27;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    (void)tc_call(0x8029e2bcu, &a);
    if (r31 != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x8028a35cu, &a);
    }
    a.r[0] = 0u;
    (void)tc_call(0x8029db78u, &a);
    return;
}
