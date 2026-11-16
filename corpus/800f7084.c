#include "tc_rt.h"

void fn_800f7084(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if (rd32(param_2 + 0x10u) != 0u) {
        a.r[0] = rd32(param_2);
        a.r[1] = 0x170u;
        a.r[2] = rd32(param_2 + 0xcu);
        a.r[3] = param_2 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r30 = r3;
    } else {
        if (rd32(param_2 + 0x20u) != 0u) {
            a.r[0] = param_2 + 0x24u;
            a.r[1] = 0x20u;
            a.r[2] = 0x170u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            a.r[0] = rd32(param_2);
            a.r[1] = 0x170u;
            a.r[2] = rd32(param_2 + 0xcu);
            a.r[3] = param_2 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r30 = r3;
    }
    wr32(param_1, r3);
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80573bd0u);
        r3 = r3;
        wrf32d(r30 + 0x14u, f0);
        wrf32d(r30 + 0x10u, f0);
        wrf32d(r30 + 0xcu, f0);
        wrf32d(r30 + 0x20u, f0);
        wrf32d(r30 + 0x1cu, f0);
        wrf32d(r30 + 0x18u, f0);
        wrf32d(r30 + 0x3cu, f0);
        wrf32d(r30 + 0x38u, f0);
        wrf32d(r30 + 0x34u, f0);
        wrf32d(r30 + 0x48u, f0);
        wrf32d(r30 + 0x44u, f0);
        wrf32d(r30 + 0x40u, f0);
        wrf32d(r30 + 0x64u, f0);
        wrf32d(r30 + 0x60u, f0);
        wrf32d(r30 + 0x5cu, f0);
        wrf32d(r30 + 0x70u, f0);
        wrf32d(r30 + 0x6cu, f0);
        wrf32d(r30 + 0x68u, f0);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x170u;
        (void)tc_call(0x8000443cu, &a);
        wr32(r30 + 0x164u, 0xffffffffu);
        wr32(r30 + 0x168u, 0xffffffffu);
        wr32(r30 + 0x16cu, 0u);
        wr32(r30 + 4u, 0u);
    }
    wr32(rd32(param_1), param_2);
    return;
}
