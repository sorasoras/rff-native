#include "tc_rt.h"

void fn_8017c60c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0;
    r3 = (u32)param_1;
    r10 = (u32)param_2 + (((u32)param_3 << 3u) & 0xfffffff8u);
    r12 = 0u;
    r11 = rd32(r10 + 4u);
    r9 = 0u;
    f0 = (f64)rdf32(0x80575028u);
    ctr = 0x1eu;
    do {
        if (r12 < r11) {
            r8 = r3 + 0x10000u;
            wrf32d(r8 + 0x358u, (f64)rdf32(rd32(r10) + r9));
            wrf32d(r8 + 0x35cu, (f64)rdf32(rd32(r10) + r9 + 4u));
            wrf32d(r8 + 0x360u, (f64)rdf32(rd32(r10) + r9 + 8u));
            wrf32d(r8 + 0x364u, (f64)rdf32(rd32(r10) + r9 + 0xcu));
            wr16(r8 + 0x368u, (u16)rd32(rd32(r10) + r9 + 0x10u));
        } else {
            r4 = r3 + 0x10000u;
            wrf32d(r4 + 0x358u, (f64)rdf32(0x804890c8u));
            wrf32d(r4 + 0x35cu, (f64)rdf32(0x804890ccu));
            wrf32d(r4 + 0x360u, (f64)rdf32(0x804890d0u));
            wrf32d(r4 + 0x364u, f0);
            wr16(r4 + 0x368u, 0u);
        }
        r4 = r3 + 0x10000u;
        r3 = r3 + 0x14u;
        wr16(r4 + 0x36au, 0u);
        r12 = r12 + 1u;
        r9 = r9 + 0x14u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
