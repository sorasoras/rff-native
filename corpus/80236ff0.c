#include "tc_rt.h"

void fn_80236ff0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
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
                r4 = rd32(0x80571648u);
                wr32(0x80571654u, 0x802351dcu);
                if (rd32(r4 + 0x3cu) < rd32(0x804e5b48u)) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80570adcu;
                    a.r[1] = 0x43bu;
                    a.r[2] = 0x80387020u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x802285e4u, &a);
                }
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
                r6 = rd32(0x805715f8u);
                r0 = rd32(0x805715f8u);
                r0 = ~(r0 | r0);
                r0 = r0 & 2u;
                r0 = (((r0 & 0x20u) != 0u) ? 0u : (rd32(0x804e5b48u) << (r0 & 0x1fu))) + 0x1fu;
                a.r[0] = 1u;
                a.r[1] = ((r6 & 0x20u) != 0u) ? 0u : (rd32(0x804e5b44u) >> (r6 & 0x1fu));
                a.r[2] = r0 & 0xffffffe0u;
                f1 = tc_callf(0x80234fd0u, &a);
                r0 = rd32(0x805715f8u);
                r0 = ~(r0 | r0);
                r7 = rd32(0x80571648u);
                r0 = r0 & 2u;
                r3 = ((r0 & 0x20u) != 0u) ? 0u : (rd32(0x804e5b48u) << (r0 & 0x1fu));
                r0 = rd32(0x805715f8u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = rd32(r7 + 0x38u);
                a.r[1] = (r3 + 0x1fu) & 0xffffffe0u;
                a.r[2] = ((r0 & 0x20u) != 0u) ? 0u : (rd32(0x804e5b44u) >> (r0 & 0x1fu));
                a.r[3] = 0x80235354u;
                a.r[4] = r7;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8023c78cu, &a);
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
