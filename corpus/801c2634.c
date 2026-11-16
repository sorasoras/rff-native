#include "tc_rt.h"

u32 fn_801c2634(u32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801e6f24u, &a);
    wr32(param_1, 0x80373208u);
    a.r[0] = param_1 + 0xcfcu;
    a.r[1] = param_1;
    (void)tc_call(0x801c35e4u, &a);
    f0 = (f64)rdf32(0x80575cfcu);
    r5 = param_1 + 0xddcu;
    r4 = param_1 + 0xe18u;
    f1 = (f64)rdf32(0x80575cd8u);
    wr32(param_1 + 0xd30u, 0u);
    wr32(param_1 + 0xd34u, 1u);
    wrf32d(param_1 + 0xd38u, f1);
    wrf32d(param_1 + 0xd3cu, f0);
    wr32(param_1 + 0xd40u, 0u);
    wr32(param_1 + 0xd44u, 0u);
    wrf32d(param_1 + 0xdd4u, f0);
    wrf32d(param_1 + 0xdd0u, f0);
    wrf32d(param_1 + 0xdccu, f0);
    if (r5 < r4) {
        r7 = param_1 + 0xddcu;
        r8 = r4 - r7;
        r6 = param_1 + 0xd78u;
        r9 = r8 + 0x13u;
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r9) >> 3);
        r10 = r0 + ((r0 >> 0x1fu) & 1u);
        r11 = r10 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r7 > r4;
            r3 = 0u;
            r4 = 0u;
            if (!c0gt) {
                r7 = 1u;
                if ((r8 & 0x80000000u) == 0u && (r9 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                r7 = r10 & 0x80000000u;
                r4 = 1u;
                if (r7 == 0u && r7 != (r11 & 0x80000000u)) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x80575cfcu);
                ctr = ppc_divwu(r6 + 0x9fu - r5, 0xa0u);
                if (r5 < r6) {
                    do {
                        wrf32d(r5 + 0xcu, f0);
                        wrf32d(r5 + 8u, f0);
                        wrf32d(r5 + 4u, f0);
                        wrf32d(r5 + 0x20u, f0);
                        wrf32d(r5 + 0x1cu, f0);
                        wrf32d(r5 + 0x18u, f0);
                        wrf32d(r5 + 0x34u, f0);
                        wrf32d(r5 + 0x30u, f0);
                        wrf32d(r5 + 0x2cu, f0);
                        wrf32d(r5 + 0x48u, f0);
                        wrf32d(r5 + 0x44u, f0);
                        wrf32d(r5 + 0x40u, f0);
                        wrf32d(r5 + 0x5cu, f0);
                        wrf32d(r5 + 0x58u, f0);
                        wrf32d(r5 + 0x54u, f0);
                        wrf32d(r5 + 0x70u, f0);
                        wrf32d(r5 + 0x6cu, f0);
                        wrf32d(r5 + 0x68u, f0);
                        wrf32d(r5 + 0x84u, f0);
                        wrf32d(r5 + 0x80u, f0);
                        wrf32d(r5 + 0x7cu, f0);
                        wrf32d(r5 + 0x98u, f0);
                        wrf32d(r5 + 0x94u, f0);
                        wrf32d(r5 + 0x90u, f0);
                        r5 = r5 + 0xa0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0xe18u;
        f0 = (f64)rdf32(0x80575cfcu);
        ctr = ppc_divwu(r4 + 0x13u - r5, 0x14u);
        if (r5 < r4) {
            do {
                wrf32d(r5 + 0xcu, f0);
                wrf32d(r5 + 8u, f0);
                wrf32d(r5 + 4u, f0);
                r5 = r5 + 0x14u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r30 = param_1 + 0xe18u;
    a.r[0] = r30;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(r30, 0x80350198u);
    wr32(param_1 + 0xefcu, 0u);
    wr32(param_1 + 0xf00u, 0xffffffffu);
    a.r[0] = param_1 + 0xf04u;
    (void)tc_call(0x801c25b0u, &a);
    wrf32d(param_1 + 0xf14u, (f64)rdf32(0x80575cfcu));
    a.r[0] = param_1 + 0xd48u;
    a.r[1] = 0u;
    a.r[2] = 0x80u;
    (void)tc_call(0x8000443cu, &a);
    if ((u32)(s8)rd8(0x80571340u) == 0u) {
        wr32(0x804db65cu, 0x80371eb0u);
        a.r[0] = 0x804db65cu;
        r3 = tc_call(0x801c38acu, &a);
        wr32(0x804db660u, r3);
        wr32(0x804db65cu, 0x80373170u);
        wr8(0x80571340u, 1u);
    }
    a.r[0] = param_1 + 0xcfcu;
    a.r[1] = rd32(0x804db660u);
    (void)tc_call(0x801c3600u, &a);
    return param_1;
}
