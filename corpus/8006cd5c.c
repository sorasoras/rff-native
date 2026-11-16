#include "tc_rt.h"

void fn_8006cd5c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r0 = 0u;
    r31 = rd32((u32)param_1 + 0x5c0u);
    if ((s32)r31 >= 0 && (s32)r31 <= 36) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        wr32((u32)param_1 + 0x9ecu, 2u);
        wr32((u32)param_1 + 0x9e4u, 1u);
        wr32((u32)param_1 + 0x9e8u, 2u);
        wr32((u32)param_1 + 0x9f0u, 0u);
        wr32((u32)param_1 + 0x9f8u, 0u);
    } else {
        a.r[0] = rd32((u32)param_1 + 0xacu);
        r3 = tc_call(0x8007dad4u, &a);
        r3 = rd32(r3 + 0xcu);
        a.r[0] = r3;
        r3 = tc_call(0x800f2a0cu, &a);
        if (r31 != 0x2e8u) {
            r0 = 0u;
            if ((s32)r31 >= 353 && (s32)r31 <= 360) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r3 = rd32(r3);
                r3 = r3 + (rd32((u32)param_1 + 0x100u) * 0x24u);
                if (((u32)rd8(r3 + 1u) & 5u) == 0u && rd32((u32)param_1 + 0xa48u) == 0u) {
                    r3 = tc_call(0x800c70a0u, &a);
                    if (r3 != 0u) {
                        a.r[0] = (u32)param_1;
                        r3 = tc_call(0x800c341cu, &a);
                        if (r3 != 0u) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = rd32((u32)param_1 + 0x5c0u);
                            r3 = tc_call(0x8006cee8u, &a);
                            if (r3 != 0u) {
                                if (rd32((u32)param_1 + 0x9e4u) == 0u) {
                                    f1 = (f64)rdf32((u32)param_1 + 0x9a0u);
                                    f0 = (f64)rdf32((u32)param_1 + 0x9a4u);
                                    wrf32d((u32)param_1 + 0x9bcu, (f64)rdf32((u32)param_1 + 0x99cu));
                                    wrf32d((u32)param_1 + 0x9c0u, f1);
                                    wrf32d((u32)param_1 + 0x9c4u, f0);
                                    return;
                                }
                                f1 = (f64)rdf32((u32)param_1 + 0x994u);
                                f0 = (f64)rdf32((u32)param_1 + 0x998u);
                                wrf32d((u32)param_1 + 0x9bcu, (f64)rdf32((u32)param_1 + 0x990u));
                                wrf32d((u32)param_1 + 0x9c0u, f1);
                                wrf32d((u32)param_1 + 0x9c4u, f0);
                                return;
                            }
                        }
                    }
                    wr32((u32)param_1 + 0x9e4u, 0u);
                    wr32((u32)param_1 + 0x9ecu, 1u);
                    wr32((u32)param_1 + 0x9e8u, 0u);
                    wr32((u32)param_1 + 0x9f0u, 0u);
                    wr32((u32)param_1 + 0x9f8u, 0u);
                    return;
                }
            }
        }
        wr32((u32)param_1 + 0x9e4u, 0u);
        wr32((u32)param_1 + 0x9ecu, 1u);
        wr32((u32)param_1 + 0x9e8u, 0u);
        wr32((u32)param_1 + 0x9f0u, 0u);
        wr32((u32)param_1 + 0x9f8u, 0u);
    }
    return;
}
