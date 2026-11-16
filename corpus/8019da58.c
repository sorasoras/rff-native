#include "tc_rt.h"

void fn_8019da58(u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = param_r3;
    r26 = 0u;
    r5 = 0u;
    ctr = 3u;
    do {
        r4 = rd32(r3 + 0x13cu);
        if (r4 != 0u && rd32(r4 + 0xbcu) != 0u) {
            r26 = 1u;
            break;
        }
        r4 = rd32(r3 + 0x140u);
        if (r4 != 0u && rd32(r4 + 0xbcu) != 0u) {
            r26 = 1u;
            break;
        }
        r4 = rd32(r3 + 0x144u);
        if (r4 != 0u && rd32(r4 + 0xbcu) != 0u) {
            r26 = 1u;
            break;
        }
        r3 = r3 + 0xcu;
        r5 = r5 + 2u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    a.r[0] = param_r3;
    f1 = tc_callf(0x8019ddc0u, &a);
    a.r[0] = param_r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_r3) + 0x68u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r26 == 0u && r3 != 0u) {
        r31 = 0u;
        r30 = 1u;
        if ((rd32(r3 + 0x30u) & 0x200u) != 0u) {
            r31 = 1u;
            r3 = ((rd32(rd32(r3 + 0x2cu) + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60e50u;
            r29 = (u32)rd8(r3 + 0x61fu);
            r3 = tc_call(0x80040b64u, &a);
            f1 = tc_lastf();
            r4 = ((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u;
            r3 = r3 - r4;
            r30 = ((((r29 << 2u) & 0xfffffffcu) - r29 + r3) >> 1u) & 0x7fffffffu;
        }
        if ((u32)((s32)((rd32(param_r3 + 0x80u) << 4u) & 0xc0000000u) >> 31) == 0u) {
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x2717u;
            a.r[2] = r3;
            (void)tc_call(0x8010a794u, &a);
        }
        r0 = (u32)rd8(param_r3 + 0x130u);
        if (r0 < r30) {
            r30 = r0;
        }
        r3 = tc_call(0x80040b64u, &a);
        r4 = ppc_mulhwu(0x446f8657u, r3);
        if (((r3 - (((((((r3 - r4) >> 1u) & 0x7fffffffu) + r4) >> 6u) & 0x3ffffffu) * 0x65u)) & 1u) != 0u) {
            r27 = param_r3;
            r26 = ((r29 << 2u) & 0xfffffffcu) + 1u;
            r25 = 0u;
            do {
                if (rd32(r27 + 0x13cu) != 0u) {
                    r0 = 1u;
                    if (r31 != 0u) {
                        r3 = tc_call(0x80040b64u, &a);
                        r3 = r29 + (r3 - (ppc_divwu(r3, r26) * r26));
                        r0 = ((r3 + 1u) >> 1u) & 0xffu;
                    }
                    wr8(rd32(r27 + 0x13cu) + 0x78u, (u8)r0);
                    r3 = tc_call(0x80040b64u, &a);
                    a.r[0] = rd32(r27 + 0x13cu);
                    a.r[1] = (r3 & 0xfu) + 0xfu;
                    (void)tc_call(0x80221fccu, &a);
                    r30 = r30 - 1u;
                    if (r30 == 0u) break;
                }
                r25 = r25 + 1u;
                r27 = r27 + 4u;
            } while ((s32)r25 < 9);
        } else {
            r26 = param_r3 + 0x20u;
            r27 = ((r29 << 2u) & 0xfffffffcu) + 1u;
            r25 = 8u;
            do {
                if (rd32(r26 + 0x13cu) != 0u) {
                    r0 = 1u;
                    if (r31 != 0u) {
                        r3 = tc_call(0x80040b64u, &a);
                        r3 = r29 + (r3 - (ppc_divwu(r3, r27) * r27));
                        r0 = ((r3 + 1u) >> 1u) & 0xffu;
                    }
                    wr8(rd32(r26 + 0x13cu) + 0x78u, (u8)r0);
                    r3 = tc_call(0x80040b64u, &a);
                    a.r[0] = rd32(r26 + 0x13cu);
                    a.r[1] = (r3 & 0xfu) + 0xfu;
                    (void)tc_call(0x80221fccu, &a);
                    r30 = r30 - 1u;
                    if (r30 == 0u) break;
                }
                r25 = r25 - 1u;
                r26 = r26 - 4u;
            } while ((s32)r25 >= 0);
        }
        r29 = param_r3;
        r25 = 0u;
        do {
            r3 = rd32(r29 + 0x13cu);
            if (r3 != 0u && rd32(r3 + 0xbcu) != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                a.r[0] = rd32(r29 + 0x13cu);
                a.r[1] = (r3 & 0xfu) + 0xau;
                (void)tc_call(0x80221fb0u, &a);
            }
            r25 = r25 + 1u;
            r29 = r29 + 4u;
        } while ((s32)r25 < 9);
        if (rd32(param_r3 + 0x138u) == 0u) {
            r3 = rd32(param_r3 + 0x80u);
            wr32(param_r3 + 0x138u, 1u);
            if ((u32)((s32)((r3 << 2u) & 0xc0000000u) >> 31) != 0u) {
                wr32(param_r3 + 0x80u, r3 | 0x8000000u);
            }
            a.r[0] = param_r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
            (void)tc_call(0x800841d4u, &a);
        }
    }
    a.r[0] = param_r3;
    (void)tc_call(0x8017b81cu, &a);
    if (rd32(param_r3 + 0x138u) != 0u) {
        r4 = rd32(param_r3 + 0x70u);
        f0 = (f64)rdf32(r4 + 0x54u);
        f1 = (f64)rdf32(rd32(r4 + 0x48u) + 0x18u);
        if ((f1 < f0) || (f1 == f0)) {
            r0 = rd32(param_r3 + 0x80u);
            wr32(param_r3 + 0x138u, 0u);
            r0 = r0 & 0xf7ffffffu;
            wr32(param_r3 + 0x80u, r0);
        }
    }
    return;
}
