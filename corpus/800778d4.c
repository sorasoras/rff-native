#include "tc_rt.h"

void fn_800778d4(u32 param_1)
{
    u32 r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if ((rd32(0x8057118cu) & 0x200u) != 0u) {
        f0 = (f64)rdf32(0x80572794u);
        f2 = (f64)rdf32(0x803d27a4u);
        f1 = (f64)rdf32(0x803d27a8u);
        wrf32d(0x817fdfc8u, (f64)rdf32(0x803d27a0u));
        f31 = (f64)rdf32(0x803d27acu);
        wrf32d(0x817fdfccu, f2);
        wrf32d(0x817fdfd0u, f1);
        wrf32d(0x817fdfd4u, f0);
        a.r[0] = 0x817fdfc8u;
        (void)tc_call(0x8004a4fcu, &a);
        r29 = 0u;
        r30 = 0x804865f4u;
        while (r29 < rd32(0x804865f0u)) {
            a.r[0] = r30;
            a.r[1] = param_1;
            (void)tc_call(0x800779b0u, &a);
            r30 = r30 + 0xcu;
            r29 = r29 + 1u;
        }
        wrf32d(0x817fdfd4u, f31);
        a.r[0] = 0x817fdfc8u;
        (void)tc_call(0x8004a4fcu, &a);
    }
    wr32(0x804865f0u, 0u);
    return;
}
