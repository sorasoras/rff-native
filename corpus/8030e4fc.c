#include "tc_rt.h"

f64 fn_8030e4fc(u32 param_1)
{
    u32 ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    u64 t0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r3 = param_1;
    r5 = ppc_divwu(0xbffu - param_1, 0xc00u);
    f1 = (f64)rdf32(0x805777f0u);
    r6 = 0u;
    if ((s32)param_1 < 0) {
        r4 = (r5 >> 3u) & 0x1fffffffu;
        r0 = r5 * 0xc00u;
        ctr = r4;
        do {
            if (r4 != 0u) {
                do {
                    r6 = r6 - 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r5 = r5 & 7u;
                if (r5 == 0u) break;
            }
            ctr = r5;
            do {
                r6 = r6 - 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        } while (0);
        r3 = param_1 + r0;
    }
    r5 = ppc_divwu(r3, 0xc00u);
    if ((s32)r3 >= 3072) {
        r4 = (r5 >> 3u) & 0x1fffffffu;
        r0 = r5 * 0xfffff400u;
        ctr = r4;
        do {
            if (r4 != 0u) {
                do {
                    r6 = r6 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r5 = r5 & 7u;
                if (r5 == 0u) break;
            }
            ctr = r5;
            do {
                r6 = r6 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        } while (0);
        r3 = r3 + r0;
    }
    f0 = (f64)rdf32(0x805777f4u);
    r5 = r6;
    if ((s32)r6 > 0) {
        r4 = (r6 >> 3u) & 0x1fffffffu;
        r0 = 0u - r6;
        ctr = r4;
        do {
            if (r4 != 0u) {
                do {
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r5 = r6 & 7u;
                if (r5 == 0u) break;
            }
            ctr = r5;
            do {
                f1 = (f64)(f32)(f1 * f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        } while (0);
        r6 = r6 + r0;
    }
    f0 = (f64)rdf32(0x805777f8u);
    r4 = 0u - r6;
    do {
        if ((s32)r6 < 0) {
            r0 = (r4 >> 3u) & 0x1fffffffu;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    f1 = (f64)(f32)(f1 * f0);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r4 = r4 & 7u;
                if (r4 == 0u) break;
            }
            ctr = r4;
            do {
                f1 = (f64)(f32)(f1 * f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    } while (0);
    ca = ((s32)r3 < 0) && ((r3 & 0xffu) != 0u);
    r4 = (u32)((s32)r3 >> 8);
    r0 = (r3 << 0x18u) & 0xff000000u;
    r3 = (r3 >> 0x1fu) & 1u;
    r0 = r0 - r3;
    t0 = (u64)r4 + (u64)ca;
    r0 = (r0 << 8u) | (r0 >> 0x18u);
    r3 = r0 + r3;
    if ((u32)t0 != 0u) {
        f1 = (f64)(f32)(f1 * (f64)rdf32((((u32)t0 << 2u) & 0xfffffffcu) - 0x7fcb6128u));
    }
    if (r3 == 0u) {
        return f1;
    }
    f1 = (f64)(f32)(f1 * (f64)rdf32(((r3 << 2u) & 0xfffffffcu) - 0x7fcb60f8u));
    return f1;
}
