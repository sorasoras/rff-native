#include "tc_rt.h"

void fn_800a22cc(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(param_1, param_2);
    r28 = param_3;
    wr32(param_1 + 8u, param_3);
    wr32(param_1 + 0xcu, (u32)param_4);
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    r4 = ((u32)param_4 * 0xe4u) + 0x10u;
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
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = r4;
                r3 = tc_call(0x80094e80u, &a);
                f1 = tc_lastf();
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
            }
        }
    }
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x8007d670u;
        a.r[2] = 0x80066970u;
        a.r[3] = 0xe4u;
        a.r[4] = (u32)param_4;
        r3 = tc_call(0x80255464u, &a);
        f1 = tc_lastf();
    }
    wr32(param_1 + 4u, r3);
    r31 = 0u;
    f31 = (f64)rdf32(0x80572ad0u);
    r30 = 0u;
    while ((s32)r31 < (s32)rd32(param_1 + 0xcu)) {
        wrf32d(0x817fdfd0u, f31);
        wrf32d(0x817fdfccu, f31);
        wrf32d(0x817fdfc8u, f31);
        r3 = rd32(param_1);
        a.r[0] = r3;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = rd32(r28);
        a.r[3] = r28 + 4u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(r3) + 0x38u), &a);
        a.f[0] = (f64)rdf32(r28 + 0x10u);
        a.f[1] = (f64)rdf32(0x80572ad0u);
        a.r[0] = rd32(param_1 + 4u) + r30;
        a.r[1] = 0u;
        a.r[2] = 0x817fdfc8u;
        a.r[3] = rd32(param_1);
        a.r[4] = 6u;
        a.r[5] = 5u;
        f1 = tc_callf(0x8006e674u, &a);
        r28 = r28 + 0x14u;
        r30 = r30 + 0xe4u;
        r31 = r31 + 1u;
    }
    wr32(param_1 + 0x10u, 0u);
    return;
}
