#include "tc_rt.h"

u32 fn_802242d0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    r0 = (u32)rd8((u32)param_1 + 0x373u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (!c0lt) {
            r3 = 1u;
            return r3;
        }
        if ((s32)r0 < 0) {
            r3 = 1u;
            return r3;
        }
        f2 = (f64)rdf32((u32)param_1 + 0x378u);
        f8 = (f64)rdf32((u32)param_1 + 0x10cu);
        f4 = (f64)rdf32((u32)param_1 + 0x8cu);
        f6 = ppc_fnmadds((f64)rdf32((u32)param_1 + 0x84u), f2, (f64)(f32)((f64)rdf32((u32)param_1 + 0x114u) * f2));
        f0 = (f64)rdf32((u32)param_1 + 0x11cu);
        f3 = rdf64(0x80576ab0u);
        wrf32d((u32)param_1 + 8u, (f64)rdf32((u32)param_1 + 0x7cu));
        f5 = (f64)(f32)(f4 + f6);
        f4 = (f64)(f32)(f0 + f6);
        f0 = (f64)rdf32((u32)param_1 + 0x108u);
        f1 = f3 - f2;
        f2 = (f64)rdf32((u32)param_1 + 0x78u);
        wrf32d((u32)param_1 + 0x8cu, f5);
        f6 = (f64)(f32)(f2 + f5);
        f0 = (f64)(f32)(f0 + f4);
        wrf32d((u32)param_1 + 0x11cu, f4);
        f2 = (f64)(f32)f5;
        wrf32d((u32)param_1 + 4u, f6);
        wrf32d((u32)param_1 + 0x94u, f0);
        wrf32d((u32)param_1 + 0x98u, f8);
        f1 = (f64)(f32)((f64)(f32)(f1 * -(f64)rdf32((u32)param_1 + 0x1a8u)) + f2);
        wrf32d((u32)param_1 + 0x1bcu, f1);
        f4 = (f64)rdf32((u32)param_1 + 0x1acu);
        wrf32d((u32)param_1 + 0x134u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1a8u) + f1));
        wrf32d((u32)param_1 + 0x138u, f4);
        f1 = (f64)(f32)((f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x238u)) + f2);
        wrf32d((u32)param_1 + 0x24cu, f1);
        f4 = (f64)rdf32((u32)param_1 + 0x23cu);
        wrf32d((u32)param_1 + 0x1c4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x238u) + f1));
        wrf32d((u32)param_1 + 0x1c8u, f4);
        f1 = (f64)(f32)((f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x2c8u)) + f2);
        wrf32d((u32)param_1 + 0x2dcu, f1);
        f4 = (f64)rdf32((u32)param_1 + 0x2ccu);
        wrf32d((u32)param_1 + 0x254u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x2c8u) + f1));
        wrf32d((u32)param_1 + 0x258u, f4);
        f1 = (f64)(f32)((f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x358u)) + f2);
        wrf32d((u32)param_1 + 0x36cu, f1);
        f4 = (f64)rdf32((u32)param_1 + 0x35cu);
        wrf32d((u32)param_1 + 0x2e4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x358u) + f1));
        wrf32d((u32)param_1 + 0x2e8u, f4);
        wr8((u32)param_1 + 0x373u, 1u);
    } else {
        f31 = (f64)rdf32((u32)param_1 + 0x78u);
        f8 = (f64)rdf32((u32)param_1 + 0x378u);
        f3 = rdf64(0x80576ab0u);
        f28 = (f64)rdf32((u32)param_1 + 0x7cu);
        f2 = f3 - f8;
        f26 = (f64)rdf32((u32)param_1 + 0x10cu);
        f27 = (f64)rdf32((u32)param_1 + 0x1acu);
        f10 = (f64)rdf32(0x80576aacu);
        f30 = ppc_fmadds(f10, f8, (f64)rdf32((u32)param_1 + 0x8cu));
        f11 = ppc_fmadds(f10, f8, (f64)rdf32((u32)param_1 + 0x1bcu));
        f13 = ppc_fmadds(f10, f8, (f64)rdf32((u32)param_1 + 0x11cu));
        f7 = ppc_fmadds(f10, f8, (f64)rdf32((u32)param_1 + 0x2dcu));
        f6 = (f64)rdf32((u32)param_1 + 0x2c8u);
        f9 = ppc_fmadds(f10, f8, (f64)rdf32((u32)param_1 + 0x24cu));
        f29 = (f64)(f32)(f31 + f30);
        f0 = (f64)rdf32((u32)param_1 + 0x23cu);
        f5 = ppc_fmadds(f10, f8, (f64)rdf32((u32)param_1 + 0x36cu));
        f8 = (f64)rdf32((u32)param_1 + 0x238u);
        f4 = (f64)rdf32((u32)param_1 + 0x358u);
        f12 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x108u) + f13);
        f10 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1a8u) + f11);
        wrf32d((u32)param_1 + 0x8cu, f30);
        f1 = (f64)(f32)(f31 + (f64)(f32)(-f31 * f2));
        f25 = (f64)rdf32((u32)param_1 + 0x2ccu);
        f8 = (f64)(f32)(f8 + f9);
        f31 = (f64)rdf32((u32)param_1 + 0x35cu);
        f6 = (f64)(f32)(f6 + f7);
        wrf32d((u32)param_1 + 4u, f29);
        f4 = (f64)(f32)(f4 + f5);
        wrf32d((u32)param_1 + 8u, f28);
        wrf32d((u32)param_1 + 0x11cu, f13);
        wrf32d((u32)param_1 + 0x94u, f12);
        wrf32d((u32)param_1 + 0x98u, f26);
        wrf32d((u32)param_1 + 0x1bcu, f11);
        wrf32d((u32)param_1 + 0x134u, f10);
        wrf32d((u32)param_1 + 0x138u, f27);
        wrf32d((u32)param_1 + 0x24cu, f9);
        wrf32d((u32)param_1 + 0x1c4u, f8);
        wrf32d((u32)param_1 + 0x1c8u, f0);
        wrf32d((u32)param_1 + 0x2dcu, f7);
        wrf32d((u32)param_1 + 0x254u, f6);
        wrf32d((u32)param_1 + 0x258u, f25);
        wrf32d((u32)param_1 + 0x36cu, f5);
        wrf32d((u32)param_1 + 0x2e4u, f4);
        wrf32d((u32)param_1 + 0x2e8u, f31);
        if (f29 > f1) {
            f1 = (f64)(f32)(f2 * -(f64)rdf32((u32)param_1 + 0x78u));
            wrf32d((u32)param_1 + 0x8cu, f1);
            f2 = (f64)rdf32((u32)param_1 + 0x7cu);
            wrf32d((u32)param_1 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x78u) + f1));
            wrf32d((u32)param_1 + 8u, f2);
            f1 = (f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x108u));
            wrf32d((u32)param_1 + 0x11cu, f1);
            f2 = (f64)rdf32((u32)param_1 + 0x10cu);
            wrf32d((u32)param_1 + 0x94u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x108u) + f1));
            wrf32d((u32)param_1 + 0x98u, f2);
            f1 = (f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x1a8u));
            wrf32d((u32)param_1 + 0x1bcu, f1);
            f2 = (f64)rdf32((u32)param_1 + 0x1acu);
            wrf32d((u32)param_1 + 0x134u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x1a8u) + f1));
            wrf32d((u32)param_1 + 0x138u, f2);
            f1 = (f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x238u));
            wrf32d((u32)param_1 + 0x24cu, f1);
            f2 = (f64)rdf32((u32)param_1 + 0x23cu);
            wrf32d((u32)param_1 + 0x1c4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x238u) + f1));
            wrf32d((u32)param_1 + 0x1c8u, f2);
            f1 = (f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x2c8u));
            wrf32d((u32)param_1 + 0x2dcu, f1);
            f2 = (f64)rdf32((u32)param_1 + 0x2ccu);
            wrf32d((u32)param_1 + 0x254u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x2c8u) + f1));
            wrf32d((u32)param_1 + 0x258u, f2);
            f1 = (f64)(f32)((f3 - (f64)rdf32((u32)param_1 + 0x378u)) * -(f64)rdf32((u32)param_1 + 0x358u));
            wrf32d((u32)param_1 + 0x36cu, f1);
            f2 = (f64)rdf32((u32)param_1 + 0x35cu);
            wrf32d((u32)param_1 + 0x2e4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x358u) + f1));
            wrf32d((u32)param_1 + 0x2e8u, f2);
            wr8((u32)param_1 + 0x373u, 2u);
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
