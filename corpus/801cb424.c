#include "tc_rt.h"

u32 fn_801cb424(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = 0xffffffffu;
    r0 = (u32)rd8(0x80492821u);
    r4 = (u32)rd8(0x80492824u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        a.r[1] = r4;
        r3 = tc_call(0x801cb570u, &a);
        r5 = r3;
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            a.r[1] = r4;
            r3 = tc_call(0x801cb5a0u, &a);
            r5 = r3;
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            a.r[1] = r4;
            r3 = tc_call(0x801cb510u, &a);
            r5 = r3;
        } else if (!c0lt) {
            a.r[1] = r4;
            r3 = tc_call(0x801cb540u, &a);
            r5 = r3;
        }
    }
    return r5;
}
