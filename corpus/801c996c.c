#include "tc_rt.h"

void fn_801c996c(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r24 = 0, r26 = 0, r27 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_r3 + 0x10u);
    if ((s32)r0 < 4 && (s32)r0 >= 0) {
        r29 = param_r4;
        r27 = 0u;
        do {
            r26 = rd32(r29 + 0x1694u);
            do {
                if (r26 != 0u) {
                    r3 = rd32(r26 + 0xda4u);
                    if (r3 == 0u) {
                        r0 = 0xffffffffu;
                    } else {
                        r0 = rd32(r3 + 4u);
                    }
                    if (r0 != 0x1du) {
                        if (r3 == 0u) {
                            r0 = 0xffffffffu;
                        } else {
                            r0 = rd32(r3 + 4u);
                        }
                        if (r0 == 0x1eu) {
                            r3 = rd32(r26 + 0xe88u);
                            wr32(r26 + 0xe88u, r3 | (r3 ^ 0x80000000u));
                            wr32(r29 + 0x1694u, 0u);
                        }
                    } else {
                        a.f[0] = (f64)rdf32(0x80575e18u);
                        a.r[0] = 0x23u;
                        a.r[1] = r26 + 0xcf4u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                        r24 = r3;
                        a.r[1] = 0xffffffffu;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r24 + 0x20u, r3);
                        f1 = (f64)rdf32(0x80575e18u);
                        wr32(r24 + 0x24u, 0u);
                        a.f[0] = f1;
                        a.r[0] = 0x1fu;
                        a.r[1] = r26 + 0xcf4u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                        r24 = r3;
                        a.r[1] = 0xffffffffu;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r24 + 0x20u, r3);
                        f1 = (f64)rdf32(0x80575e18u);
                        wr32(r24 + 0x24u, 0u);
                        a.f[0] = f1;
                        a.r[0] = 0x68u;
                        a.r[1] = r26 + 0xcf4u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        r3 = tc_call(0x800d783cu, &a);
                        r24 = r3;
                        a.r[1] = 0xffffffffu;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r24 + 0x20u, r3);
                        wr32(r24 + 0x24u, 0u);
                        a.r[0] = param_r4;
                        a.r[1] = 0x2265u;
                        f1 = tc_callf(0x800aef78u, &a);
                        r4 = rd32(r26 + 0xe88u);
                        wr32(r26 + 0xe88u, r4 | (r4 ^ 0x80000000u));
                        a.r[0] = r26;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r26) + 0x19cu), &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0x5eu) {
                            a.r[0] = r26;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r26) + 0x19cu), &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 != 0x75u) {
                                a.r[0] = r26;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(r26) + 0x19cu), &a);
                                if (r3 != 0x7au) break;
                            }
                        }
                        a.r[0] = r26;
                        (void)tc_call(0x802074f4u, &a);
                    }
                }
            } while (0);
            r27 = r27 + 1u;
            r29 = r29 + 4u;
        } while ((s32)r27 < 30);
        wr32(param_r3 + 0x10u, rd32(param_r3 + 0x10u) + 1u);
    }
    return;
}
