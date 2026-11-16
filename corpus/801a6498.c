#include "tc_rt.h"

u32 fn_801a6498(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32((u32)param_1 + 0x14u);
    wr32(0x817fdfe4u, rd32((u32)param_1 + 0x10u));
    wr32(0x817fdfe8u, r0);
    wr32(0x817fdfecu, rd32((u32)param_1 + 0x18u));
    a.r[0] = 0x817fdfe4u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe4u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfe8u, (f64)rdf32(0x80575990u));
    a.r[0] = 0x817fdfe4u;
    f1 = tc_callf(0x80234428u, &a);
    if (!(f1 < (f64)rdf32(0x80575994u))) {
        r3 = 0u;
    } else {
        r4 = rd32((u32)param_1 + 0xcu);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
            wr32((u32)param_1 + 0xcu, 0xffffffffu);
        }
        f1 = (f64)rdf32(0x80575990u);
        r3 = rd32(0x804863d8u);
        wrf32d(0x817fdfe0u, f1);
        f0 = (f64)rdf32(0x80575998u);
        wrf32d(0x817fdfdcu, f1);
        wrf32d(0x817fdfd8u, f1);
        f0 = (f64)(f32)(f0 * (f64)rdf32(r3 + 0xb4u));
        wrf32d(0x817fdfdcu, f0);
        a.r[0] = r3;
        a.r[1] = 0x69u;
        a.r[2] = 0xffffffffu;
        a.r[3] = 0x817fdfd8u;
        (void)tc_call(0x801a09a8u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x2b01u;
        a.r[2] = 0x817fdfd8u;
        (void)tc_call(0x8010a794u, &a);
        r0 = (u32)rd16(0x8049908cu) + 0x9c4u;
        if ((s32)r0 > 10000) {
            r0 = 0x2710u;
        }
        r0 = r0 & 0xffffu;
        if (r0 >= 0x2710u) {
            r0 = 0x2710u;
        }
        wr16(0x8049908cu, (u16)r0);
        r3 = rd32((u32)param_1 + 8u);
        if (r3 != 0u) {
            r3 = rd32(r3);
            wr8(r3 + 7u, (u8)((u32)rd8(r3 + 7u) & 0xf0u));
            wr32((u32)param_1 + 8u, 0u);
        }
        r3 = 1u;
    }
    return r3;
}
