#include "tc_rt.h"

void fn_800ac03c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x5cu) == 0u && rd32((u32)param_1 + 0xcu) > 1u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = rd32((u32)param_1 + 0x48u);
        (void)tc_call(0x800abf44u, &a);
        r3 = tc_call(0x800a7854u, &a);
        r31 = r3;
        if (r3 == 0u) {
            r3 = 2u;
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8006c388u, &a);
            wr32(r31 + 0x9cu, rd32(r31 + 0x9cu) | 0x44000000u);
            a.r[0] = r31;
            (void)tc_call(0x8006c878u, &a);
            wrf32d(r31 + 0x948u, (f64)rdf32(0x80572bc0u));
            r3 = tc_call(0x800ab81cu, &a);
            if (r3 != 0u) {
                r3 = 1u;
                wr32((u32)param_1 + 0x4cu, 0u);
            } else {
                (void)tc_call(0x800ab90cu, &a);
                r3 = 2u;
            }
        }
        wr32((u32)param_1 + 0xcu, r3);
        wr32((u32)param_1 + 0x5cu, 1u);
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffffdefu);
        a.r[0] = 1u;
        (void)tc_call(0x80077b70u, &a);
        wr32((u32)param_1 + 0x60u, rd32(0x8057118cu) & 0x800u);
        r0 = rd32(0x80571188u) | 0x80u;
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffff7ffu);
        wr32(0x80571188u, r0);
        (void)tc_call(0x800749f8u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x80179f00u, &a);
        (void)tc_call(0x80072f78u, &a);
    }
    return;
}
