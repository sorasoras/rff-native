#include "tc_rt.h"

void fn_8008bae8(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r22 = 0, r23 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (param_r4 <= 0x3fu) {
        a.r[0] = param_r3;
        a.r[1] = param_r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x37fu;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        r27 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        f1 = tc_callf(0x800510bcu, &a);
        r5 = 0u;
        r29 = (param_r4 << 3u) & 0xfffffff8u;
        r4 = 0x80492800u;
        r3 = r27 + r29;
        r28 = (u32)rd8(0x80492821u);
        r26 = rd32(r3 + 4u);
        r23 = 0u;
        r25 = 0u;
        r22 = 0u;
        while (r25 < r26) {
            r4 = rd32(r27 + r29);
            r3 = rd32(r4 + r22);
            if (rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
                r5 = r4 + r22;
                r4 = ((r28 & 0x20u) != 0u) ? 0u : (1u << (r28 & 0x1fu));
                if ((r4 & rd32(r5 + 0x28u)) != 0u) {
                    f2 = (f64)rdf32(r5 + 0xcu);
                    f1 = (f64)rdf32(r5 + 8u);
                    wrf32d(0x817fdfc0u, (f64)rdf32(r5 + 4u));
                    wrf32d(0x817fdfc4u, f1);
                    wrf32d(0x817fdfc8u, f2);
                    r7 = rd32(r27 + r29) + r22;
                    f2 = (f64)rdf32(r7 + 0x18u);
                    f1 = (f64)rdf32(r7 + 0x14u);
                    wrf32d(0x817fdfb4u, (f64)rdf32(r7 + 0x10u));
                    wrf32d(0x817fdfb8u, f1);
                    wrf32d(0x817fdfbcu, f2);
                    r7 = rd32(r27 + r29) + r22;
                    f1 = (f64)rdf32(r7 + 0x20u);
                    f2 = (f64)rdf32(r7 + 0x24u);
                    f0 = (f64)rdf32(r7 + 0x1cu);
                    wrf32d(0x817fdfacu, f1);
                    wrf32d(0x817fdfa8u, f0);
                    wrf32d(0x817fdfb0u, f2);
                    a.f[0] = f1;
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfc0u;
                    a.r[2] = 0x817fdfb4u;
                    a.r[3] = 0x804890c8u;
                    r3 = tc_call(0x800d7768u, &a);
                    f1 = tc_lastf();
                    r5 = 0u;
                    r4 = param_r3 + r23;
                    r23 = r23 + 4u;
                    wr32(r4 + 0x3f20u, r3);
                }
            }
            r25 = r25 + 1u;
            r22 = r22 + 0x2cu;
        }
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r27;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r27;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r27;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
    }
    return;
}
