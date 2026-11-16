#include "tc_rt.h"

s32 fn_80054f0c(s32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80054688u, &a);
    f0 = (f64)rdf32(0x80572344u);
    wr32((u32)param_1 + 0x194u, 8u);
    r7 = (u32)param_1 + 0x3d4u;
    wrf32d((u32)param_1 + 0x1a4u, f0);
    r4 = (u32)param_1 + 0x6ccu;
    wrf32d((u32)param_1 + 0x1a0u, f0);
    wrf32d((u32)param_1 + 0x19cu, f0);
    wrf32d((u32)param_1 + 0x1b0u, f0);
    wrf32d((u32)param_1 + 0x1acu, f0);
    wrf32d((u32)param_1 + 0x1a8u, f0);
    wr32((u32)param_1 + 0x1b4u, 0u);
    r0 = rd32(0x804890ccu);
    wr32((u32)param_1 + 0x1b8u, rd32(0x804890c8u));
    wr32((u32)param_1 + 0x1bcu, r0);
    wr32((u32)param_1 + 0x1c0u, rd32(0x804890d0u));
    r0 = rd32(0x804890ccu);
    wr32((u32)param_1 + 0x1c4u, rd32(0x804890c8u));
    wr32((u32)param_1 + 0x1c8u, r0);
    wr32((u32)param_1 + 0x1ccu, rd32(0x804890d0u));
    wrf32d((u32)param_1 + 0x1e4u, f0);
    wrf32d((u32)param_1 + 0x1e0u, f0);
    wrf32d((u32)param_1 + 0x1dcu, f0);
    wrf32d((u32)param_1 + 0x1f0u, f0);
    wrf32d((u32)param_1 + 0x1ecu, f0);
    wrf32d((u32)param_1 + 0x1e8u, f0);
    wr32((u32)param_1 + 0x1fcu, 0u);
    wr32((u32)param_1 + 0x23cu, 0u);
    wrf32d((u32)param_1 + 0x240u, f0);
    wrf32d((u32)param_1 + 0x244u, f0);
    wrf32d((u32)param_1 + 0x248u, f0);
    wrf32d((u32)param_1 + 0x24cu, f0);
    wrf32d((u32)param_1 + 0x250u, f0);
    wrf32d((u32)param_1 + 0x254u, f0);
    wrf32d((u32)param_1 + 0x274u, f0);
    wrf32d((u32)param_1 + 0x270u, f0);
    wrf32d((u32)param_1 + 0x26cu, f0);
    wrf32d((u32)param_1 + 0x280u, f0);
    wrf32d((u32)param_1 + 0x27cu, f0);
    wrf32d((u32)param_1 + 0x278u, f0);
    wrf32d((u32)param_1 + 0x28cu, f0);
    wrf32d((u32)param_1 + 0x288u, f0);
    wrf32d((u32)param_1 + 0x284u, f0);
    wrf32d((u32)param_1 + 0x298u, f0);
    wrf32d((u32)param_1 + 0x294u, f0);
    wrf32d((u32)param_1 + 0x290u, f0);
    if (r7 < r4) {
        r6 = (u32)param_1 + 0x3d4u;
        r8 = r4 - r6;
        r5 = (u32)param_1 - 0x514u;
        r9 = r8 + 0x17bu;
        r0 = (u32)((s32)(ppc_mulhw(-1401515643, (s32)r9) + r9) >> 8);
        r10 = r0 + ((r0 >> 0x1fu) & 1u);
        r11 = r10 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r6 > r4;
            r3 = 0u;
            r4 = 0u;
            if (!c0gt) {
                r6 = 1u;
                if ((r8 & 0x80000000u) == 0u && (r9 & 0x80000000u) != 0u) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                r6 = r10 & 0x80000000u;
                r4 = 1u;
                if (r6 == 0u && r6 != (r11 & 0x80000000u)) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x80572344u);
                ctr = ppc_divwu(r5 + 0xbdfu - r7, 0xbe0u);
                if (r7 < r5) {
                    do {
                        wrf32d(r7 + 0x1cu, f0);
                        wrf32d(r7 + 0x18u, f0);
                        wrf32d(r7 + 0x14u, f0);
                        wrf32d(r7 + 0x28u, f0);
                        wrf32d(r7 + 0x24u, f0);
                        wrf32d(r7 + 0x20u, f0);
                        wrf32d(r7 + 0x34u, f0);
                        wrf32d(r7 + 0x30u, f0);
                        wrf32d(r7 + 0x2cu, f0);
                        wrf32d(r7 + 0x40u, f0);
                        wrf32d(r7 + 0x3cu, f0);
                        wrf32d(r7 + 0x38u, f0);
                        wrf32d(r7 + 0x198u, f0);
                        wrf32d(r7 + 0x194u, f0);
                        wrf32d(r7 + 0x190u, f0);
                        wrf32d(r7 + 0x1a4u, f0);
                        wrf32d(r7 + 0x1a0u, f0);
                        wrf32d(r7 + 0x19cu, f0);
                        wrf32d(r7 + 0x1b0u, f0);
                        wrf32d(r7 + 0x1acu, f0);
                        wrf32d(r7 + 0x1a8u, f0);
                        wrf32d(r7 + 0x1bcu, f0);
                        wrf32d(r7 + 0x1b8u, f0);
                        wrf32d(r7 + 0x1b4u, f0);
                        wrf32d(r7 + 0x314u, f0);
                        wrf32d(r7 + 0x310u, f0);
                        wrf32d(r7 + 0x30cu, f0);
                        wrf32d(r7 + 0x320u, f0);
                        wrf32d(r7 + 0x31cu, f0);
                        wrf32d(r7 + 0x318u, f0);
                        wrf32d(r7 + 0x32cu, f0);
                        wrf32d(r7 + 0x328u, f0);
                        wrf32d(r7 + 0x324u, f0);
                        wrf32d(r7 + 0x338u, f0);
                        wrf32d(r7 + 0x334u, f0);
                        wrf32d(r7 + 0x330u, f0);
                        wrf32d(r7 + 0x490u, f0);
                        wrf32d(r7 + 0x48cu, f0);
                        wrf32d(r7 + 0x488u, f0);
                        wrf32d(r7 + 0x49cu, f0);
                        wrf32d(r7 + 0x498u, f0);
                        wrf32d(r7 + 0x494u, f0);
                        wrf32d(r7 + 0x4a8u, f0);
                        wrf32d(r7 + 0x4a4u, f0);
                        wrf32d(r7 + 0x4a0u, f0);
                        wrf32d(r7 + 0x4b4u, f0);
                        wrf32d(r7 + 0x4b0u, f0);
                        wrf32d(r7 + 0x4acu, f0);
                        wrf32d(r7 + 0x60cu, f0);
                        wrf32d(r7 + 0x608u, f0);
                        wrf32d(r7 + 0x604u, f0);
                        wrf32d(r7 + 0x618u, f0);
                        wrf32d(r7 + 0x614u, f0);
                        wrf32d(r7 + 0x610u, f0);
                        wrf32d(r7 + 0x624u, f0);
                        wrf32d(r7 + 0x620u, f0);
                        wrf32d(r7 + 0x61cu, f0);
                        wrf32d(r7 + 0x630u, f0);
                        wrf32d(r7 + 0x62cu, f0);
                        wrf32d(r7 + 0x628u, f0);
                        wrf32d(r7 + 0x788u, f0);
                        wrf32d(r7 + 0x784u, f0);
                        wrf32d(r7 + 0x780u, f0);
                        wrf32d(r7 + 0x794u, f0);
                        wrf32d(r7 + 0x790u, f0);
                        wrf32d(r7 + 0x78cu, f0);
                        wrf32d(r7 + 0x7a0u, f0);
                        wrf32d(r7 + 0x79cu, f0);
                        wrf32d(r7 + 0x798u, f0);
                        wrf32d(r7 + 0x7acu, f0);
                        wrf32d(r7 + 0x7a8u, f0);
                        wrf32d(r7 + 0x7a4u, f0);
                        wrf32d(r7 + 0x904u, f0);
                        wrf32d(r7 + 0x900u, f0);
                        wrf32d(r7 + 0x8fcu, f0);
                        wrf32d(r7 + 0x910u, f0);
                        wrf32d(r7 + 0x90cu, f0);
                        wrf32d(r7 + 0x908u, f0);
                        wrf32d(r7 + 0x91cu, f0);
                        wrf32d(r7 + 0x918u, f0);
                        wrf32d(r7 + 0x914u, f0);
                        wrf32d(r7 + 0x928u, f0);
                        wrf32d(r7 + 0x924u, f0);
                        wrf32d(r7 + 0x920u, f0);
                        wrf32d(r7 + 0xa80u, f0);
                        wrf32d(r7 + 0xa7cu, f0);
                        wrf32d(r7 + 0xa78u, f0);
                        wrf32d(r7 + 0xa8cu, f0);
                        wrf32d(r7 + 0xa88u, f0);
                        wrf32d(r7 + 0xa84u, f0);
                        wrf32d(r7 + 0xa98u, f0);
                        wrf32d(r7 + 0xa94u, f0);
                        wrf32d(r7 + 0xa90u, f0);
                        wrf32d(r7 + 0xaa4u, f0);
                        wrf32d(r7 + 0xaa0u, f0);
                        wrf32d(r7 + 0xa9cu, f0);
                        r7 = r7 + 0xbe0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_1 + 0x6ccu;
        f0 = (f64)rdf32(0x80572344u);
        ctr = ppc_divwu(r4 + 0x17bu - r7, 0x17cu);
        if (r7 < r4) {
            do {
                wrf32d(r7 + 0x1cu, f0);
                wrf32d(r7 + 0x18u, f0);
                wrf32d(r7 + 0x14u, f0);
                wrf32d(r7 + 0x28u, f0);
                wrf32d(r7 + 0x24u, f0);
                wrf32d(r7 + 0x20u, f0);
                wrf32d(r7 + 0x34u, f0);
                wrf32d(r7 + 0x30u, f0);
                wrf32d(r7 + 0x2cu, f0);
                wrf32d(r7 + 0x40u, f0);
                wrf32d(r7 + 0x3cu, f0);
                wrf32d(r7 + 0x38u, f0);
                r7 = r7 + 0x17cu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x6ccu, 0u);
    return param_1;
}
