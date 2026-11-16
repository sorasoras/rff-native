#include "tc_rt.h"

void fn_8011524c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r5 = rd32((u32)param_1 + 0x78u);
    if (r5 != 0u && (u32)((s32)rd32(r5 + 0x80u) >> 31) != 0u) {
        r6 = (u32)rd8(param_2 + 1u);
        r5 = (u32)rd8(param_2 + 2u);
        r0 = (u32)rd8(param_2 + 3u);
        wr8(0x817fdfd4u, rd8(param_2));
        wr8(0x817fdfd5u, (u8)r6);
        wr8(0x817fdfd6u, (u8)r5);
        wr8(0x817fdfd7u, (u8)r0);
        wr32(0x817fdfc8u, rd32(0x817fdfd4u));
        a.r[0] = (u32)param_1 + 0x40u;
        a.r[1] = 0x817fdfc8u;
        f1 = tc_callf(0x8010fa28u, &a);
        if (rd32((u32)param_1 + 0x70u) != 0u) {
            f0 = (f64)rdf32(0x80574124u);
            r5 = (u32)rd8(0x817fdfd4u);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            r12 = rd32((u32)param_1 + 0x30u);
            wr8(0x817fdfd4u, (u8)(r5 + 0xffu));
            r12 = rd32(r12 + 0x18u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(r12, &a);
            f1 = (f64)rdf32(0x817fdfd8u);
            wr32(0x817fdfccu, rd32(0x817fdfd4u));
            a.f[0] = f1;
            a.f[1] = (f64)rdf32(0x817fdfe0u);
            a.f[2] = (f64)rdf32(0x80574120u);
            a.r[0] = 0x817fdfccu;
            f1 = tc_callf(0x8010f888u, &a);
        }
        r4 = (u32)rd8(param_2 + 1u);
        r5 = (u32)rd8(param_2) + 0xffu;
        r3 = (u32)rd8(param_2 + 2u);
        r0 = (u32)rd8(param_2 + 3u);
        wr8(0x817fdfd0u, (u8)r5);
        wr8(0x817fdfd1u, (u8)r4);
        wr8(0x817fdfd2u, (u8)r3);
        wr8(0x817fdfd3u, (u8)r0);
        r3 = rd32((u32)param_1 + 0x78u);
        wr8(param_2, (u8)r5);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f1 = tc_lastf();
        f31 = (f64)rdf32(r3 + 8u);
        r3 = rd32((u32)param_1 + 0x78u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        a.f[0] = (f64)rdf32(r3);
        a.f[1] = f31;
        a.f[2] = (f64)rdf32(0x80574120u);
        a.r[0] = 0x817fdfd0u;
        (void)tc_call(0x8010f888u, &a);
    }
    return;
}
