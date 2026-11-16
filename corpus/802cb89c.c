#include "tc_rt.h"

void fn_802cb89c(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    if (rd32(param_1 + 4u) != 0u) {
        if (param_2 > (u32)rd8(param_1)) {
            return;
        }
        if ((u32)(s8)rd8(0x805474b8u) == 0u) {
            f1 = (f64)rdf32(0x80348a08u);
            f0 = (f64)rdf32(0x80348a0cu);
            wrf32d(0x805474c0u, f1);
            wrf32d(0x805474c4u, f1);
            wrf32d(0x805474c8u, f0);
            wrf32d(0x805474ccu, f1);
            wrf32d(0x805474d0u, f1);
            wrf32d(0x805474d4u, f0);
            wrf32d(0x805474d8u, f0);
            wrf32d(0x805474dcu, f0);
            wr8(0x805474b8u, 1u);
        }
        r7 = (u32)rd8(param_1 + 1u);
        f7 = (f64)rdf32(0x805474c0u);
        r6 = (r7 << 5u) & 0xffffffe0u;
        f6 = (f64)rdf32(0x805474c4u);
        f5 = (f64)rdf32(0x805474c8u);
        f4 = (f64)rdf32(0x805474ccu);
        f3 = (f64)rdf32(0x805474d0u);
        f2 = (f64)rdf32(0x805474d4u);
        f1 = (f64)rdf32(0x805474d8u);
        f0 = (f64)rdf32(0x805474dcu);
        ctr = param_2 - r7;
        if ((s32)r7 < (s32)param_2) {
            do {
                r0 = rd32(param_1 + 4u);
                wrf32d(r6 + r0, f7);
                wrf32d(r0 + r6 + 4u, f6);
                r5 = rd32(param_1 + 4u) + r6;
                wrf32d(r5 + 8u, f5);
                wrf32d(r5 + 0xcu, f4);
                r5 = rd32(param_1 + 4u) + r6;
                wrf32d(r5 + 0x10u, f3);
                wrf32d(r5 + 0x14u, f2);
                r5 = rd32(param_1 + 4u) + r6;
                r6 = r6 + 0x20u;
                wrf32d(r5 + 0x18u, f1);
                wrf32d(r5 + 0x1cu, f0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        wr8(param_1 + 1u, (u8)param_2);
        return;
    }
    return;
}
