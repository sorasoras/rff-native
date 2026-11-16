#include "tc_rt.h"

void fn_801a4710(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_2 == 0u) {
        wr32((u32)param_1 + 0xee8u, 0u);
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = 0x80480000u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        f1 = (f64)rdf32(0x80575934u);
        wr32(0x817fdfe8u, rd32(r3));
        f4 = (f64)rdf32(0x80575868u);
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32(r3 + 8u));
        a.f[0] = f1;
        a.f[1] = (f64)rdf32((u32)param_1 + 0x2d8u);
        a.f[2] = f1;
        a.f[3] = f4;
        a.r[0] = (u32)param_1;
        a.r[1] = 2u;
        a.r[2] = 0x817fdfe8u;
        a.r[3] = 0xbu;
        (void)tc_call(0x800a9298u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        a.r[2] = 1u;
        (void)tc_call(0x8007fa58u, &a);
        wr32((u32)param_1 + 0xf40u, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf98u;
        (void)tc_call(0x8010a74cu, &a);
    } else {
        if ((u32)param_2 == 1u && (s32)rd32((u32)param_1 + 0xd00u) > 0) {
            wr32((u32)param_1 + 0xee8u, 0u);
            wr32((u32)param_1 + 0x2b0u, 1u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x801a2ab8u, &a);
        }
    }
    return;
}
