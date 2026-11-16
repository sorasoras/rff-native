#include "tc_rt.h"

void fn_802660d8(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = param_1;
    if (param_1 > 0xbu) {
        r29 = 0xbu;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    wr32(0x80571a10u, r29);
    r30 = r3;
    r3 = tc_call(0x8023f4acu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    c0lt = (s32)r3 < 2;
    do {
        if (r3 == 2u) {
            r5 = 0x8038f308u;
        } else {
            if (!c0lt) {
                if (r3 == 5u) {
                    r5 = 0x8038f308u;
                    break;
                }
            } else {
                c0lt = (s32)r3 < 0;
                if (r3 == 0u) {
                    r5 = 0x8038f308u;
                    break;
                }
                if (!c0lt) {
                    r5 = 0x8038f338u;
                    break;
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
            a.r[0] = 0x8038f368u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80228554u, &a);
            r29 = 0u;
            r5 = 0x8038f308u;
        }
    } while (0);
    r0 = (r29 << 2u) & 0xfffffffcu;
    r3 = r5 + r0;
    r0 = (u32)rd16(r5 + r0);
    a.r[0] = (((u32)rd16(0xcc00206cu) & 1u) + 1u) * r0;
    a.r[1] = (u32)rd8(r3 + 2u);
    (void)tc_call(0x802656f8u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
