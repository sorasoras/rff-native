#include "tc_rt.h"

u32 fn_800600f8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r6 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x80571170u, 0u);
    r6 = rd32(0x804863d8u);
    wr32(r6 + 0x9cu, rd32(r6 + 0x9cu) | 0x40000000u);
    wr32((u32)param_1 + 0x10u, 0x12u);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x801e6900u, &a);
    if (rd32(0x805706d0u) != 7u) {
        return 1u;
    }
    r6 = rd32(0x804863d8u);
    wrf32d(r6 + 0x90u, (f64)rdf32(0x804890c8u));
    wrf32d(r6 + 0x94u, (f64)rdf32(0x804890ccu));
    wrf32d(r6 + 0x98u, (f64)rdf32(0x804890d0u));
    r6 = rd32(0x8046b7e4u);
    while (r6 != 0u) {
        r3 = r6;
        r6 = rd32(r6);
        r3 = rd32(r3 + 8u);
        wrf32d(r3 + 0x90u, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x94u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x98u, (f64)rdf32(0x804890d0u));
    }
    if (rd32((u32)param_1 + 0x18u) == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xffffcfffu;
        (void)tc_call(0x8005df48u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0xffffcfffu;
        f1 = tc_callf(0x8005df40u, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x4080u;
        (void)tc_call(0x8005df48u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x4080u;
        f1 = tc_callf(0x8005df40u, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x803d29f8u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x80097c5cu, &a);
    if (r3 == 0u) {
        wr32((u32)param_1 + 0xcu, 1u);
        r3 = rd32(0x804863d8u);
        wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
        a.r[0] = rd32(0x805706e8u);
        r3 = tc_call(0x8007d150u, &a);
        r4 = rd32(r3 + 8u);
        wr32(0x80571170u, (((1u - r4) | (r4 - 1u)) >> 0x1fu) & 1u);
    }
    return 1u;
}
