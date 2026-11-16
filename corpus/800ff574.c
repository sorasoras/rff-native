#include "tc_rt.h"

void fn_800ff574(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
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
    r5 = rd32(param_r3);
    r3 = rd32(r5 + 0x14u);
    r31 = rd32(r3 + 4u);
    r30 = r3 + 4u;
    while (r31 != r30) {
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80360754u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80360730u;
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
        r29 = rd32(r31 + 0xcu);
        r28 = r31 + 0xcu;
        while (r29 != r28) {
            if (r29 == 0u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0x80360724u;
                a.r[1] = 0x23du;
                a.r[2] = 0x80360700u;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                r3 = tc_call(0x802e41c0u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = param_r3;
            a.r[1] = rd32(r29 + 8u);
            a.r[2] = param_r4;
            f1 = tc_callf(0x800ff660u, &a);
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
            r29 = rd32(r29);
        }
        r31 = rd32(r31);
    }
    if (param_r4 != rd32(param_r3 + 0x28u) && param_r4 == 1u) {
        wrf32d(param_r3 + 0xcu, (f64)rdf32(0x80573c30u));
    }
    wr32(param_r3 + 0x28u, param_r4);
    a.r[0] = param_r3;
    r3 = tc_call(0x800ff1ecu, &a);
    f1 = tc_lastf();
    return;
}
