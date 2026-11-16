#include "tc_rt.h"

void fn_8014e614(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x78u);
    a.r[1] = 1u;
    r3 = tc_call(0x80031cf8u, &a);
    r31 = r3;
    if (r3 != 0u) {
        f0 = (f64)rdf32(0x80574760u);
        wrf32d(0x817fdff4u, f0);
        wrf32d(0x817fdff0u, f0);
        wrf32d(0x817fdfecu, f0);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfe4u, f0);
        wrf32d(0x817fdfe8u, f0);
        a.r[0] = 0x817fdfecu;
        a.r[1] = rd32(r3 + 0x50u);
        a.r[2] = 0x817fdfe0u;
        (void)tc_call(0x80042474u, &a);
        r3 = rd32(r31 + 0x40u);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x20u);
            r31 = r3 + 0x40u;
        } else {
            r31 = rd32(r31 + 0x54u);
        }
        r6 = rd32(0x817fdff0u);
        r0 = rd32(0x817fdff4u);
        wr32(0x817fdfd4u, rd32(0x817fdfecu));
        wr32(0x817fdfd8u, r6);
        wr32(0x817fdfdcu, r0);
        a.r[0] = 0x817fdfd4u;
        a.r[1] = r31;
        a.r[2] = 0x817fdfd4u;
        (void)tc_call(0x80234380u, &a);
        r6 = rd32(0x817fdff0u);
        r0 = rd32(0x817fdff4u);
        wr32(0x817fdfc8u, rd32(0x817fdfecu));
        wr32(0x817fdfccu, r6);
        wr32(0x817fdfd0u, r0);
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r31 + 0xcu;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x80234380u, &a);
        a.f[0] = (f64)rdf32(0x80574760u);
        a.r[0] = (u32)param_1 + 0x198u;
        a.r[1] = 0x817fdfecu;
        a.r[2] = 0x817fdfd4u;
        a.r[3] = 0x817fdfc8u;
        (void)tc_call(0x800ca4dcu, &a);
        wr32((u32)param_1 + 0x1b0u, 1u);
    }
    return;
}
