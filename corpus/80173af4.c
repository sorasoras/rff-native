#include "tc_rt.h"

void fn_80173af4(s32 param_1)
{
    u32 c0lt = 0, c1lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((u32)((s32)rd32((u32)param_1 + 0x80u) >> 31) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800c9f10u, &a);
        r0 = rd32((u32)param_1 + 0x144u);
        r5 = (u32)rd8(0x80492821u);
        r7 = (u32)rd8(0x80492824u);
        c0lt = (s32)r0 < 2;
        r3 = ((r5 << 2u) & 0xfffffffcu) + r5 - 0x7fcb0288u;
        r4 = (u32)rd8(r3 + 3u);
        r6 = (u32)rd8(0x80492825u) + (r7 * 0x3cu);
        r5 = (u32)rd8(r3 + 4u);
        if (r0 == 2u) {
            if (r7 < r4 && r7 >= r5) {
                wr32((u32)param_1 + 0x144u, 3u);
            }
        } else if (!c0lt) {
            if ((s32)r0 < 4) {
                f0 = (f64)rdf32(0x80574e78u);
                f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x148u) - (f64)rdf32(0x80574e80u));
                wrf32d((u32)param_1 + 0x148u, f1);
                if ((f1 < f0) || (f1 == f0)) {
                    wrf32d((u32)param_1 + 0x148u, f0);
                    wr32((u32)param_1 + 0x144u, 0u);
                }
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r3 = r4 * 0x3cu;
                if (r3 > r6 || (r3 + 3u) <= r6) {
                    if (((r4 * 0x3cu) + 3u) > r6) {
                        r3 = r5 * 0x3cu;
                        c1lt = r6 < (r3 - 3u);
                        if (!c1lt) {
                            if (r3 <= r6 || c1lt) {
                                return;
                            }
                            f0 = (f64)rdf32(0x80574e7cu);
                            wr32((u32)param_1 + 0x144u, 3u);
                            wrf32d((u32)param_1 + 0x148u, f0);
                            return;
                        }
                    }
                    f0 = (f64)rdf32(0x80574e7cu);
                    wr32((u32)param_1 + 0x144u, 2u);
                    wrf32d((u32)param_1 + 0x148u, f0);
                } else {
                    wr32((u32)param_1 + 0x144u, 1u);
                }
            } else if (!c0lt) {
                f0 = (f64)rdf32(0x80574e7cu);
                f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x148u) + (f64)rdf32(0x80574e80u));
                wrf32d((u32)param_1 + 0x148u, f1);
                if ((f1 > f0) || (f1 == f0)) {
                    wrf32d((u32)param_1 + 0x148u, f0);
                    wr32((u32)param_1 + 0x144u, 2u);
                }
            }
        }
    }
    return;
}
