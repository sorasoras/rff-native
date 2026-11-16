#include "tc_rt.h"

void fn_802231ec(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    (void)tc_call(0x80044da4u, &a);
    r0 = (u32)rd8((u32)param_1 + 0x371u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80223db8u, &a);
        if (r3 == 0u) {
            wr8((u32)param_1 + 0x371u, 0u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x802231a0u, &a);
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802246b4u, &a);
            if (r3 == 0u) {
                wr8((u32)param_1 + 0x371u, 0u);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x802231a0u, &a);
            }
        } else if (c0lt) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x802242d0u, &a);
            if (r3 == 0u) {
                wr8((u32)param_1 + 0x371u, 1u);
            }
        }
    } else if ((s32)r0 >= 2) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80223774u, &a);
        if (r3 == 0u) {
            wr8((u32)param_1 + 0x371u, 1u);
        }
    }
    return;
}
