#include "tc_rt.h"

void fn_800c725c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32(0x805711ecu) == 0u) {
        r30 = rd32((u32)param_1 + 0x5c0u);
        r31 = (rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb97210u;
        do {
            if ((u32)rd8(r31 + 0x1eu) != 0u) {
                if (rd32((u32)param_1 + 0x110u) == 0u) {
                    a.f[0] = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
                    r3 = tc_call(0x802558e4u, &a);
                    if (r3 < (u32)rd8(r31 + 0x1cu)) break;
                }
                if ((u32)rd8(r31 + 1u) != 1u) {
                    r4 = (u32)rd8(r31 + 0x16u);
                    if (r4 == 0x21u) {
                        wr32((u32)param_1 + 0xa08u, 0x21u);
                        wr32((u32)param_1 + 0xa0cu, 0x21u);
                        wr32((u32)param_1 + 0xa10u, 0x21u);
                        wr32((u32)param_1 + 0xa14u, 0u);
                        return;
                    }
                    wr32((u32)param_1 + 0xa0cu, r4);
                    wr32((u32)param_1 + 0xa10u, 0x21u);
                    wr32((u32)param_1 + 0xa14u, 1u);
                } else {
                    r0 = (u32)rd8(((r30 - 0x1f8u) * 0x14u) - 0x7fb60831u);
                    c0lt = (s32)r0 < 3;
                    if (r0 == 3u) {
                        wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x19u));
                    } else if (!c0lt) {
                        if ((s32)r0 >= 5) {
                            wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x17u));
                        } else {
                            wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x1au));
                        }
                    } else {
                        c0lt = (s32)r0 < 1;
                        if (r0 == 1u) {
                            wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x17u));
                        } else if (!c0lt) {
                            wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x18u));
                        } else {
                            wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x17u));
                        }
                    }
                    if (rd32((u32)param_1 + 0xa10u) == 0x21u) {
                        wr32((u32)param_1 + 0xa08u, 0x21u);
                        wr32((u32)param_1 + 0xa0cu, 0x21u);
                        wr32((u32)param_1 + 0xa10u, 0x21u);
                        wr32((u32)param_1 + 0xa14u, 0u);
                        return;
                    }
                    wr32((u32)param_1 + 0xa0cu, 0x21u);
                    wr32((u32)param_1 + 0xa14u, 1u);
                }
            }
        } while (0);
        if (rd32((u32)param_1 + 0xa14u) == 0u) {
            r28 = rd32((u32)param_1 + 0xa08u);
            a.f[0] = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
            r3 = tc_call(0x802558e4u, &a);
            if (r3 >= (u32)rd8((r28 * 0x58u) - 0x7fb971fcu)) {
                r3 = tc_call(0x800c6e50u, &a);
                if (r3 != 0u) {
                    r3 = tc_call(0x800c3508u, &a);
                    if (r3 != 0u) {
                        r0 = (u32)rd8(((r30 - 0x1f8u) * 0x14u) - 0x7fb60831u);
                        c0lt = (s32)r0 < 3;
                        if (r0 == 3u) {
                            wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x19u));
                            return;
                        }
                        if (!c0lt) {
                            if ((s32)r0 < 5) {
                                wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x1au));
                                return;
                            }
                        } else {
                            c0lt = (s32)r0 < 1;
                            if (r0 == 1u) {
                                wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x17u));
                                return;
                            }
                            if (!c0lt) {
                                wr32((u32)param_1 + 0xa10u, (u32)rd8(r31 + 0x18u));
                                return;
                            }
                        }
                        wr32((u32)param_1 + 0xa0cu, (u32)rd8(r31 + 0x16u));
                        return;
                    }
                }
                r3 = tc_call(0x800c6cb4u, &a);
                if (r3 != 0u) {
                    wr32((u32)param_1 + 0xa0cu, (u32)rd8(r31 + 0x16u));
                }
            }
        }
    }
    return;
}
