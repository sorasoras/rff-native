#include "tc_rt.h"

u32 fn_802246b4(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0, f13 = 0.0;
    f64 f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    r0 = (u32)rd8((u32)param_1 + 0x373u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (c0lt) {
            r3 = 1u;
            return r3;
        }
        if ((s32)r0 >= 3) {
            r3 = 1u;
            return r3;
        }
        wr8((u32)param_1 + 0x373u, 1u);
    } else {
        f7 = (f64)rdf32(0x80576aacu);
        f5 = (f64)rdf32((u32)param_1 + 0x378u);
        f9 = ppc_fnmsubs(f7, f5, (f64)rdf32((u32)param_1 + 0x11cu));
        f10 = ppc_fnmsubs(f7, f5, (f64)rdf32((u32)param_1 + 0x8cu));
        f13 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x108u) + f9);
        f8 = ppc_fnmsubs(f7, f5, (f64)rdf32((u32)param_1 + 0x1bcu));
        f6 = ppc_fnmsubs(f7, f5, (f64)rdf32((u32)param_1 + 0x24cu));
        f4 = ppc_fnmsubs(f7, f5, (f64)rdf32((u32)param_1 + 0x2dcu));
        f2 = ppc_fnmsubs(f7, f5, (f64)rdf32((u32)param_1 + 0x36cu));
        f11 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x78u) + f10);
        f7 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1a8u) + f8);
        f28 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x358u) + f2);
        f26 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x238u) + f6);
        f27 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x2c8u) + f4);
        f5 = (f64)rdf32((u32)param_1 + 0x7cu);
        f12 = (f64)rdf32((u32)param_1 + 0x10cu);
        f3 = (f64)rdf32((u32)param_1 + 0x1acu);
        c0lt = (f64)(f32)((f64)rdf32((u32)param_1 + 0x114u) + f13) < (f64)rdf32(0x80576a70u);
        f29 = (f64)rdf32((u32)param_1 + 0x23cu);
        f30 = (f64)rdf32((u32)param_1 + 0x2ccu);
        f31 = (f64)rdf32((u32)param_1 + 0x35cu);
        wrf32d((u32)param_1 + 0x8cu, f10);
        wrf32d((u32)param_1 + 4u, f11);
        wrf32d((u32)param_1 + 8u, f5);
        wrf32d((u32)param_1 + 0x11cu, f9);
        wrf32d((u32)param_1 + 0x94u, f13);
        wrf32d((u32)param_1 + 0x98u, f12);
        wrf32d((u32)param_1 + 0x1bcu, f8);
        wrf32d((u32)param_1 + 0x134u, f7);
        wrf32d((u32)param_1 + 0x138u, f3);
        wrf32d((u32)param_1 + 0x24cu, f6);
        wrf32d((u32)param_1 + 0x1c4u, f26);
        wrf32d((u32)param_1 + 0x1c8u, f29);
        wrf32d((u32)param_1 + 0x2dcu, f4);
        wrf32d((u32)param_1 + 0x254u, f27);
        wrf32d((u32)param_1 + 0x258u, f30);
        wrf32d((u32)param_1 + 0x36cu, f2);
        wrf32d((u32)param_1 + 0x2e4u, f28);
        wrf32d((u32)param_1 + 0x2e8u, f31);
        if (c0lt) {
            wr32((u32)param_1 + 0x120u, 0u);
            wr32((u32)param_1 + 0x124u, 0u);
            wr32((u32)param_1 + 0x128u, 0u);
            wr32((u32)param_1 + 0x12cu, 0u);
            wr8((u32)param_1 + 0x373u, 0u);
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
