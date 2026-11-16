#include "tc_rt.h"

u32 fn_80043d20(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571028u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x8057102cu) != 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x80043e0cu, &a);
            r3 = 1u;
        } else {
            if (rd32(0x80571030u) != 0u) {
                (void)tc_call(0x80043de8u, &a);
                r3 = 1u;
            } else {
                r3 = tc_call(0x80043d18u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0u;
                    (void)tc_call(0x80043e0cu, &a);
                    r3 = 1u;
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}
