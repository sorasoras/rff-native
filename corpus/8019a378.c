#include "tc_rt.h"

void fn_8019a378(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0;
    r3 = (u32)param_1;
    if (rd32(0x80571100u) == 1u) {
        f3 = (f64)rdf32((u32)param_1 + 0xd4u);
        f2 = (f64)rdf32((u32)param_1 + 0xdcu);
        f5 = (f64)rdf32((u32)param_1 + 0xc8u);
        f4 = (f64)rdf32((u32)param_1 + 0xd8u);
        f7 = (f64)rdf32((u32)param_1 + 0x44cu);
        f6 = (f64)rdf32((u32)param_1 + 0x454u);
        f9 = (f64)rdf32((u32)param_1 + 0x440u);
        f8 = (f64)rdf32((u32)param_1 + 0x450u);
        wrf32d((u32)param_1 + 0x514u, (f64)rdf32(0x805756acu));
        f1 = (f64)rdf32(0x80575678u);
        wrf32d((u32)param_1 + 0x60u, f2);
        wrf32d((u32)param_1 + 0x5cu, f3);
        wrf32d((u32)param_1 + 0x50u, f4);
        wrf32d((u32)param_1 + 0x54u, f5);
        wrf32d((u32)param_1 + 0x3d8u, f6);
        wrf32d((u32)param_1 + 0x3d4u, f7);
        wrf32d((u32)param_1 + 0x3c8u, f8);
        wrf32d((u32)param_1 + 0x3ccu, f9);
        f0 = (f64)rdf32((u32)param_1 + 0x170u);
        if (f1 != f0) {
            f2 = (f64)rdf32((u32)param_1 + 0x168u);
            wrf32d((u32)param_1 + 0xf4u, f0);
            wrf32d((u32)param_1 + 0xf0u, f2);
        }
        f2 = (f64)rdf32((u32)param_1 + 0x15cu);
        wrf32d((u32)param_1 + 0xe4u, (f64)rdf32((u32)param_1 + 0x16cu));
        wrf32d((u32)param_1 + 0xe8u, f2);
        f0 = (f64)rdf32((u32)param_1 + 0x204u);
        if (f1 != f0) {
            f2 = (f64)rdf32((u32)param_1 + 0x1fcu);
            wrf32d((u32)param_1 + 0x188u, f0);
            wrf32d((u32)param_1 + 0x184u, f2);
        }
        f2 = (f64)rdf32((u32)param_1 + 0x1f0u);
        wrf32d((u32)param_1 + 0x178u, (f64)rdf32((u32)param_1 + 0x200u));
        wrf32d((u32)param_1 + 0x17cu, f2);
        f0 = (f64)rdf32((u32)param_1 + 0x298u);
        if (f1 != f0) {
            f2 = (f64)rdf32((u32)param_1 + 0x290u);
            wrf32d((u32)param_1 + 0x21cu, f0);
            wrf32d((u32)param_1 + 0x218u, f2);
        }
        f2 = (f64)rdf32((u32)param_1 + 0x284u);
        wrf32d((u32)param_1 + 0x20cu, (f64)rdf32((u32)param_1 + 0x294u));
        wrf32d((u32)param_1 + 0x210u, f2);
        f0 = (f64)rdf32((u32)param_1 + 0x32cu);
        if (f1 != f0) {
            f2 = (f64)rdf32((u32)param_1 + 0x324u);
            wrf32d((u32)param_1 + 0x2b0u, f0);
            wrf32d((u32)param_1 + 0x2acu, f2);
        }
        f2 = (f64)rdf32((u32)param_1 + 0x318u);
        wrf32d((u32)param_1 + 0x2a0u, (f64)rdf32((u32)param_1 + 0x328u));
        wrf32d((u32)param_1 + 0x2a4u, f2);
        f0 = (f64)rdf32((u32)param_1 + 0x3c0u);
        if (f1 != f0) {
            f2 = (f64)rdf32((u32)param_1 + 0x3b8u);
            wrf32d((u32)param_1 + 0x344u, f0);
            wrf32d((u32)param_1 + 0x340u, f2);
        }
        f2 = (f64)rdf32((u32)param_1 + 0x3acu);
        r4 = 0u;
        f1 = (f64)rdf32(0x80575678u);
        wrf32d((u32)param_1 + 0x334u, (f64)rdf32((u32)param_1 + 0x3bcu));
        wrf32d((u32)param_1 + 0x338u, f2);
        ctr = 2u;
        do {
            f0 = (f64)rdf32(r3 + 0x5a8u);
            if (f1 != f0) {
                f2 = (f64)rdf32(r3 + 0x5a0u);
                wrf32d(r3 + 0x52cu, f0);
                wrf32d(r3 + 0x528u, f2);
            }
            f2 = (f64)rdf32(r3 + 0x594u);
            wrf32d(r3 + 0x51cu, (f64)rdf32(r3 + 0x5a4u));
            wrf32d(r3 + 0x520u, f2);
            f0 = (f64)rdf32(r3 + 0x63cu);
            if (f1 != f0) {
                f2 = (f64)rdf32(r3 + 0x634u);
                wrf32d(r3 + 0x5c0u, f0);
                wrf32d(r3 + 0x5bcu, f2);
            }
            f2 = (f64)rdf32(r3 + 0x628u);
            wrf32d(r3 + 0x5b0u, (f64)rdf32(r3 + 0x638u));
            wrf32d(r3 + 0x5b4u, f2);
            f0 = (f64)rdf32(r3 + 0x6d0u);
            if (f1 != f0) {
                f2 = (f64)rdf32(r3 + 0x6c8u);
                wrf32d(r3 + 0x654u, f0);
                wrf32d(r3 + 0x650u, f2);
            }
            f2 = (f64)rdf32(r3 + 0x6bcu);
            wrf32d(r3 + 0x644u, (f64)rdf32(r3 + 0x6ccu));
            wrf32d(r3 + 0x648u, f2);
            f0 = (f64)rdf32(r3 + 0x764u);
            if (f1 != f0) {
                f2 = (f64)rdf32(r3 + 0x75cu);
                wrf32d(r3 + 0x6e8u, f0);
                wrf32d(r3 + 0x6e4u, f2);
            }
            f2 = (f64)rdf32(r3 + 0x750u);
            r4 = r4 + 3u;
            wrf32d(r3 + 0x6d8u, (f64)rdf32(r3 + 0x760u));
            wrf32d(r3 + 0x6dcu, f2);
            r3 = r3 + 0x250u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    f3 = (f64)rdf32((u32)param_1 + 0xd4u);
    f2 = (f64)rdf32((u32)param_1 + 0xd0u);
    f5 = (f64)rdf32((u32)param_1 + 0xc8u);
    f4 = (f64)rdf32((u32)param_1 + 0xc4u);
    f7 = (f64)rdf32((u32)param_1 + 0x44cu);
    f6 = (f64)rdf32((u32)param_1 + 0x448u);
    f9 = (f64)rdf32((u32)param_1 + 0x440u);
    f8 = (f64)rdf32((u32)param_1 + 0x43cu);
    wrf32d((u32)param_1 + 0x514u, (f64)rdf32(0x805756b0u));
    f1 = (f64)rdf32(0x80575678u);
    wrf32d((u32)param_1 + 0x60u, f2);
    wrf32d((u32)param_1 + 0x5cu, f3);
    wrf32d((u32)param_1 + 0x50u, f4);
    wrf32d((u32)param_1 + 0x54u, f5);
    wrf32d((u32)param_1 + 0x3d8u, f6);
    wrf32d((u32)param_1 + 0x3d4u, f7);
    wrf32d((u32)param_1 + 0x3c8u, f8);
    wrf32d((u32)param_1 + 0x3ccu, f9);
    f0 = (f64)rdf32((u32)param_1 + 0x164u);
    if (f1 != f0) {
        f2 = (f64)rdf32((u32)param_1 + 0x168u);
        wrf32d((u32)param_1 + 0xf4u, f0);
        wrf32d((u32)param_1 + 0xf0u, f2);
    }
    f2 = (f64)rdf32((u32)param_1 + 0x15cu);
    wrf32d((u32)param_1 + 0xe4u, (f64)rdf32((u32)param_1 + 0x158u));
    wrf32d((u32)param_1 + 0xe8u, f2);
    f0 = (f64)rdf32((u32)param_1 + 0x1f8u);
    if (f1 != f0) {
        f2 = (f64)rdf32((u32)param_1 + 0x1fcu);
        wrf32d((u32)param_1 + 0x188u, f0);
        wrf32d((u32)param_1 + 0x184u, f2);
    }
    f2 = (f64)rdf32((u32)param_1 + 0x1f0u);
    wrf32d((u32)param_1 + 0x178u, (f64)rdf32((u32)param_1 + 0x1ecu));
    wrf32d((u32)param_1 + 0x17cu, f2);
    f0 = (f64)rdf32((u32)param_1 + 0x28cu);
    if (f1 != f0) {
        f2 = (f64)rdf32((u32)param_1 + 0x290u);
        wrf32d((u32)param_1 + 0x21cu, f0);
        wrf32d((u32)param_1 + 0x218u, f2);
    }
    f2 = (f64)rdf32((u32)param_1 + 0x284u);
    wrf32d((u32)param_1 + 0x20cu, (f64)rdf32((u32)param_1 + 0x280u));
    wrf32d((u32)param_1 + 0x210u, f2);
    f0 = (f64)rdf32((u32)param_1 + 0x320u);
    if (f1 != f0) {
        f2 = (f64)rdf32((u32)param_1 + 0x324u);
        wrf32d((u32)param_1 + 0x2b0u, f0);
        wrf32d((u32)param_1 + 0x2acu, f2);
    }
    f2 = (f64)rdf32((u32)param_1 + 0x318u);
    wrf32d((u32)param_1 + 0x2a0u, (f64)rdf32((u32)param_1 + 0x314u));
    wrf32d((u32)param_1 + 0x2a4u, f2);
    f0 = (f64)rdf32((u32)param_1 + 0x3b4u);
    if (f1 != f0) {
        f2 = (f64)rdf32((u32)param_1 + 0x3b8u);
        wrf32d((u32)param_1 + 0x344u, f0);
        wrf32d((u32)param_1 + 0x340u, f2);
    }
    f2 = (f64)rdf32((u32)param_1 + 0x3acu);
    r4 = 0u;
    f1 = (f64)rdf32(0x80575678u);
    wrf32d((u32)param_1 + 0x334u, (f64)rdf32((u32)param_1 + 0x3a8u));
    wrf32d((u32)param_1 + 0x338u, f2);
    ctr = 2u;
    do {
        f0 = (f64)rdf32(r3 + 0x59cu);
        if (f1 != f0) {
            f2 = (f64)rdf32(r3 + 0x5a0u);
            wrf32d(r3 + 0x52cu, f0);
            wrf32d(r3 + 0x528u, f2);
        }
        f2 = (f64)rdf32(r3 + 0x594u);
        wrf32d(r3 + 0x51cu, (f64)rdf32(r3 + 0x590u));
        wrf32d(r3 + 0x520u, f2);
        f0 = (f64)rdf32(r3 + 0x630u);
        if (f1 != f0) {
            f2 = (f64)rdf32(r3 + 0x634u);
            wrf32d(r3 + 0x5c0u, f0);
            wrf32d(r3 + 0x5bcu, f2);
        }
        f2 = (f64)rdf32(r3 + 0x628u);
        wrf32d(r3 + 0x5b0u, (f64)rdf32(r3 + 0x624u));
        wrf32d(r3 + 0x5b4u, f2);
        f0 = (f64)rdf32(r3 + 0x6c4u);
        if (f1 != f0) {
            f2 = (f64)rdf32(r3 + 0x6c8u);
            wrf32d(r3 + 0x654u, f0);
            wrf32d(r3 + 0x650u, f2);
        }
        f2 = (f64)rdf32(r3 + 0x6bcu);
        wrf32d(r3 + 0x644u, (f64)rdf32(r3 + 0x6b8u));
        wrf32d(r3 + 0x648u, f2);
        f0 = (f64)rdf32(r3 + 0x758u);
        if (f1 != f0) {
            f2 = (f64)rdf32(r3 + 0x75cu);
            wrf32d(r3 + 0x6e8u, f0);
            wrf32d(r3 + 0x6e4u, f2);
        }
        f2 = (f64)rdf32(r3 + 0x750u);
        r4 = r4 + 3u;
        wrf32d(r3 + 0x6d8u, (f64)rdf32(r3 + 0x74cu));
        wrf32d(r3 + 0x6dcu, f2);
        r3 = r3 + 0x250u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
