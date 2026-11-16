#include "tc_rt.h"

void fn_80072ac4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    (void)tc_call(0x80072f78u, &a);
    if (param_1 != 0x18u) {
        r5 = rd32(0x8046b7e4u);
        r4 = 0u;
        while (r5 != 0u) {
            r3 = r5;
            r5 = rd32(r5);
            r3 = rd32(r3 + 8u);
            if (rd32(r3 + 0xacu) == 0x4eu) {
                r4 = 1u;
                break;
            }
        }
        if (rd32(0x8046b7ecu) >= (((((0u - r4) | r4) >> 0x1fu) & 1u) + 7u)) {
            return;
        }
    }
    a.r[0] = param_1;
    r3 = tc_call(0x8007dae8u, &a);
    f1 = tc_lastf();
    r8 = rd32(param_2);
    r28 = (param_1 << 2u) & 0xfffffffcu;
    r7 = rd32(param_2 + 4u);
    r6 = rd32(param_2 + 8u);
    r27 = r3;
    r5 = rd32(param_3);
    r4 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfd4u, r8);
    r3 = rd32(r28 - 0x7fb79c28u);
    wr32(0x817fdfd8u, r7);
    wr32(0x817fdfdcu, r6);
    wr32(0x817fdfc8u, r5);
    wr32(0x817fdfccu, r4);
    wr32(0x817fdfd0u, r0);
    if (rd32(r3 + 0x260u) != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        r4 = rd32(r28 - 0x7fb79c28u);
        wrf32d(0x817fdfd4u, (f64)rdf32(r3));
        wrf32d(0x817fdfd8u, (f64)rdf32(r3 + 4u));
        wrf32d(0x817fdfdcu, (f64)rdf32(r3 + 8u));
        wrf32d(0x817fdfc8u, (f64)rdf32(r4 + 0x10u));
        wrf32d(0x817fdfccu, (f64)rdf32(r4 + 0x14u));
        wrf32d(0x817fdfd0u, (f64)rdf32(r4 + 0x18u));
        r26 = rd32(r4 + 0xacu);
        a.r[0] = r4;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r4) + 0x18u), &a);
        a.r[0] = r26;
        r3 = tc_call(0x8007dad4u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(r3 + 8u);
        a.r[2] = 0u;
        (void)tc_call(0x80057c10u, &a);
        a.r[0] = r26;
        r3 = tc_call(0x8007dad4u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32(r3 + 0xcu);
        a.r[2] = 0u;
        (void)tc_call(0x80058f78u, &a);
    }
    a.r[0] = r27;
    r3 = tc_call(0x8007dad4u, &a);
    r3 = rd32(r3 + 8u);
    a.r[0] = r3;
    f1 = tc_callf(0x80082760u, &a);
    r3 = rd32(r28 - 0x7fb79c28u);
    a.r[0] = r3;
    a.r[1] = r27;
    a.r[2] = 0x817fdfd4u;
    a.r[3] = 0x817fdfc8u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x48u), &a);
    a.r[0] = 0x8046b7e4u;
    a.r[1] = rd32(r28 - 0x7fb79c28u);
    a.r[2] = 0u;
    r3 = tc_call(0x8007b0f4u, &a);
    if (r3 == 0u) {
        a.r[0] = 0x8046b7e4u;
        a.r[1] = rd32(r28 - 0x7fb79c28u);
        (void)tc_call(0x8007b03cu, &a);
    }
    a.r[0] = rd32(rd32(r28 - 0x7fb79c28u) + 0x268u);
    r3 = tc_call(0x800cf718u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        a.r[0] = rd32(rd32(r28 - 0x7fb79c28u) + 0x268u);
        f1 = tc_callf(0x800cf688u, &a);
        r4 = tc_lastr4();
    }
    r27 = 0u;
    r3 = rd32(r28 - 0x7fb79c28u);
    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x8000000u);
    r3 = rd32(r28 - 0x7fb79c28u);
    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x20000000u);
    do {
        r3 = rd32(r28 - 0x7fb79c28u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x4cu), &a);
        r4 = tc_lastr4();
        r27 = r27 + 1u;
    } while (r27 < 0xau);
    wr32((param_1 * 0x34u) - 0x7fb79904u, 2u);
    return;
}
