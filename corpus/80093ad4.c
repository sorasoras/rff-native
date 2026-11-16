#include "tc_rt.h"

void fn_80093ad4(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x260u) != 0u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = (u32)param_4;
    r3 = tc_call(0x800f2b5cu, &a);
    if (r3 == 0u) {
        return;
    }
    wrf32d(param_1 + 0xa0u, (f64)rdf32(0x80572a0cu));
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    f1 = tc_lastf();
    r3 = rd32(r3 + 4u);
    wr32(param_1 + 0x25cu, r3);
    wr32(param_1 + 0x260u, 1u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x74u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r26 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x74u;
            r3 = tc_call(0x80094e80u, &a);
            r26 = r3;
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x74u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
            r26 = r3;
        }
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        (void)tc_call(0x800d03dcu, &a);
    }
    wr32(param_1 + 0x268u, r26);
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    r26 = r3;
    a.f[0] = (f64)rdf32(r26 + 0x10u);
    a.f[1] = (f64)rdf32(0x80572a10u);
    a.f[2] = (f64)rdf32((u32)param_4 + 4u);
    a.f[3] = (f64)rdf32(0x80572a00u);
    a.r[0] = rd32(param_1 + 0x268u);
    a.r[1] = param_1;
    a.r[2] = param_3;
    (void)tc_call(0x800d04ecu, &a);
    r27 = 0u;
    r0 = rd32(param_1 + 0x9cu) | 0x20000000u;
    wr32(param_1 + 0x254u, 0u);
    wr32(param_1 + 0x9cu, r0);
    r25 = 0u;
    wr32(param_1 + 0xa7cu, 0u);
    do {
        r6 = rd32(param_1 + 0x25cu);
        r5 = (r6 * 0x38u) - 0x7fb65020u;
        r4 = rd32(r5 + r27 + 0x24u);
        if (r4 != 0x2e8u) {
            if (r6 == 0x1eu || r6 == 0x1fu) {
                r5 = (u32)rd8(r25 - 0x7fb66de8u);
            } else {
                r5 = (u32)rd8(r5 + 0x54u);
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 1u;
            (void)tc_call(0x80094864u, &a);
        }
        r25 = r25 + 1u;
        r27 = r27 + 4u;
    } while (r25 < 0xcu);
    wr32(param_1 + 0x1f4u, 0u);
    if (rd32(r26 + 4u) == 0x18u) {
        wr32(rd32(param_1 + 0x268u) + 0xcu, 0u);
    }
    wr32(param_1 + 0x264u, (ppc_cntlzw(rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fcaebd0u)) >> 5u) & 0x7ffffffu);
    return;
}
