#include "tc_rt.h"

void fn_8019ed94(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    r3 = tc_call(0x8019ee58u, &a);
    if (r3 != 0u) {
        r3 = (u32)param_1 + ((u32)param_2 * 0x14u);
        r30 = rd32(r3 + 0xcu);
        r31 = r3 + 0xcu;
        if (r30 != 0u) {
            a.r[0] = r30;
            r3 = tc_call(0x80321010u, &a);
            if (r3 != 0u) {
                a.r[0] = r30;
                r3 = tc_call(0x80321010u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                } else {
                    r3 = rd32(r3 + 0xcu);
                }
                r0 = 0u;
                if (r3 == 1u || r3 == 2u) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    a.r[0] = r30;
                    (void)tc_call(0x80157e6cu, &a);
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            (void)tc_call(0x8019f15cu, &a);
        }
    }
    return;
}
