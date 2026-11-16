#include "tc_rt.h"

void fn_801f3c08(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0eq = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0;
    u32 r21 = 0, r22 = 0, r23 = 0, r30 = 0;
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
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r20 = (u32)param_1 + 0x3c4u;
    r17 = 0u;
    r21 = (u32)param_1;
    do {
        r19 = r21;
        r18 = r20;
        r16 = 0u;
        do {
            r23 = rd32(r19 + 0x3c8u);
            r30 = r18 + 4u;
            while (r23 != r30) {
                if (r23 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80376b00u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x80376adcu;
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
                r22 = r23;
                if (r23 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80376aa0u;
                    a.r[1] = 0x193u;
                    a.r[2] = 0x80376a7cu;
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
                c0eq = r23 == 0u;
                r23 = rd32(r23);
                if (c0eq) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80376ad0u;
                    a.r[1] = 0x233u;
                    a.r[2] = 0x80376aacu;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    r3 = tc_call(0x802e41c0u, &a);
                    f1 = tc_lastf();
                }
                a.r[0] = r18;
                a.r[1] = r22;
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
            }
            r16 = r16 + 1u;
            r18 = r18 + 0xcu;
            r19 = r19 + 0xcu;
        } while ((s32)r16 < 6);
        r17 = r17 + 1u;
        r20 = r20 + 0x48u;
        r21 = r21 + 0x48u;
    } while ((s32)r17 < 40);
    r22 = rd32((u32)param_1 + 0xf08u);
    r30 = (u32)param_1 + 0xf08u;
    while (r22 != r30) {
        if (r22 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80376b00u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80376adcu;
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
        r23 = r22;
        if (r22 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80376aa0u;
            a.r[1] = 0x193u;
            a.r[2] = 0x80376a7cu;
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
        c0eq = r22 == 0u;
        r22 = rd32(r22);
        if (c0eq) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80376ad0u;
            a.r[1] = 0x233u;
            a.r[2] = 0x80376aacu;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x802e41c0u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = (u32)param_1 + 0xf04u;
        a.r[1] = r23;
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
    }
    r3 = rd32((u32)param_1 + 0xfe8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801f4690u;
        a.r[2] = 0x801f4b14u;
        a.r[3] = 0u;
        r3 = tc_call(0x80255794u, &a);
        f1 = tc_lastf();
        wr32((u32)param_1 + 0xfe8u, 0u);
    }
    r3 = rd32((u32)param_1 + 0xfe4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x801f339cu;
        a.r[2] = 0x801f4b14u;
        a.r[3] = 0u;
        r3 = tc_call(0x80255794u, &a);
        f1 = tc_lastf();
        wr32((u32)param_1 + 0xfe4u, 0u);
    }
    return;
}
