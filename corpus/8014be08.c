#include "tc_rt.h"

void fn_8014be08(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r3 = rd32(param_r3 + 4u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
    wr32(0x817fdfbcu, r3);
    a.r[0] = 0x817fdfbcu;
    r3 = tc_call(0x801496bcu, &a);
    if (r3 != 0xffffffffu) {
        a.r[0] = 0x817fdfbcu;
        r3 = tc_call(0x801496bcu, &a);
        wr32(0x817fdfb8u, r3);
        a.r[0] = 0x817fdfb8u;
        r3 = tc_call(0x80149d64u, &a);
        r0 = rd32(param_r3 + 8u);
        r29 = r3;
        wr32(param_r3 + 0xcu, r3);
        if (r0 != 0u) {
            a.r[0] = r0;
            a.r[1] = 0x8014bcacu;
            a.r[2] = 0x8014bc28u;
            a.r[3] = 0u;
            (void)tc_call(0x80255794u, &a);
        }
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r6 = r3;
        r4 = (r29 * 0xf0u) + 0x10u;
        if (r4 == 0u) {
            r3 = 0u;
        } else {
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r6 = r3 + 0x18u;
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r6 = 0u;
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = r4;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r6 = 0u;
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r6 = r3 + 0x18u;
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r6 = 0u;
                }
            }
        }
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x8014c024u;
            a.r[2] = 0x8014bcacu;
            a.r[3] = 0xf0u;
            a.r[4] = r29;
            r3 = tc_call(0x80255464u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r6 = 0u;
        }
        wr32(param_r3 + 8u, r3);
        r3 = rd32(param_r3 + 4u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x140u), &a);
        r31 = 5u;
        if (r3 != 0u) {
            r31 = 0xau;
        }
        f31 = (f64)rdf32(0x805746e0u);
        r28 = 0u;
        r30 = 0u;
        while ((s32)r28 < (s32)r29) {
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r28;
            r3 = tc_call(0x80149d7cu, &a);
            r27 = r3;
            a.r[0] = r3;
            r3 = tc_call(0x802550d4u, &a);
            if (r3 != 0u) {
                wrf32d(0x817fdfd4u, f31);
                wrf32d(0x817fdfd0u, f31);
                wrf32d(0x817fdfccu, f31);
                a.r[0] = 0x817fdfc0u;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = r28;
                f1 = tc_callf(0x80149dbcu, &a);
                r3 = rd32(param_r3 + 4u);
                a.r[0] = r3;
                a.r[1] = 0x817fdfccu;
                a.r[2] = r27;
                a.r[3] = 0x817fdfc0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x38u), &a);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = r28;
                f1 = tc_callf(0x80149df0u, &a);
                a.f[0] = f1;
                a.f[1] = (f64)rdf32(0x805746e0u);
                a.r[0] = rd32(param_r3 + 8u) + r30;
                a.r[1] = 0u;
                a.r[2] = 0x817fdfccu;
                a.r[3] = rd32(param_r3 + 4u);
                a.r[4] = 6u;
                a.r[5] = r31;
                (void)tc_call(0x8006e674u, &a);
            }
            r30 = r30 + 0xf0u;
            r28 = r28 + 1u;
        }
    }
    return;
}
