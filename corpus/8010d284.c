#include "tc_rt.h"

u32 fn_8010d284(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)rd8(0x80492824u);
    a.r[1] = (u32)rd8(0x80492825u);
    r3 = tc_call(0x8010d278u, &a);
    r30 = r3;
    a.r[0] = 4u;
    a.r[1] = 0x3bu;
    r3 = tc_call(0x8010d278u, &a);
    r31 = r3;
    a.r[0] = 0u;
    a.r[1] = 0x3bu;
    r3 = tc_call(0x8010d278u, &a);
    if ((s32)r30 <= (s32)r3 || (s32)r30 > (s32)r31) {
        r3 = 3u;
    } else {
        a.r[0] = 2u;
        a.r[1] = 0x3bu;
        r3 = tc_call(0x8010d278u, &a);
        if ((s32)r30 > (s32)r3) {
            r3 = 5u;
        } else {
            a.r[0] = 0u;
            a.r[1] = 0x3bu;
            r3 = tc_call(0x8010d278u, &a);
            if ((s32)r30 > (s32)r3) {
                r3 = 4u;
            } else {
                r3 = 3u;
            }
        }
    }
    return r3;
}
