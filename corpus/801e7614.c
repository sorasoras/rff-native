#include "tc_rt.h"

void fn_801e7614(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x258u);
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
        f1 = tc_lastf();
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = param_1;
            a.r[1] = 0x804890c8u;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = (f64)rdf32(0x80576328u);
            f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            a.f[0] = (f64)rdf32(0x80576328u);
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            (void)tc_call(0x800a94c0u, &a);
            a.r[0] = param_1;
            a.r[1] = 0u;
            (void)tc_call(0x801e7884u, &a);
            wr32(param_1 + 0x258u, 1u);
            a.r[0] = param_1;
            a.r[1] = 0u;
            f1 = tc_callf(0x801e8074u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
        } else {
            wr32(param_1 + 0x258u, 2u);
        }
        r4 = rd32(0x804863d8u);
        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
        a.r[0] = param_1;
        (void)tc_call(0x801e7cb8u, &a);
        a.r[0] = 0x80486da8u;
        a.r[1] = param_1;
        (void)tc_call(0x800bca34u, &a);
        if ((rd32(0x8057118cu) & 0x40u) != 0u) {
            a.r[0] = 0x80486da8u;
            (void)tc_call(0x800b8708u, &a);
        }
        wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x2000000u);
    } else {
        if (r0 == 1u) {
            a.r[0] = param_1;
            r3 = tc_call(0x801e7900u, &a);
            r30 = r3;
            a.r[0] = param_1;
            (void)tc_call(0x801e80ecu, &a);
            if (r30 != 0u) {
                return;
            }
            a.r[0] = param_1;
            (void)tc_call(0x801e7960u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x801e8514u, &a);
            a.r[0] = param_1;
            f1 = tc_callf(0x801e8614u, &a);
            wr32(param_1 + 0x258u, 2u);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x1acu), &a);
        } else {
            wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) & 0xfdffffffu);
            r4 = rd32(0x804863d8u);
            wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) & 0xbfffffffu);
            a.r[0] = param_1;
            (void)tc_call(0x801e7e04u, &a);
            if ((rd32(0x8057118cu) & 0x40u) != 0u) {
                a.r[0] = 0x80486da8u;
                (void)tc_call(0x800b872cu, &a);
            }
            wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) & 0xfdffffffu);
        }
    }
    return;
}
