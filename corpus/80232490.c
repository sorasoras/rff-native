#include "tc_rt.h"

void fn_80232490(void)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571580u) != 0u) {
        r31 = rd32(0x800000dcu);
        while (r31 != 0u) {
            if (r31 != rd32(0x80571580u)) {
                a.r[0] = r31;
                (void)tc_call(0x8022fe50u, &a);
            }
            r31 = rd32(r31 + 0x2fcu);
        }
        a.r[0] = 0x804e1000u;
        (void)tc_call(0x8022671cu, &a);
        r6 = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
        r0 = ppc_mulhwu(r6, 0xf0u);
        r6 = r6 * 0xf0u;
        a.r[0] = 0x804e1000u;
        a.r[1] = 0u;
        a.r[2] = r0;
        a.r[3] = r6;
        a.r[4] = 0x8023204cu;
        (void)tc_call(0x8022697cu, &a);
        for (;;) {
            r3 = rd32(0x80571580u);
            if ((s32)rd32(r3 + 0x2ccu) <= 0) break;
            a.r[0] = r3;
            (void)tc_call(0x8022fbb8u, &a);
        }
    } else {
        r31 = rd32(0x800000dcu);
        while (r31 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x8022fe50u, &a);
            r31 = rd32(r31 + 0x2fcu);
        }
        r31 = rd32(0x80003128u) - 0x1320u;
        a.r[0] = r31;
        a.r[1] = 0x802323a4u;
        a.r[2] = 0u;
        a.r[3] = r31 + 0x1320u;
        a.r[4] = 0x1000u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        r3 = tc_call(0x8022f550u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8022e19cu, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x8022fbb8u, &a);
    }
    return;
}
