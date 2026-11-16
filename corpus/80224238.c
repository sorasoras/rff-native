#include "tc_rt.h"

void fn_80224238(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8((u32)param_1 + 0x371u);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (c0lt) {
            if (r0 == 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80224ad8u, &a);
                wr8((u32)param_1 + 0x371u, 4u);
                return;
            }
            return;
        }
        if (r0 != 5u) {
            return;
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80224ad8u, &a);
    wr8((u32)param_1 + 0x371u, 4u);
    return;
}
