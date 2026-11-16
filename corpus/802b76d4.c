#include "tc_rt.h"

void fn_802b76d4(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x803981c4u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x802b7194u, &a);
    a.r[0] = rd32(0x80570e70u);
    a.r[1] = 0x80u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r30 = r3;
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80398104u;
        a.r[1] = rd32(0x80570e70u);
        a.r[2] = 0x80u;
        a.r[3] = r3;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x802b723cu, &a);
        r4 = tc_lastr4();
    }
    if (r30 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x803981f0u;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b723cu, &a);
    } else {
        a.r[0] = r30;
        a.r[1] = 0u;
        a.r[2] = 0x80u;
        (void)tc_call(0x8000443cu, &a);
        wr32(r30, param_2);
        wr32(r30 + 8u, param_3);
        wr32(r30 + 0x34u, 0u);
        a.r[0] = param_1;
        a.r[1] = 0x802b73e8u;
        a.r[2] = r30;
        r3 = tc_call(0x8026f718u, &a);
        f1 = tc_lastf();
        r29 = r3;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x803981d4u;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b7194u, &a);
        if ((s32)r29 < 0 && r30 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r30;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r30;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b723cu, &a);
            }
        }
    }
    return;
}
