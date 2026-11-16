#include "tc_rt.h"

void fn_80200234(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x6cu);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (c0lt) {
            if ((s32)r0 >= 0) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x80200294u, &a);
                return;
            }
            return;
        }
        if ((s32)r0 >= 3) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802004d8u, &a);
        return;
    }
    return;
}
