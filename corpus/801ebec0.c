#include "tc_rt.h"

void fn_801ebec0(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 lr = 0, r1 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        t0 = r1 + 8u;
        wr32(t0, r22);
        wr32(t0 + 4u, r23);
        wr32(t0 + 8u, r24);
        wr32(t0 + 0xcu, r25);
        wr32(t0 + 0x10u, r26);
        wr32(t0 + 0x14u, r27);
        wr32(t0 + 0x18u, r28);
        wr32(t0 + 0x1cu, r29);
        wr32(t0 + 0x20u, r30);
        wr32(t0 + 0x24u, r31);
        r23 = 0x804e0000u;
        r24 = 0x80370000u;
        r25 = 0x80370000u;
        r26 = 0x80370000u;
        r30 = 0x804de0f8u;
        r27 = 0x80370000u;
        r28 = 0x80370000u;
        r29 = 0x80370000u;
        r31 = rd32(0x804de0f8u);
        for (;;) {
            if (r31 == 0x804de0f8u) {
                wr32(0x805713d0u, 0u);
                return;
            }
            if (r31 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x8037615cu;
                a.r[1] = 0x23du;
                a.r[2] = 0x80376138u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802e41c0u, &a);
                r3 = tc_lastr();
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
            r22 = r31 - 4u;
            if (r22 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x8037612cu;
                a.r[1] = 0x193u;
                a.r[2] = 0x80376108u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x802e41c0u, &a);
                r3 = tc_lastr();
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
            r31 = rd32(r31);
            if (r22 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x8037618cu;
                a.r[1] = 0x233u;
                a.r[2] = 0x80376168u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = 0x804de0f4u;
            a.r[1] = r22 + 4u;
            f1 = tc_callf(0x802debd0u, &a);
            r3 = tc_lastr();
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
            if (r22 != 0u) {
                r12 = rd32(r22 + 0xcu);
                r12 = rd32(r12 + 8u);
                lr = 0x801ebf80u;
                if (r12 == 0x801ebec0u) break;
                a.r[0] = r22;
                a.r[1] = 1u;
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
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
            wr32(0x805713d0u, rd32(0x805713d0u) - 1u);
        }
    }
}
