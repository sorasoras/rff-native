#include "tc_rt.h"

u32 fn_80185c08(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0u;
    r3 = 0u;
    r0 = 0u;
    if (param_2 >= 504 && param_2 <= 646) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r3 = 1u;
    } else {
        r0 = 0u;
        if (param_2 >= 0 && param_2 <= 36) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            r3 = 1u;
        } else {
            r0 = 0u;
            if (param_2 >= 353 && param_2 <= 360) {
                r0 = 1u;
            }
            if (r0 != 0u) {
                r3 = 1u;
            }
        }
    }
    if (r3 == 0u) {
        a.r[0] = rd32(0x804863d8u);
        r3 = tc_call(0x800c3fccu, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
