#include "tc_rt.h"

u32 fn_802f03ac(u32 param_1)
{
    u32 c0eq = 0, c0gt = 0, ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r11 = 0;
    u64 t0 = 0, t1 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80577538u);
    r7 = param_1 + 0x64u;
    r4 = param_1 + 0x84u;
    r8 = param_1 + 0xcu;
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, r8);
    wr32(param_1 + 0x10u, r8);
    wr8(param_1 + 0x18u, 0u);
    wr8(param_1 + 0x19u, 1u);
    wrf32d(param_1 + 0x1cu, f0);
    wrf32d(param_1 + 0x20u, f0);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x30u, f0);
    wr32(param_1 + 0x34u, 0u);
    wr32(param_1 + 0x38u, 0u);
    wrf32d(param_1 + 0x3cu, f0);
    wrf32d(param_1 + 0x40u, f0);
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    wr32(param_1 + 0x50u, 0xffffffffu);
    wrf32d(param_1 + 0x54u, f0);
    wrf32d(param_1 + 0x58u, f0);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x60u, 0u);
    if (r7 < r4) {
        r6 = param_1 + 0x64u;
        r5 = param_1 + 4u;
        r8 = r4 - r6;
        r9 = r8 + 0xfu;
        t0 = (u64)(u32)((s32)r9 >> 4) + (u64)(((s32)r9 < 0) && ((r9 & 0xfu) != 0u));
        r11 = (u32)t0 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r6 > r4;
            r4 = 0u;
            r6 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r6 = 1u;
                }
            }
            if (r6 != 0u) {
                r8 = (u32)t0 & 0x80000000u;
                r6 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                f0 = (f64)rdf32(0x80577538u);
                ctr = ((r5 + 0x7fu - r7) >> 7u) & 0x1ffffffu;
                if (r7 < r5) {
                    do {
                        wrf32d(r7, f0);
                        wrf32d(r7 + 4u, f0);
                        wr32(r7 + 8u, 0u);
                        wr32(r7 + 0xcu, 0u);
                        wrf32d(r7 + 0x10u, f0);
                        wrf32d(r7 + 0x14u, f0);
                        wr32(r7 + 0x18u, 0u);
                        wr32(r7 + 0x1cu, 0u);
                        wrf32d(r7 + 0x20u, f0);
                        wrf32d(r7 + 0x24u, f0);
                        wr32(r7 + 0x28u, 0u);
                        wr32(r7 + 0x2cu, 0u);
                        wrf32d(r7 + 0x30u, f0);
                        wrf32d(r7 + 0x34u, f0);
                        wr32(r7 + 0x38u, 0u);
                        wr32(r7 + 0x3cu, 0u);
                        wrf32d(r7 + 0x40u, f0);
                        wrf32d(r7 + 0x44u, f0);
                        wr32(r7 + 0x48u, 0u);
                        wr32(r7 + 0x4cu, 0u);
                        wrf32d(r7 + 0x50u, f0);
                        wrf32d(r7 + 0x54u, f0);
                        wr32(r7 + 0x58u, 0u);
                        wr32(r7 + 0x5cu, 0u);
                        wrf32d(r7 + 0x60u, f0);
                        wrf32d(r7 + 0x64u, f0);
                        wr32(r7 + 0x68u, 0u);
                        wr32(r7 + 0x6cu, 0u);
                        wrf32d(r7 + 0x70u, f0);
                        wrf32d(r7 + 0x74u, f0);
                        wr32(r7 + 0x78u, 0u);
                        wr32(r7 + 0x7cu, 0u);
                        r7 = r7 + 0x80u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x84u;
        f0 = (f64)rdf32(0x80577538u);
        ctr = ((r4 + 0xfu - r7) >> 4u) & 0xfffffffu;
        if (r7 < r4) {
            do {
                wrf32d(r7, f0);
                wrf32d(r7 + 4u, f0);
                wr32(r7 + 8u, 0u);
                wr32(r7 + 0xcu, 0u);
                r7 = r7 + 0x10u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)rdf32(0x80577538u);
    r6 = param_1 + 0x94u;
    r4 = param_1 + 0xb4u;
    wrf32d(param_1 + 0x84u, f0);
    wrf32d(param_1 + 0x88u, f0);
    wr32(param_1 + 0x8cu, 0u);
    wr32(param_1 + 0x90u, 0u);
    if (r6 < r4) {
        r7 = param_1 + 0x94u;
        r5 = param_1 + 0x34u;
        r8 = r4 - r7;
        r9 = r8 + 0xfu;
        t1 = (u64)(u32)((s32)r9 >> 4) + (u64)(((s32)r9 < 0) && ((r9 & 0xfu) != 0u));
        r11 = (u32)t1 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r7 > r4;
            r4 = 0u;
            r7 = 0u;
            if (!c0gt) {
                c0eq = (r8 & 0x80000000u) == 0u;
                r8 = 1u;
                if (c0eq && (r9 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r7 = 1u;
                }
            }
            if (r7 != 0u) {
                r8 = (u32)t1 & 0x80000000u;
                r7 = 1u;
                if (r8 == 0u && r8 != (r11 & 0x80000000u)) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                f0 = (f64)rdf32(0x80577538u);
                ctr = ((r5 + 0x7fu - r6) >> 7u) & 0x1ffffffu;
                if (r6 < r5) {
                    do {
                        wrf32d(r6, f0);
                        wrf32d(r6 + 4u, f0);
                        wr32(r6 + 8u, 0u);
                        wr32(r6 + 0xcu, 0u);
                        wrf32d(r6 + 0x10u, f0);
                        wrf32d(r6 + 0x14u, f0);
                        wr32(r6 + 0x18u, 0u);
                        wr32(r6 + 0x1cu, 0u);
                        wrf32d(r6 + 0x20u, f0);
                        wrf32d(r6 + 0x24u, f0);
                        wr32(r6 + 0x28u, 0u);
                        wr32(r6 + 0x2cu, 0u);
                        wrf32d(r6 + 0x30u, f0);
                        wrf32d(r6 + 0x34u, f0);
                        wr32(r6 + 0x38u, 0u);
                        wr32(r6 + 0x3cu, 0u);
                        wrf32d(r6 + 0x40u, f0);
                        wrf32d(r6 + 0x44u, f0);
                        wr32(r6 + 0x48u, 0u);
                        wr32(r6 + 0x4cu, 0u);
                        wrf32d(r6 + 0x50u, f0);
                        wrf32d(r6 + 0x54u, f0);
                        wr32(r6 + 0x58u, 0u);
                        wr32(r6 + 0x5cu, 0u);
                        wrf32d(r6 + 0x60u, f0);
                        wrf32d(r6 + 0x64u, f0);
                        wr32(r6 + 0x68u, 0u);
                        wr32(r6 + 0x6cu, 0u);
                        wrf32d(r6 + 0x70u, f0);
                        wrf32d(r6 + 0x74u, f0);
                        wr32(r6 + 0x78u, 0u);
                        wr32(r6 + 0x7cu, 0u);
                        r6 = r6 + 0x80u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0xb4u;
        f0 = (f64)rdf32(0x80577538u);
        ctr = ((r4 + 0xfu - r6) >> 4u) & 0xfffffffu;
        if (r6 < r4) {
            do {
                wrf32d(r6, f0);
                wrf32d(r6 + 4u, f0);
                wr32(r6 + 8u, 0u);
                wr32(r6 + 0xcu, 0u);
                r6 = r6 + 0x10u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = param_1 + 0xb4u;
    a.r[1] = 0x802f0854u;
    a.r[2] = 0x802f0874u;
    a.r[3] = 0xcu;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x8057753cu);
    wr32(param_1 + 0x34u, 0u);
    wrf32d(param_1 + 0x2cu, f0);
    wrf32d(param_1 + 0x30u, f0);
    wr32(param_1 + 0x38u, 0u);
    wrf32d(param_1 + 0x1cu, f0);
    wrf32d(param_1 + 0x20u, f0);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wrf32d(param_1 + 0x3cu, f0);
    wrf32d(param_1 + 0x40u, f0);
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x48u, 0u);
    wrf32d(param_1 + 0x54u, f0);
    wrf32d(param_1 + 0x58u, f0);
    wr32(param_1 + 0x5cu, 0u);
    wr32(param_1 + 0x60u, 0u);
    wrf32d(param_1 + 0x84u, f0);
    wrf32d(param_1 + 0x88u, f0);
    wr32(param_1 + 0x8cu, 0u);
    wr32(param_1 + 0x90u, 0u);
    wr32(param_1 + 0xd8u, 0u);
    wr32(param_1 + 0xe4u, 0u);
    wr32(param_1 + 0xf4u, 0u);
    wrf32d(param_1 + 0x64u, f0);
    wrf32d(param_1 + 0x68u, f0);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x70u, 0u);
    wrf32d(param_1 + 0x94u, f0);
    wrf32d(param_1 + 0x98u, f0);
    wr32(param_1 + 0x9cu, 0u);
    wr32(param_1 + 0xa0u, 0u);
    wr32(param_1 + 0xdcu, 0u);
    wr32(param_1 + 0xe8u, 0u);
    wr32(param_1 + 0xf8u, 0u);
    wrf32d(param_1 + 0x74u, f0);
    wrf32d(param_1 + 0x78u, f0);
    wr32(param_1 + 0x7cu, 0u);
    wr32(param_1 + 0x80u, 0u);
    wrf32d(param_1 + 0xa4u, f0);
    wrf32d(param_1 + 0xa8u, f0);
    wr32(param_1 + 0xacu, 0u);
    wr32(param_1 + 0xb0u, 0u);
    wr32(param_1 + 0xe0u, 0u);
    wr32(param_1 + 0xecu, 0u);
    wr32(param_1 + 0xfcu, 0u);
    return param_1;
}
