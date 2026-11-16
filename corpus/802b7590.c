#include "tc_rt.h"

void fn_802b7590(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = 0u;
    if (param_4 != 0u) {
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x80u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r29 = r3;
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
        if (r29 != 0u) {
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0x80u;
            f1 = tc_callf(0x8000443cu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r29 + 0x40u;
            a.r[1] = 0x40u;
            a.r[2] = 0x8039814cu;
            a.r[3] = param_1;
            a.r[4] = param_2;
            a.r[5] = param_3;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8025b8bcu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398160u;
            a.r[1] = r29 + 0x40u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b7194u, &a);
            a.r[0] = r29 + 0x40u;
            a.r[1] = 0u;
            r3 = tc_call(0x8026f5f8u, &a);
            f1 = tc_lastf();
            r30 = r3;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398174u;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b7194u, &a);
            wr32(param_4, r30);
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398128u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b723cu, &a);
        }
    }
    if (r29 != 0u) {
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = r29;
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
            a.r[2] = r29;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b723cu, &a);
        }
    }
    return;
}
