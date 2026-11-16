#include "tc_rt.h"

void fn_80236524(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x805715c0u) == 0u) {
        wr32(0x804e5ef8u, param_1);
    } else {
        wr32(((rd32(0x805715c0u) - 1u) * 0x14u) - 0x7fb1a158u, param_1);
    }
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (param_1 == 0x10u) {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    } else {
        if (param_1 == 0x20u) {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        } else {
            if ((param_1 & 1u) != 0u) {
                wr32(0x805715d8u, 0u);
                wr32(0x80571610u, 0x804e5c20u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8023cdc0u, &a);
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = r3;
                if (rd32(0x805715c0u) >= 5u) {
                    wr32(0x805715c0u, 0u);
                }
                r0 = rd32(0x805715c0u);
                r3 = rd32(0x805715c0u) * 0x14u;
                wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x21u);
                r3 = r3 - 0x7fb1a180u;
                r0 = r0 * 0x14u;
                wr32(r3 + 0x20u, 0x10008u);
                wr32(r0 - 0x7fb1a15cu, 0x20u);
                r3 = tc_call(0x802302b4u, &a);
                r5 = rd32(0x805715c0u) * 0x14u;
                wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
                wr32(r5 - 0x7fb1a154u, r3);
                a.r[0] = r30;
                f1 = tc_callf(0x8022c2d8u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x804e5c40u;
                a.r[1] = 0x20u;
                a.r[2] = 0x10008u;
                a.r[3] = 0x802366c4u;
                (void)tc_call(0x8023bb64u, &a);
            } else {
                a.r[0] = 0x27u;
                a.r[1] = 0u;
                a.r[2] = 0u;
                f1 = tc_callf(0x80234fd0u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x802357f4u;
                a.r[7] = 0u;
                (void)tc_call(0x8023bff4u, &a);
            }
        }
    }
    return;
}
