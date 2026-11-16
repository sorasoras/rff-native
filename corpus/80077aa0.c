#include "tc_rt.h"

void fn_80077aa0(f64 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0;
    if ((f64)rdf32(0x80572740u) != param_1) {
        f0 = (f64)rdf32(0x8057272cu);
        if (!(f0 > param_1)) {
            f0 = param_1;
        }
        r4 = rd32(0x804863d8u);
        wrf32d(r4 + 0xd0u, f0);
        wr32(r4 + 0xccu, 1u);
        r4 = rd32(0x8046b7e4u);
        while (r4 != 0u) {
            r3 = r4;
            r4 = rd32(r4);
            r3 = rd32(r3 + 8u);
            wrf32d(r3 + 0xd0u, f0);
            wr32(r3 + 0xccu, 1u);
        }
        return;
    }
    wr32(rd32(0x804863d8u) + 0xccu, 0u);
    r4 = rd32(0x8046b7e4u);
    while (r4 != 0u) {
        r3 = r4;
        r4 = rd32(r4);
        r3 = rd32(r3 + 8u);
        wr32(r3 + 0xccu, 0u);
    }
    return;
}
