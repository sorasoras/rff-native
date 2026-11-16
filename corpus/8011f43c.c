#include "tc_rt.h"

u32 fn_8011f43c(s32 param_1)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x4cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x802f70e0u, &a);
    } else {
        r3 = 0u;
    }
    if (r3 == 0u) {
        r31 = rd32((u32)param_1 + 0x1cu);
        r3 = rd32(r31 + 0x4cu);
        c0eq = r3 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x802f5fd8u, &a);
            }
            wr32(r31 + 0xcu, 0xffffffffu);
        }
        r3 = rd32((u32)param_1 + 0x1cu);
        if (rd32(r3 + 0xcu) != 0xffffffffu) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x8011f1d8u, &a);
        } else {
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x8011f1d8u, &a);
        }
    }
    return 1u;
}
