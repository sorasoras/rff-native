#include "tc_rt.h"

void fn_8003f8a8(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r5 = (u32)rd16((u32)param_1 + 0x14u);
    if ((r5 & 0x10u) != 0u) {
        r6 = (u32)param_1 + 0x24u;
    } else {
        r6 = 0u;
    }
    r4 = (u32)param_1 + 0x20u;
    r0 = (u32)param_1 + 0x1cu;
    if ((param_2 & 8u) != 0u) {
        if ((r5 & 0x40u) != 0u) {
            a.r[0] = 0u;
            a.r[1] = r4;
            a.r[2] = r4;
            a.r[3] = r6;
            a.r[4] = param_2;
            (void)tc_call(0x8003d1c8u, &a);
            return;
        }
        if ((r5 & 8u) != 0u) {
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = r4;
            a.r[3] = r6;
            a.r[4] = param_2;
            (void)tc_call(0x8003d1c8u, &a);
            return;
        }
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = r6;
        a.r[4] = param_2;
        (void)tc_call(0x8003d1c8u, &a);
        return;
    }
    a.r[0] = r0;
    a.r[1] = r4;
    a.r[2] = r4;
    a.r[3] = r6;
    a.r[4] = param_2;
    (void)tc_call(0x8003d1c8u, &a);
    return;
}
