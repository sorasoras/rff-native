#include "tc_rt.h"

u32 fn_8007e160(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572860u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    f1 = (f64)rdf32((u32)param_4 + 0xcu);
    wrf32d(0x817fdfdcu, f1);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfe0u, f0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_4;
    a.r[3] = 0x817fdfd8u;
    a.r[4] = (u32)param_5;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x48u), &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(param_1 + 0x14cu, (u32)param_3);
        r3 = 1u;
        wr32(param_1 + 0x154u, rd32((u32)param_4 + 0x10u));
        wr32(param_1 + 0x158u, (u32)param_5);
        wr32(param_1 + 0x1a4u, rd32(0x804863d8u));
        wr32(param_1 + 0x1a8u, 0u);
    }
    return r3;
}
