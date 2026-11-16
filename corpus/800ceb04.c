#include "tc_rt.h"

void fn_800ceb04(void)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x800cf7fcu, &a);
    r4 = tc_lastr4();
    r29 = rd32(0x804b14d4u);
    while (r29 != 0u) {
        r3 = r29;
        r29 = rd32(r29);
        r31 = rd32(r3 + 8u);
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0xcu), &a);
        r4 = tc_lastr4();
        if (r31 != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31) + 8u), &a);
            r4 = tc_lastr4();
        }
    }
    a.r[0] = 0x804b14d4u;
    f1 = tc_callf(0x8007ae84u, &a);
    r4 = tc_lastr4();
    r29 = rd32(0x804b14fcu);
    while (r29 != 0u) {
        r3 = r29;
        r29 = rd32(r29);
        r31 = rd32(r3 + 8u);
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0xcu), &a);
        r4 = tc_lastr4();
        if (r31 != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r31) + 8u), &a);
            r4 = tc_lastr4();
        }
    }
    a.r[0] = 0x804b14fcu;
    (void)tc_call(0x8007ae84u, &a);
    while (rd32(0x804b152cu) != 0u) {
        a.r[0] = 0x804b1524u;
        r3 = tc_call(0x8007b09cu, &a);
        f1 = tc_lastf();
        r29 = r3;
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
        if (r29 != 0u) {
            a.r[0] = r29;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r29) + 8u), &a);
        }
    }
    a.r[0] = 0x804b1524u;
    (void)tc_call(0x8007ae84u, &a);
    wr32(0x805711e8u, 0u);
    wr32(0x805711ecu, 0u);
    wr32(0x804b1590u, 0u);
    return;
}
