#include "tc_rt.h"

void fn_802ef88c(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 c1lt = 0, ctr = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f1 = (f64)rdf32(param_1 + 4u);
    wrf32d(0xcc008000u, (f64)rdf32(param_1));
    wrf32d(0xcc008000u, f1);
    if ((u32)param_5 != 0u) {
        wr32(0xcc008000u, rd32((u32)param_5));
    }
    c1lt = param_3 < 0;
    r6 = 0u;
    if (param_3 > 0) {
        r4 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r5 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r5 = (u32)param_4;
                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r4 > 0) {
                    do {
                        r6 = r6 + 8u;
                        f1 = (f64)rdf32(r5 + 4u);
                        wrf32d(0xcc008000u, (f64)rdf32(r5));
                        f2 = (f64)rdf32(r5 + 0x20u);
                        wrf32d(0xcc008000u, f1);
                        f0 = (f64)rdf32(r5 + 0x24u);
                        wrf32d(0xcc008000u, f2);
                        f1 = (f64)rdf32(r5 + 0x40u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x44u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x60u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x64u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x80u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x84u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xa0u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xa4u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xc0u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xc4u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xe0u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xe4u);
                        r5 = r5 + 0x100u;
                        wrf32d(0xcc008000u, f1);
                        wrf32d(0xcc008000u, f0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_4 + ((r6 << 5u) & 0xffffffe0u);
        ctr = (u32)param_3 - r6;
        if ((s32)r6 < param_3) {
            do {
                f1 = (f64)rdf32(r4);
                f0 = (f64)rdf32(r4 + 4u);
                r4 = r4 + 0x20u;
                wrf32d(0xcc008000u, f1);
                wrf32d(0xcc008000u, f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f2 = (f64)rdf32(param_1 + 4u);
    wrf32d(0xcc008000u, (f64)(f32)((f64)rdf32(param_1) + (f64)rdf32(param_2)));
    wrf32d(0xcc008000u, f2);
    if ((u32)param_5 != 0u) {
        wr32(0xcc008000u, rd32((u32)param_5 + 4u));
    }
    c1lt = param_3 < 0;
    r6 = 0u;
    if (param_3 > 0) {
        r4 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r5 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r5 = (u32)param_4;
                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r4 > 0) {
                    do {
                        r6 = r6 + 8u;
                        f1 = (f64)rdf32(r5 + 0xcu);
                        wrf32d(0xcc008000u, (f64)rdf32(r5 + 8u));
                        f2 = (f64)rdf32(r5 + 0x28u);
                        wrf32d(0xcc008000u, f1);
                        f0 = (f64)rdf32(r5 + 0x2cu);
                        wrf32d(0xcc008000u, f2);
                        f1 = (f64)rdf32(r5 + 0x48u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x4cu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x68u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x6cu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x88u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x8cu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xa8u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xacu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xc8u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xccu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xe8u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xecu);
                        r5 = r5 + 0x100u;
                        wrf32d(0xcc008000u, f1);
                        wrf32d(0xcc008000u, f0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_4 + ((r6 << 5u) & 0xffffffe0u);
        ctr = (u32)param_3 - r6;
        if ((s32)r6 < param_3) {
            do {
                f1 = (f64)rdf32(r4 + 8u);
                f0 = (f64)rdf32(r4 + 0xcu);
                r4 = r4 + 0x20u;
                wrf32d(0xcc008000u, f1);
                wrf32d(0xcc008000u, f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)(f32)((f64)rdf32(param_1 + 4u) - (f64)rdf32(param_2 + 4u));
    wrf32d(0xcc008000u, (f64)(f32)((f64)rdf32(param_1) + (f64)rdf32(param_2)));
    wrf32d(0xcc008000u, f0);
    if ((u32)param_5 != 0u) {
        wr32(0xcc008000u, rd32((u32)param_5 + 0xcu));
    }
    c1lt = param_3 < 0;
    r6 = 0u;
    if (param_3 > 0) {
        r4 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r5 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r5 = (u32)param_4;
                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r4 > 0) {
                    do {
                        r6 = r6 + 8u;
                        f1 = (f64)rdf32(r5 + 0x1cu);
                        wrf32d(0xcc008000u, (f64)rdf32(r5 + 0x18u));
                        f2 = (f64)rdf32(r5 + 0x38u);
                        wrf32d(0xcc008000u, f1);
                        f0 = (f64)rdf32(r5 + 0x3cu);
                        wrf32d(0xcc008000u, f2);
                        f1 = (f64)rdf32(r5 + 0x58u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x5cu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x78u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x7cu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x98u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x9cu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xb8u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xbcu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xd8u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xdcu);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xf8u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xfcu);
                        r5 = r5 + 0x100u;
                        wrf32d(0xcc008000u, f1);
                        wrf32d(0xcc008000u, f0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_4 + ((r6 << 5u) & 0xffffffe0u);
        ctr = (u32)param_3 - r6;
        if ((s32)r6 < param_3) {
            do {
                f1 = (f64)rdf32(r4 + 0x18u);
                f0 = (f64)rdf32(r4 + 0x1cu);
                r4 = r4 + 0x20u;
                wrf32d(0xcc008000u, f1);
                wrf32d(0xcc008000u, f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)(f32)((f64)rdf32(param_1 + 4u) - (f64)rdf32(param_2 + 4u));
    wrf32d(0xcc008000u, (f64)rdf32(param_1));
    wrf32d(0xcc008000u, f0);
    if ((u32)param_5 != 0u) {
        wr32(0xcc008000u, rd32((u32)param_5 + 8u));
    }
    c1lt = param_3 < 0;
    r6 = 0u;
    if (param_3 > 0) {
        r4 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r5 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                r5 = (u32)param_4;
                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r4 > 0) {
                    do {
                        r6 = r6 + 8u;
                        f1 = (f64)rdf32(r5 + 0x14u);
                        wrf32d(0xcc008000u, (f64)rdf32(r5 + 0x10u));
                        f2 = (f64)rdf32(r5 + 0x30u);
                        wrf32d(0xcc008000u, f1);
                        f0 = (f64)rdf32(r5 + 0x34u);
                        wrf32d(0xcc008000u, f2);
                        f1 = (f64)rdf32(r5 + 0x50u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x54u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x70u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x74u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0x90u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0x94u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xb0u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xb4u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xd0u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xd4u);
                        wrf32d(0xcc008000u, f1);
                        f1 = (f64)rdf32(r5 + 0xf0u);
                        wrf32d(0xcc008000u, f0);
                        f0 = (f64)rdf32(r5 + 0xf4u);
                        r5 = r5 + 0x100u;
                        wrf32d(0xcc008000u, f1);
                        wrf32d(0xcc008000u, f0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_4 + ((r6 << 5u) & 0xffffffe0u);
        ctr = (u32)param_3 - r6;
        if ((s32)r6 < param_3) {
            do {
                f1 = (f64)rdf32(r4 + 0x10u);
                f0 = (f64)rdf32(r4 + 0x14u);
                r4 = r4 + 0x20u;
                wrf32d(0xcc008000u, f1);
                wrf32d(0xcc008000u, f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return;
}
