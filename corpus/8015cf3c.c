#include "tc_rt.h"

void fn_8015cf3c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x8015c988u, &a);
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x8015c0d0u, &a);
    r31 = rd32((u32)param_1 + 0x46cu);
    if (r31 != 0u) {
        r30 = 0u;
        a.r[0] = r31;
        r3 = tc_call(0x800d50c4u, &a);
        if (r3 != 0u) {
            r30 = 1u;
        }
        a.r[0] = r31;
        r3 = tc_call(0x800d5140u, &a);
        if (r3 != 0u && (u32)((s32)((rd32(r31 + 0x72cu) << 4u) & 0xc0000000u) >> 31) == 0u) {
            r30 = 1u;
        }
        if (r30 != 0u) {
            a.r[0] = r31;
            r3 = tc_call(0x800d57b4u, &a);
            wr32((u32)param_1 + 0x484u, r3);
            r3 = tc_call(0x8015ce8cu, &a);
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 1u;
                (void)tc_call(0x8015d874u, &a);
                a.r[0] = 0x804b9e14u;
                a.r[1] = 1u;
                (void)tc_call(0x8011ea94u, &a);
                (void)tc_call(0x8015cef0u, &a);
            }
        }
    }
    return;
}
