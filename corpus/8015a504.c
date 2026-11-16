#include "tc_rt.h"

void fn_8015a504(f64 param_f1, u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
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
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x8015b9d4u, &a);
    if ((u32)rd16(r3) != 0u) {
        a.r[0] = 0x8033a678u;
        r3 = tc_call(0x8011df4cu, &a);
        r31 = rd32(r3 + 0x30u);
        r30 = r3;
        a.r[0] = r3;
        f1 = tc_callf(0x8011c8fcu, &a);
        a.f[0] = param_f1;
        a.f[1] = (f64)rdf32(0x80574960u);
        a.f[2] = f1;
        f1 = tc_callf(0x800acaf8u, &a);
        a.f[0] = f1;
        a.r[0] = r30;
        (void)tc_call(0x8011c914u, &a);
        if (param_r4 == 1u) {
            a.f[0] = (f64)rdf32(0x80574964u);
            a.f[1] = (f64)rdf32(0x8057498cu);
            a.r[0] = r31;
            f1 = tc_callf(0x8011d9a4u, &a);
        } else {
            f1 = (f64)rdf32(0x8057498cu);
            a.f[0] = f1;
            a.f[1] = f1;
            a.r[0] = r31;
            f1 = tc_callf(0x8011d9a4u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r30;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8011c924u, &a);
        a.r[0] = r30;
        (void)tc_call(0x8011c968u, &a);
        r3 = tc_call(0x80052c3cu, &a);
        r30 = r3;
        a.r[0] = r3;
        (void)tc_call(0x800cb808u, &a);
        a.r[0] = r31;
        a.r[1] = 0x8033a69au;
        (void)tc_call(0x8011d53cu, &a);
        a.r[0] = r31;
        a.r[1] = 0x817fdfd4u;
        a.r[2] = 0x817fdfd0u;
        a.r[3] = 0x817fdfccu;
        a.r[4] = 0x817fdfc8u;
        (void)tc_call(0x8011d94cu, &a);
        r29 = 0u;
        if (param_r4 == 1u) {
            r29 = 2u;
            wrf32d(0x817fdfd4u, (f64)(f32)((f64)rdf32(0x817fdfd4u) - (f64)rdf32(0x817fdfccu)));
        } else {
            wrf32d(0x817fdfccu, (f64)rdf32(0x80574990u));
        }
        if (rd32(0x80571100u) == 1u) {
            wrf32d(0x817fdfccu, (f64)(f32)((f64)rdf32(0x817fdfccu) * (f64)rdf32(0x80574994u)));
        }
        a.r[0] = r31;
        a.r[1] = 0x8033a6a5u;
        (void)tc_call(0x8011d53cu, &a);
        a.r[0] = r31;
        r3 = tc_call(0x8011d794u, &a);
        r31 = r3;
        a.r[0] = 1u;
        (void)tc_call(0x8004ca7cu, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x8004cb58u, &a);
        wr8(r30 + 0x52u, 3u);
        a.r[0] = r30;
        a.r[1] = 0x28u;
        a.r[2] = 0x50u;
        a.r[3] = 0x80u;
        a.r[4] = 0xffu;
        (void)tc_call(0x800cd03cu, &a);
        wrf32d(r30 + 0x58u, (f64)rdf32(0x80574998u));
        a.r[0] = r30;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0x28u;
        (void)tc_call(0x800cd028u, &a);
        f0 = (f64)rdf32(0x805749a0u);
        wrf32d(r30 + 0x54u, (f64)rdf32(0x8057499cu));
        wrf32d(r30 + 0x5cu, f0);
        wrf32d(r30 + 0x60u, f0);
        a.r[0] = r30;
        a.r[1] = 0xffu;
        a.r[2] = 0xffu;
        a.r[3] = 0xffu;
        a.r[4] = r31 & 0xffu;
        (void)tc_call(0x800cd014u, &a);
        wr32(r30 + 0x10a0u, 2u);
        wr8(r30 + 0x50u, (u8)r29);
        a.f[0] = (f64)rdf32(0x817fdfd4u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        a.f[2] = (f64)rdf32(0x817fdfccu);
        a.f[3] = (f64)rdf32(0x817fdfc8u);
        a.r[0] = r30;
        (void)tc_call(0x800cc524u, &a);
        wrf32d(r30 + 0x30u, (f64)rdf32(0x805749a4u));
        a.r[0] = param_r3;
        a.r[1] = param_r4;
        r3 = tc_call(0x8015b9d4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r30;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800cbc94u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x8004ca7cu, &a);
    }
    return;
}
