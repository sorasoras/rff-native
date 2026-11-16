#include "tc_rt.h"

void fn_800a41b4(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a4500u, &a);
    r31 = r3;
    a.r[0] = 0xffffffffu;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x800a74e4u, &a);
    if (r3 == 7u && (u32)rd8(((u32)param_1 * 0x38u) - 0x7fb64fcau) == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xcu;
        r3 = tc_call(0x8014da9cu, &a);
        c0lt = (s32)r3 < 1;
        if (r3 != 1u) {
            if (c0lt) {
                return;
            }
            if ((s32)r3 >= 3) {
                return;
            }
            a.r[0] = r31;
            a.r[1] = 0x288u;
            (void)tc_call(0x800f33b4u, &a);
        } else {
            a.r[0] = r31;
            a.r[1] = 0x287u;
            (void)tc_call(0x800f33b4u, &a);
        }
    }
    return;
}
