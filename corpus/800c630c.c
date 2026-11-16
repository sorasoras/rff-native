#include "tc_rt.h"

void fn_800c630c(f64 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    f0 = (f64)rdf32(0x80572eacu);
    if ((param_1 < f0) || (param_1 == f0)) {
        return;
    }
    r0 = param_3 - 0x2cu;
    if (r0 > 0xfu) {
        return;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r3 = rd32(r0 - 0x7fcaaaacu);
    sw_ = r3;
    switch (sw_) {
    case 0x800c6340u:
        wrf32d(0x804991c8u, param_1);
        return;
    case 0x800c6350u:
        wrf32d(0x804991ccu, param_1);
        return;
    case 0x800c6360u:
        wrf32d(0x804991d0u, param_1);
        return;
    case 0x800c6370u:
        wrf32d(0x804991d8u, param_1);
        return;
    case 0x800c6380u:
        wrf32d(0x804991d4u, param_1);
        return;
    case 0x800c6390u:
        wrf32d(0x804991dcu, param_1);
        return;
    case 0x800c63a0u:
        wrf32d(0x804991e0u, param_1);
        return;
    case 0x800c63b0u:
        wrf32d(0x804991e4u, param_1);
        return;
    case 0x800c63c0u:
        wrf32d(0x804991e8u, param_1);
        return;
    case 0x800c63d0u:
        wrf32d(0x804991ecu, param_1);
        return;
    case 0x800c63e0u:
        wrf32d(0x804991f0u, param_1);
        return;
    case 0x800c63f0u:
        wrf32d(0x80499204u, param_1);
        return;
    case 0x800c6400u:
        wrf32d(0x804991f4u, param_1);
        return;
    case 0x800c6410u:
        wrf32d(0x804991f8u, param_1);
        return;
    case 0x800c6420u:
        wrf32d(0x804991fcu, param_1);
        return;
    case 0x800c6430u:
        wrf32d(0x80499200u, param_1);
        return;
    default:
        a.r[0] = r3;
        a.r[1] = param_3;
        a.f[0] = param_1;
        r3 = tc_call(sw_, &a);
        r0 = 0u;
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        r11 = 0u;
        r12 = 0u;
        f0 = 0.0;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        f9 = 0.0;
        f10 = 0.0;
        f11 = 0.0;
        f12 = 0.0;
        f13 = 0.0;
        ctr = 0u;
        return;
    }
}
