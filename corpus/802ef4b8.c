#include "tc_rt.h"

void fn_802ef4b8(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    if (rd32(param_1 + 4u) != 0u) {
        if (param_2 > (u32)rd8(param_1)) {
            return;
        }
        if ((u32)(s8)rd8(0x80571d68u) == 0u) {
            f1 = (f64)rdf32(0x80577510u);
            f0 = (f64)rdf32(0x80577514u);
            wrf32d(0x80548140u, f1);
            wrf32d(0x80548144u, f1);
            wrf32d(0x80548148u, f0);
            wrf32d(0x8054814cu, f1);
            wrf32d(0x80548150u, f1);
            wrf32d(0x80548154u, f0);
            wrf32d(0x80548158u, f0);
            wrf32d(0x8054815cu, f0);
            wr8(0x80571d68u, 1u);
        }
        r7 = (u32)rd8(param_1 + 1u);
        f7 = (f64)rdf32(0x80548140u);
        r6 = (r7 << 5u) & 0xffffffe0u;
        f6 = (f64)rdf32(0x80548144u);
        f5 = (f64)rdf32(0x80548148u);
        f4 = (f64)rdf32(0x8054814cu);
        f3 = (f64)rdf32(0x80548150u);
        f2 = (f64)rdf32(0x80548154u);
        f1 = (f64)rdf32(0x80548158u);
        f0 = (f64)rdf32(0x8054815cu);
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
