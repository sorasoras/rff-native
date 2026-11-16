#include "tc_rt.h"

void fn_800f2008(u32 param_r3)
{
    u32 c0lt = 0, c1lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)rd32(param_r3 + 0x80u) >> 31) != 0u) {
        r5 = (u32)rd8(0x80492821u);
        r28 = (u32)rd8(0x80492824u);
        r4 = ((r5 << 2u) & 0xfffffffcu) + r5 - 0x7fcb0288u;
        r30 = (u32)rd8(r4 + 3u);
        r27 = (u32)rd8(0x80492825u) + (r28 * 0x3cu);
        r29 = (u32)rd8(r4 + 4u);
        a.r[0] = rd32(0x805706e8u);
        r3 = tc_call(0x8007d150u, &a);
        if (rd32(r3 + 4u) != 1u) {
            r0 = rd32(param_r3 + 0xb0u);
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                if (r28 < r30 && r28 >= r29) {
                    wr32(param_r3 + 0xb0u, 3u);
                }
            } else if (!c0lt) {
                if ((s32)r0 < 4) {
                    f0 = (f64)rdf32(0x80573b50u);
                    f1 = (f64)(f32)((f64)rdf32(param_r3 + 0xb4u) - (f64)rdf32(0x80573b58u));
                    wrf32d(param_r3 + 0xb4u, f1);
                    if ((f1 < f0) || (f1 == f0)) {
                        wrf32d(param_r3 + 0xb4u, f0);
                        wr32(param_r3 + 0xb0u, 0u);
                    }
                }
            } else {
                c0lt = (s32)r0 < 0;
                if (r0 == 0u) {
                    r3 = r30 * 0x3cu;
                    if (r3 > r27 || (r3 + 3u) <= r27) {
                        if (((r30 * 0x3cu) + 3u) > r27) {
                            r3 = r29 * 0x3cu;
                            c1lt = r27 < (r3 - 3u);
                            if (!c1lt) {
                                if (r3 <= r27 || c1lt) {
                                    return;
                                }
                                f0 = (f64)rdf32(0x80573b54u);
                                wr32(param_r3 + 0xb0u, 3u);
                                wrf32d(param_r3 + 0xb4u, f0);
                                return;
                            }
                        }
                        f0 = (f64)rdf32(0x80573b54u);
                        wr32(param_r3 + 0xb0u, 2u);
                        wrf32d(param_r3 + 0xb4u, f0);
                    } else {
                        wr32(param_r3 + 0xb0u, 1u);
                    }
                } else if (!c0lt) {
                    f0 = (f64)rdf32(0x80573b54u);
                    f1 = (f64)(f32)((f64)rdf32(param_r3 + 0xb4u) + (f64)rdf32(0x80573b58u));
                    wrf32d(param_r3 + 0xb4u, f1);
                    if ((f1 > f0) || (f1 == f0)) {
                        wrf32d(param_r3 + 0xb4u, f0);
                        wr32(param_r3 + 0xb0u, 2u);
                    }
                }
            }
        } else if (r30 <= r28 || r29 > r28) {
            f0 = (f64)rdf32(0x80573b54u);
            wr32(param_r3 + 0xb0u, 2u);
            wrf32d(param_r3 + 0xb4u, f0);
        } else {
            f0 = (f64)rdf32(0x80573b50u);
            wr32(param_r3 + 0xb0u, 0u);
            wrf32d(param_r3 + 0xb4u, f0);
        }
    }
    return;
}
