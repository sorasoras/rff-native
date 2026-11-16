#include "tc_rt.h"

void fn_8005a414(void)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32(0x804863d8u);
    wrf32d(r4 + 0x28u, (f64)rdf32(r4 + 4u));
    wrf32d(r4 + 0x2cu, (f64)rdf32(r4 + 8u));
    wrf32d(r4 + 0x30u, (f64)rdf32(r4 + 0xcu));
    wrf32d(r4 + 0x34u, (f64)rdf32(r4 + 0x10u));
    wrf32d(r4 + 0x38u, (f64)rdf32(r4 + 0x14u));
    wrf32d(r4 + 0x3cu, (f64)rdf32(r4 + 0x18u));
    r4 = rd32(0x8046b7e4u);
    while (r4 != 0u) {
        r3 = r4;
        r4 = rd32(r4);
        r3 = rd32(r3 + 8u);
        wrf32d(r3 + 0x28u, (f64)rdf32(r3 + 4u));
        wrf32d(r3 + 0x2cu, (f64)rdf32(r3 + 8u));
        wrf32d(r3 + 0x30u, (f64)rdf32(r3 + 0xcu));
        wrf32d(r3 + 0x34u, (f64)rdf32(r3 + 0x10u));
        wrf32d(r3 + 0x38u, (f64)rdf32(r3 + 0x14u));
        wrf32d(r3 + 0x3cu, (f64)rdf32(r3 + 0x18u));
    }
    r4 = rd32(0x8046ad74u);
    while (r4 != 0u) {
        r3 = r4;
        r4 = rd32(r4);
        r3 = rd32(r3 + 8u);
        wrf32d(r3 + 0x28u, (f64)rdf32(r3 + 4u));
        wrf32d(r3 + 0x2cu, (f64)rdf32(r3 + 8u));
        wrf32d(r3 + 0x30u, (f64)rdf32(r3 + 0xcu));
        wrf32d(r3 + 0x34u, (f64)rdf32(r3 + 0x10u));
        wrf32d(r3 + 0x38u, (f64)rdf32(r3 + 0x14u));
        wrf32d(r3 + 0x3cu, (f64)rdf32(r3 + 0x18u));
    }
    return;
}
