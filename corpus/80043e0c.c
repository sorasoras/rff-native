#include "tc_rt.h"

void fn_80043e0c(s32 param_1)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80037910u, &a);
    if (r3 != 0xffffffffu) {
        (void)tc_call(0x80043da4u, &a);
        c0lt = param_1 < 2;
        if ((u32)param_1 == 2u) {
            (void)tc_call(0x8022dffcu, &a);
        } else if (!c0lt) {
            if (param_1 < 4) {
                (void)tc_call(0x8022dbecu, &a);
            }
        } else {
            c0lt = param_1 < 0;
            if ((u32)param_1 == 0u) {
                a.r[0] = 0x100u;
                (void)tc_call(0x8022dde8u, &a);
            } else if (!c0lt) {
                (void)tc_call(0x8022dfbcu, &a);
            }
        }
    }
    return;
}
