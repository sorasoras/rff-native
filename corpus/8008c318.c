#include "tc_rt.h"

u32 fn_8008c318(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    f1 = tc_lastf();
    r4 = rd32(r3);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfe8u, r4);
    wr32(0x817fdfecu, r0);
    r0 = rd32(r3 + 8u);
    r3 = rd32(0x804863d8u);
    wr32(0x817fdff0u, r0);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x30u), &a);
    r7 = rd32(r3);
    f1 = (f64)rdf32(0x817fdfecu);
    wr32(0x817fdfe0u, rd32(r3 + 4u));
    f2 = (f64)rdf32(0x80572958u);
    f0 = (f64)rdf32(0x817fdfe0u);
    wr32(0x817fdfdcu, r7);
    f1 = (f64)(f32)(f1 + f2);
    f0 = (f64)(f32)(f0 + f2);
    wr32(0x817fdfe4u, rd32(r3 + 8u));
    wrf32d(0x817fdfecu, f1);
    wrf32d(0x817fdfe0u, f0);
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
    a.r[1] = 0x817fdfdcu;
    a.r[2] = 0x817fdfe8u;
    a.r[3] = 0x817fdfd8u;
    r3 = tc_call(0x80088d34u, &a);
    if (r3 != 0u) {
        r3 = 1u;
        wr32(0x80571164u, rd32(0x817fdfd8u));
    } else {
        r3 = 0u;
    }
    return r3;
}
