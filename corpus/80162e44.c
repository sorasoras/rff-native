#include "tc_rt.h"

void fn_80162e44(s32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_3;
    if (param_2 >= 0) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80162b04u, &a);
        r31 = r3;
        if (param_3 < 0) {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            r3 = tc_call(0x80162f5cu, &a);
            r30 = r3;
        }
        r3 = (u32)param_1;
        r4 = 0u;
        ctr = 4u;
        do {
            r5 = rd32(r3 + 4u);
            if ((u32)param_2 == rd32(r5 + 0x48u) && r30 == rd32(r5 + 0x4cu)) {
                return;
            }
            r5 = rd32(r3 + 8u);
            if ((u32)param_2 == rd32(r5 + 0x48u) && r30 == rd32(r5 + 0x4cu)) {
                return;
            }
            r5 = rd32(r3 + 0xcu);
            if ((u32)param_2 == rd32(r5 + 0x48u) && r30 == rd32(r5 + 0x4cu)) {
                return;
            }
            r5 = rd32(r3 + 0x10u);
            if ((u32)param_2 == rd32(r5 + 0x48u) && r30 == rd32(r5 + 0x4cu)) {
                return;
            }
            r3 = r3 + 0x10u;
            r4 = r4 + 3u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        a.r[0] = r31;
        a.r[1] = (u32)param_2;
        a.r[2] = r30;
        (void)tc_call(0x80163c18u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x80162c98u, &a);
    }
    return;
}
