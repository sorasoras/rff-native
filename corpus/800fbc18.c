#include "tc_rt.h"

void fn_800fbc18(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(0x803541bcu);
    if (r6 == 0u) {
        r5 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r5 = rd32(0x80354148u);
        } else {
            if (r0 == 2u) {
                r5 = rd32(0x8035417cu);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r6 == 0u) {
        r0 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r0 = r5 & rd32(rd32(0x80354198u));
        } else {
            if (r0 == 2u) {
                r0 = r5 & rd32(rd32(0x803541a8u));
            } else {
                r0 = 0u;
            }
        }
    }
    if (r0 != 0u) {
        a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44cu;
        (void)tc_call(0x8014b7dcu, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 6u;
        (void)tc_call(0x8010a75cu, &a);
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44cu;
    a.r[1] = (u32)rd16((u32)param_2 + 0xbcu);
    (void)tc_call(0x8014b774u, &a);
    return;
}
