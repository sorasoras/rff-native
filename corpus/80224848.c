#include "tc_rt.h"

void fn_80224848(s32 param_1)
{
    u32 ctr = 0, r4 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    if ((f64)rdf32(0x80576a8cu) == (f64)rdf32((u32)param_1 + 0x378u) && rd32(0x80571100u) == 1u) {
        f1 = (f64)rdf32(0x80576ad0u);
        f2 = (f64)rdf32(0x80576ad4u);
        wrf32d((u32)param_1 + 0x378u, f1);
        f3 = (f64)(f32)f1;
        f4 = (f64)rdf32((u32)param_1 + 0x88u);
        wrf32d((u32)param_1 + 0x14u, (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0x84u)));
        wrf32d((u32)param_1 + 0x10u, f4);
        f1 = ppc_fmadds(f2, -(f64)rdf32((u32)param_1 + 0x78u), (f64)rdf32((u32)param_1 + 0x8cu));
        wrf32d((u32)param_1 + 0x8cu, f1);
        f4 = (f64)rdf32((u32)param_1 + 0x7cu);
        wrf32d((u32)param_1 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x78u) + f1));
        wrf32d((u32)param_1 + 8u, f4);
        f4 = (f64)rdf32((u32)param_1 + 0x118u);
        wrf32d((u32)param_1 + 0xa4u, (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0x114u)));
        wrf32d((u32)param_1 + 0xa0u, f4);
        f1 = ppc_fmadds(f2, -(f64)rdf32((u32)param_1 + 0x108u), (f64)rdf32((u32)param_1 + 0x11cu));
        wrf32d((u32)param_1 + 0x11cu, f1);
        f4 = (f64)rdf32((u32)param_1 + 0x10cu);
        wrf32d((u32)param_1 + 0x94u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x108u) + f1));
        wrf32d((u32)param_1 + 0x98u, f4);
        if ((u32)rd8((u32)param_1 + 0x370u) != 2u) {
            return;
        }
        r4 = (u32)param_1;
        ctr = 2u;
        do {
            f3 = (f64)rdf32(r4 + 0x1b8u);
            wrf32d(r4 + 0x144u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x378u) * (f64)rdf32(r4 + 0x1b4u)));
            wrf32d(r4 + 0x140u, f3);
            f1 = ppc_fmadds(f2, -(f64)rdf32(r4 + 0x1a8u), (f64)rdf32(r4 + 0x1bcu));
            wrf32d(r4 + 0x1bcu, f1);
            f3 = (f64)rdf32(r4 + 0x1acu);
            wrf32d(r4 + 0x134u, (f64)(f32)((f64)rdf32(r4 + 0x1a8u) + f1));
            wrf32d(r4 + 0x138u, f3);
            f3 = (f64)rdf32(r4 + 0x248u);
            wrf32d(r4 + 0x1d4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x378u) * (f64)rdf32(r4 + 0x244u)));
            wrf32d(r4 + 0x1d0u, f3);
            f1 = ppc_fmadds(f2, -(f64)rdf32(r4 + 0x238u), (f64)rdf32(r4 + 0x24cu));
            wrf32d(r4 + 0x24cu, f1);
            f3 = (f64)rdf32(r4 + 0x23cu);
            wrf32d(r4 + 0x1c4u, (f64)(f32)((f64)rdf32(r4 + 0x238u) + f1));
            wrf32d(r4 + 0x1c8u, f3);
            r4 = r4 + 0x120u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    if ((f64)rdf32(0x80576ad0u) != (f64)rdf32((u32)param_1 + 0x378u)) {
        return;
    }
    if (rd32(0x80571100u) != 0u) {
        return;
    }
    f1 = (f64)rdf32(0x80576a8cu);
    f2 = (f64)rdf32(0x80576ad4u);
    wrf32d((u32)param_1 + 0x378u, f1);
    f3 = (f64)(f32)f1;
    f4 = (f64)rdf32((u32)param_1 + 0x88u);
    wrf32d((u32)param_1 + 0x14u, (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0x84u)));
    wrf32d((u32)param_1 + 0x10u, f4);
    f1 = ppc_fnmsubs(f2, -(f64)rdf32((u32)param_1 + 0x78u), (f64)rdf32((u32)param_1 + 0x8cu));
    wrf32d((u32)param_1 + 0x8cu, f1);
    f4 = (f64)rdf32((u32)param_1 + 0x7cu);
    wrf32d((u32)param_1 + 4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x78u) + f1));
    wrf32d((u32)param_1 + 8u, f4);
    f4 = (f64)rdf32((u32)param_1 + 0x118u);
    wrf32d((u32)param_1 + 0xa4u, (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0x114u)));
    wrf32d((u32)param_1 + 0xa0u, f4);
    f1 = ppc_fnmsubs(f2, -(f64)rdf32((u32)param_1 + 0x108u), (f64)rdf32((u32)param_1 + 0x11cu));
    wrf32d((u32)param_1 + 0x11cu, f1);
    f4 = (f64)rdf32((u32)param_1 + 0x10cu);
    wrf32d((u32)param_1 + 0x94u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x108u) + f1));
    wrf32d((u32)param_1 + 0x98u, f4);
    if ((u32)rd8((u32)param_1 + 0x370u) != 2u) {
        return;
    }
    r4 = (u32)param_1;
    ctr = 2u;
    do {
        f3 = (f64)rdf32(r4 + 0x1b8u);
        wrf32d(r4 + 0x144u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x378u) * (f64)rdf32(r4 + 0x1b4u)));
        wrf32d(r4 + 0x140u, f3);
        f1 = ppc_fnmsubs(f2, -(f64)rdf32(r4 + 0x1a8u), (f64)rdf32(r4 + 0x1bcu));
        wrf32d(r4 + 0x1bcu, f1);
        f3 = (f64)rdf32(r4 + 0x1acu);
        wrf32d(r4 + 0x134u, (f64)(f32)((f64)rdf32(r4 + 0x1a8u) + f1));
        wrf32d(r4 + 0x138u, f3);
        f3 = (f64)rdf32(r4 + 0x248u);
        wrf32d(r4 + 0x1d4u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x378u) * (f64)rdf32(r4 + 0x244u)));
        wrf32d(r4 + 0x1d0u, f3);
        f1 = ppc_fnmsubs(f2, -(f64)rdf32(r4 + 0x238u), (f64)rdf32(r4 + 0x24cu));
        wrf32d(r4 + 0x24cu, f1);
        f3 = (f64)rdf32(r4 + 0x23cu);
        wrf32d(r4 + 0x1c4u, (f64)(f32)((f64)rdf32(r4 + 0x238u) + f1));
        wrf32d(r4 + 0x1c8u, f3);
        r4 = r4 + 0x120u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
