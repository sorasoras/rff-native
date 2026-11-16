#include "tc_rt.h"

void fn_8018b26c(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80081034u, &a);
    r0 = r3 & 0xffu;
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (c0lt) {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                a.r[0] = param_1;
                (void)tc_call(0x8018b2e4u, &a);
                return;
            }
            if (!c0lt) {
                a.r[0] = param_1;
                (void)tc_call(0x8018b360u, &a);
                return;
            }
            return;
        }
        if ((s32)r0 >= 4) {
            return;
        }
        a.r[0] = param_1;
        (void)tc_call(0x8018b3dcu, &a);
        return;
    }
    a.r[0] = param_1;
    (void)tc_call(0x8018b2e4u, &a);
    return;
}
