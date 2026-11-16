#include "tc_rt.h"

void fn_800fa058(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    f1 = tc_callf(0x800f8388u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80119f2cu, &a);
    a.r[0] = (u32)param_1 + 0x44cu;
    f1 = tc_callf(0x8014b3c0u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80191368u, &a);
    a.r[0] = 0x80571250u;
    (void)tc_call(0x80103074u, &a);
    a.r[0] = 0x804b9d30u;
    (void)tc_call(0x80100404u, &a);
    r31 = rd32(0x804863d8u);
    r3 = rd32(rd32(0x80571398u) + 0x38u);
    r4 = r3 + 4u;
    if ((u32)rd16(r3 + 4u) != rd32(r31 + 0x5c0u) || (u32)rd8(r4 + 3u) != (u32)rd8(r31 + 0x5c4u) || (u32)rd8(r4 + 2u) != (u32)rd8(r31 + 0x5c5u)) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 3u;
        (void)tc_call(0x80067950u, &a);
    }
    r5 = rd32(r31 + 0xa48u);
    r4 = rd32(rd32(0x80571398u) + 0x38u);
    if (r5 == 0u) {
        if ((u32)rd16(r4) != 0x2e8u) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = 1u;
            a.r[3] = 3u;
            (void)tc_call(0x80067950u, &a);
        }
    } else if ((u32)rd16(r4) != rd32(r5 + 0x74u) || (u32)rd8(r4 + 3u) != (u32)rd8(r5 + 0x78u) || (u32)rd8(r4 + 2u) != (u32)rd8(r5 + 0x79u)) {
        a.r[0] = r31;
        a.r[1] = r4;
        a.r[2] = 1u;
        a.r[3] = 3u;
        (void)tc_call(0x80067950u, &a);
    }
    a.r[0] = r31;
    a.r[1] = rd32(rd32(0x80571398u) + 0x38u) + 8u;
    a.r[2] = 2u;
    a.r[3] = 3u;
    (void)tc_call(0x80067950u, &a);
    a.r[0] = r31;
    a.r[1] = rd32(rd32(0x80571398u) + 0x38u) + 0xcu;
    a.r[2] = 3u;
    a.r[3] = 3u;
    (void)tc_call(0x80067950u, &a);
    a.r[0] = r31;
    a.r[1] = rd32(rd32(0x80571398u) + 0x38u) + 0x10u;
    a.r[2] = 4u;
    a.r[3] = 3u;
    (void)tc_call(0x80067950u, &a);
    a.r[0] = r31;
    a.r[1] = rd32(rd32(0x80571398u) + 0x38u) + 0x14u;
    a.r[2] = 5u;
    a.r[3] = 3u;
    (void)tc_call(0x80067950u, &a);
    return;
}
