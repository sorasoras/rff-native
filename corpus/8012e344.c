#include "tc_rt.h"

u32 fn_8012e344(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = rd32(r4 + 0x58u);
    r4 = r4 + 0x98u;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r30 = r3 + 0x98u;
    r3 = rd32(r3 + 0x58u);
    a.r[0] = r3;
    a.r[1] = r30;
    r3 = tc_call(0x8012d718u, &a);
    a.r[0] = r30;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    r5 = rd32(0x803541bcu);
    if (r5 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r4 = 0u;
            } else {
                r4 = rd32(0x8035417cu);
            }
        } else {
            r4 = rd32(0x80354148u);
        }
    } else {
        r4 = 0u;
    }
    if (r5 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r0 = 0u;
            } else {
                r0 = r4 & rd32(rd32(0x803541a8u));
            }
        } else {
            r0 = r4 & rd32(rd32(0x80354198u));
        }
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        r4 = rd32(rd32(0x80571398u) + 0x1a0u);
        if ((s32)r4 < 0 || (s32)r4 >= 70) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 4u;
            (void)tc_call(0x8010a75cu, &a);
        } else {
            a.r[0] = 0x8049c500u;
            a.r[1] = r4;
            r3 = tc_call(0x800c8794u, &a);
            if ((s32)r3 >= 171) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                (void)tc_call(0x8010a75cu, &a);
            } else {
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x4a0u;
                (void)tc_call(0x8014b8f0u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 6u;
                (void)tc_call(0x8010a75cu, &a);
            }
        }
    }
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5cu;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
