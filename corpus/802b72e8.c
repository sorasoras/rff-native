#include "tc_rt.h"

u32 fn_802b72e8(void)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r4 = rd32(0x80570e70u);
    r29 = r3;
    if (r4 != 0xffffffffu) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80397fbcu;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b7194u, &a);
    } else {
        if (rd32(0x80571b88u) == 0u) {
            r3 = tc_call(0x8026ed38u, &a);
            wr32(0x80571b88u, r3);
            r3 = tc_call(0x8026ed30u, &a);
            f1 = tc_lastf();
            wr32(0x80571b8cu, r3);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80397fecu;
            a.r[1] = 0x80u;
            a.r[2] = rd32(0x80571b88u);
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b7194u, &a);
            r4 = tc_lastr4();
            r3 = rd32(0x80571b88u) + 0x4000u;
            if (r3 > rd32(0x80571b8cu)) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x8039800cu;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b723cu, &a);
                r30 = 0xffffffeau;
                a.r[0] = r29;
                (void)tc_call(0x8022c2d8u, &a);
                return r30;
            }
            a.r[0] = r3;
            (void)tc_call(0x8026ed40u, &a);
        }
        a.r[0] = rd32(0x80571b88u);
        a.r[1] = 0x4000u;
        r3 = tc_call(0x802705d0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr32(0x80570e70u, r3);
        if ((s32)r3 < 0) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398024u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b723cu, &a);
            r30 = 0xffffffeau;
        }
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return r30;
}
