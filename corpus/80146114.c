#include "tc_rt.h"

void fn_80146114(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0xa24u);
    c0lt = (s32)r0 < 7;
    if (r0 != 7u) {
        if (!c0lt) {
            if ((s32)r0 < 9) {
                a.r[0] = param_1;
                a.r[1] = 0x35u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = (f64)rdf32(0x805745d0u);
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                a.r[0] = param_1 + 0xa28u;
                f1 = tc_callf(0x801428ccu, &a);
                if ((u32)rd16(param_1 + 0xa28u) == 0x2e8u) {
                    a.r[0] = param_1;
                    a.r[1] = 0xc0eu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0xc0u), &a);
                } else if (rd32(param_1 + 0xa2cu) == 0u) {
                    r3 = tc_call(0x8006bb94u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) == 0u) {
                        if (rd32(r3 + 0x20u) == 0u) {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0xb8u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                        } else {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0xb8u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                        }
                        r31 = r3;
                    } else {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xb8u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r31 = r3;
                    }
                    if (r3 != 0u) {
                        r3 = r3;
                        a.r[0] = r3;
                        f1 = tc_callf(0x800d5c2cu, &a);
                    }
                    wr32(param_1 + 0xa2cu, r31);
                    a.r[0] = r31;
                    a.r[1] = (u32)rd16(param_1 + 0xa28u);
                    a.r[2] = 0x804890c8u;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = (u32)rd8(param_1 + 0xa2bu);
                    a.r[5] = (u32)rd8(param_1 + 0xa2au);
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r31) + 0x48u), &a);
                    wr32(rd32(param_1 + 0xa2cu) + 0x7cu, 1u);
                    a.r[0] = rd32(rd32(param_1 + 0xa2cu) + 0xa4u);
                    (void)tc_call(0x800cf688u, &a);
                    a.r[0] = rd32(param_1 + 0xa2cu);
                    a.r[1] = param_1;
                    a.r[2] = 0x14u;
                    f1 = tc_callf(0x800d612cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0xc0du;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0xc0u), &a);
                }
            }
        } else {
            c0lt = (s32)r0 < 3;
            if (r0 == 3u) {
                a.r[0] = param_1;
                a.r[1] = 0x34u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = (f64)rdf32(0x805745d0u);
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            }
        }
    }
    return;
}
