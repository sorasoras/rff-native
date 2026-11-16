#include "tc_rt.h"

void fn_800908c8(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_1;
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
    a.r[1] = 0x372u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = 1u;
    (void)tc_call(0x80050b14u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    r3 = r31;
    r4 = 0u;
    ctr = 3u;
    do {
        r4 = r4 + 1u;
        wrf32d(r30 + 0xeb4u, (f64)rdf32(r3));
        wrf32d(r30 + 0xeb8u, (f64)rdf32(r3 + 4u));
        wrf32d(r30 + 0xebcu, (f64)rdf32(r3 + 8u));
        wrf32d(r30 + 0xec0u, (f64)rdf32(r3 + 0xcu));
        wrf32d(r30 + 0xec4u, (f64)rdf32(r3 + 0x10u));
        wrf32d(r30 + 0xec8u, (f64)rdf32(r3 + 0x14u));
        wrf32d(r30 + 0xeccu, (f64)rdf32(r3 + 0x18u));
        wrf32d(r30 + 0xed0u, (f64)rdf32(r3 + 0x1cu));
        wrf32d(r30 + 0xed4u, (f64)rdf32(r3 + 0x20u));
        wrf32d(r30 + 0xed8u, (f64)rdf32(r3 + 0x24u));
        wrf32d(r30 + 0xedcu, (f64)rdf32(r3 + 0x28u));
        wrf32d(r30 + 0xee0u, (f64)rdf32(r3 + 0x2cu));
        wrf32d(r30 + 0xee4u, (f64)rdf32(r3 + 0x30u));
        wrf32d(r30 + 0xee8u, (f64)rdf32(r3 + 0x34u));
        wrf32d(r30 + 0xeecu, (f64)rdf32(r3 + 0x38u));
        wrf32d(r30 + 0xef0u, (f64)rdf32(r3 + 0x3cu));
        wrf32d(r30 + 0xef4u, (f64)rdf32(r3 + 0x40u));
        wrf32d(r30 + 0xef8u, (f64)rdf32(r3 + 0x44u));
        wrf32d(r30 + 0xefcu, (f64)rdf32(r3 + 0x48u));
        wrf32d(r30 + 0xf00u, (f64)rdf32(r3 + 0x4cu));
        wrf32d(r30 + 0xf04u, (f64)rdf32(r3 + 0x50u));
        wrf32d(r30 + 0xf08u, (f64)rdf32(r3 + 0x54u));
        wrf32d(r30 + 0xf0cu, (f64)rdf32(r3 + 0x58u));
        wrf32d(r30 + 0xf10u, (f64)rdf32(r3 + 0x5cu));
        wrf32d(r30 + 0xf14u, (f64)rdf32(r3 + 0x60u));
        wrf32d(r30 + 0xf18u, (f64)rdf32(r3 + 0x64u));
        wrf32d(r30 + 0xf1cu, (f64)rdf32(r3 + 0x68u));
        wrf32d(r30 + 0xf20u, (f64)rdf32(r3 + 0x6cu));
        wrf32d(r30 + 0xf24u, (f64)rdf32(r3 + 0x70u));
        wrf32d(r30 + 0xf28u, (f64)rdf32(r3 + 0x74u));
        wrf32d(r30 + 0xf2cu, (f64)rdf32(r3 + 0x78u));
        wrf32d(r30 + 0xf30u, (f64)rdf32(r3 + 0x7cu));
        wrf32d(r30 + 0xf34u, (f64)rdf32(r3 + 0x80u));
        wrf32d(r30 + 0xf38u, (f64)rdf32(r3 + 0x84u));
        wrf32d(r30 + 0xf3cu, (f64)rdf32(r3 + 0x88u));
        f0 = (f64)rdf32(r3 + 0x8cu);
        r3 = r3 + 0x90u;
        wrf32d(r30 + 0xf40u, f0);
        r30 = r30 + 0x90u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    return;
}
